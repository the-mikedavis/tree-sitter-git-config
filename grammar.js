// reference: https://git-scm.com/docs/git-config#_syntax

const NEWLINE = /\r?\n/;
const WHITE_SPACE = / \t\f\v/;
const ANYTHING = /[^\r\n]/;

// "The basic colors accepted are normal, black, red, green, yellow, blue, magenta, cyan
// and white."
const BASIC_COLORS = [
  "black",
  "red",
  "green",
  "yellow",
  "blue",
  "magenta",
  "cyan",
  "white",
];
// "All the basic colors except normal have a bright variant that can be specified by
// prefixing the color with bright, like brightred."
const COLORS = [
  "normal",
  ...BASIC_COLORS,
  ...BASIC_COLORS.map((c) => `bright${c}`),
];
// "If your terminal supports it, you may also specify 24-bit RGB values as hex,
// like #ff0ab3."
const HEX_COLOR = /#[0-9a-fA-F]{6}/;
// "Colors may also be given as numbers between 0 and 255"
const INT_COLOR = /25[0-5]|2[0-4]\d|1\d\d|\d\d|\d/;
// The accepted attributes are bold, dim, ul, blink, reverse, italic, and strike
// (for crossed-out or "strikethrough" letters).
const BASIC_ATTRIBUTES = [
  "bold",
  "dim",
  "ul",
  "blink",
  "reverse",
  "italic",
  "strike",
];
// Specific attributes may be turned off by prefixing them with no or no- (e.g.,
// noreverse, no-ul, etc).
const ATTRIBUTES = BASIC_ATTRIBUTES.concat(
  BASIC_ATTRIBUTES.map((a) => `no-${a}`)
);

module.exports = grammar({
  name: "git_config",

  extras: ($) => [WHITE_SPACE, $.comment],

  rules: {
    config: ($) => repeat(choice($.section, $.subsection)),

    section: ($) =>
      seq(
        $.section_header,
        repeat(seq(NEWLINE, $.variable)),
        optional(NEWLINE)
      ),

    subsection: ($) =>
      seq(
        $.subsection_header,
        repeat(seq(NEWLINE, $.variable)),
        optional(NEWLINE)
      ),

    section_header: ($) => seq("[", $.section_name, "]"),

    subsection_header: ($) =>
      seq("[", $.section_name, '"', $.subsection_name, '"', "]"),

    // "Only alphanumeric characters, - and . are allowed in section names"
    section_name: ($) => /[\w\.]+/,

    // "Subsection names are case sensitive and can contain any characters except newline
    // and the null byte."
    subsection_name: ($) => /[^\r\n\x00]+/,

    // "All the other lines (and the remainder of the line after the section header) are
    // recognized as setting variables, in the form name = value (or just name, which is
    // a short-hand to say that the variable is the boolean "true")."
    variable: ($) => choice(seq($.name, "=", $.value), $.name),

    // "The variable names are case-insensitive, allow only alphanumeric characters and -,
    // and must start with an alphabetic character."
    name: ($) => /[a-zA-Z][\w\-]*/,

    // https://git-scm.com/docs/git-config#_values
    value: ($) => choice($._boolean, $.color, $.integer, $.string),

    _boolean: ($) =>
      choice(
        // "Boolean true literals are yes, on, true, and 1."
        alias(choice($.true, "yes", "on", "1"), $.true),
        // "Boolean false literals are no, off, false, 0 and the empty string."
        alias(choice($.false, "no", "off", "0", '""'), $.false)
      ),

    true: ($) => "true",
    false: ($) => "false",

    // "The value for a variable that takes a color is a list of colors (at most two,
    // one for foreground and one for background) and attributes (as many as you want),
    // separated by spaces."
    color: ($) =>
      seq(
        repeat($.attribute),
        field("foreground", $._color),
        repeat($.attribute),
        optional(seq(field("background", $._color), repeat($.attribute)))
      ),

    _color: ($) => choice(INT_COLOR, HEX_COLOR, ...COLORS),

    attribute: ($) => choice(...ATTRIBUTES),

    // "The value for many variables that specify various sizes can be suffixed with k, M,…
    // to mean "scale the number by 1024", "by 1024x1024", etc."
    integer: ($) => /\d+[kmgtpezyKMGTPEZY]?/,

    string: ($) =>
      seq('"', repeat1(choice(/[^\"\\]/, $._escape_sequence)), '"'),

    _escape_sequence: ($) => /\\([btnfr"\\]|u[0-9a-fA-F]{4}|U[0-9a-fA-F]{8})/,

    comment: ($) => seq(choice(";", "#"), ANYTHING),
  },
});
