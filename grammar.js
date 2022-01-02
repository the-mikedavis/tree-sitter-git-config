// reference: https://git-scm.com/docs/git-config#_syntax

const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[ \t\f\v]/;
const ANYTHING = /[^\r\n]+/;

module.exports = grammar({
  name: "git_config",

  extras: ($) => [WHITE_SPACE, $.comment],

  rules: {
    config: ($) => repeat($.section),

    section: ($) => seq($.section_header, repeat(choice(NEWLINE, $.variable))),

    section_header: ($) =>
      seq("[", $.section_name, optional(seq('"', $.subsection_name, '"')), "]"),

    // "Only alphanumeric characters, - and . are allowed in section names"
    section_name: ($) => /[\w\.]+/,

    // "Subsection names are case sensitive and can contain any characters except newline
    // and the null byte."
    subsection_name: ($) =>
      repeat1(choice(/[^\r\n\x00\"\\]+/, $._escape_sequence)),

    // "All the other lines (and the remainder of the line after the section header) are
    // recognized as setting variables, in the form name = value (or just name, which is
    // a short-hand to say that the variable is the boolean "true")."
    variable: ($) =>
      seq(choice(seq($.name, "=", field("value", $._value)), $.name)),

    // "The variable names are case-insensitive, allow only alphanumeric characters and -,
    // and must start with an alphabetic character."
    name: ($) => /[a-zA-Z][\w\-]*/,

    // https://git-scm.com/docs/git-config#_values
    _value: ($) => choice($._boolean, $.integer, $.string),

    // NOTE: we diverge from the spec here to parse integers and empty strings
    // as integers and strings rather than booleans, which is syntactically
    // correct but possibly semantically incorrect.
    _boolean: ($) =>
      choice(
        // "Boolean true literals are yes, on, true, and 1."
        alias(choice($.true, "yes", "on"), $.true),
        // "Boolean false literals are no, off, false, 0 and the empty string."
        alias(choice($.false, "no", "off"), $.false)
      ),

    true: ($) => "true",
    false: ($) => "false",

    // "The value for many variables that specify various sizes can be suffixed with k, M,…
    // to mean "scale the number by 1024", "by 1024x1024", etc."
    //
    // We take manual control of precedence here since the $.color rule is more complicated
    // and tends to match with higher implicit precedence.
    integer: ($) => token(prec(1, /\d+[kmgtpezyKMGTPEZY]?/)),

    string: ($) => choice($._quoted_string, $._unquoted_string),

    _quoted_string: ($) =>
      seq('"', repeat1(choice(/[^\"\\]/, $._escape_sequence)), '"'),

    _unquoted_string: ($) => /[^\r\n;#]+/,

    _escape_sequence: ($) => /\\([btnfr"\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})/,

    comment: ($) => seq(/[#;]/, optional(ANYTHING), NEWLINE),
  },
});
