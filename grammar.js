// reference: https://git-scm.com/docs/git-config#_syntax

const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[ \t\f\v]/;
const ANYTHING = /[^\r\n]+/;

module.exports = grammar({
  name: "git_config",

  extras: ($) => [WHITE_SPACE],

  rules: {
    config: ($) => repeat(choice($.section, seq(optional($.comment), NEWLINE))),

    section: ($) => seq($.section_header, $._section_body),

    section_header: ($) =>
      seq("[", $.section_name, optional(seq('"', $.subsection_name, '"')), "]"),

    // "Only alphanumeric characters, - and . are allowed in section names"
    section_name: ($) => /[\w\.]+/,

    _section_body: ($) =>
      prec.right(sep1(NEWLINE, seq(optional($.variable), optional($.comment)))),

    // "Subsection names are case sensitive and can contain any characters except newline
    // and the null byte."
    subsection_name: ($) =>
      repeat1(choice(/[^\r\n\x00\"\\]+/, $.escape_sequence)),

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
    integer: ($) => /\d+[kmgtpezyKMGTPEZY]?/,

    string: ($) =>
      repeat1(
        choice($._quoted_string, $._unquoted_string, $._line_continuation)
      ),

    _quoted_string: ($) =>
      seq(
        '"',
        repeat(choice(/[^\"]/, $.escape_sequence, $._line_continuation)),
        '"'
      ),

    _unquoted_string: ($) => /[^\r\n;#" \t\f\v\\][^\r\n;#"\\]*/,

    escape_sequence: ($) => /\\([btnfr"\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})/,

    // "A line that defines a value can be continued to the next line by ending it with a
    // backslash (\); the backslash and the end-of-line characters are discarded."
    _line_continuation: ($) => seq("\\", NEWLINE),

    comment: ($) => seq(/[#;]/, optional(ANYTHING)),
  },
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
