const NEWLINE = /\r?\n/;
const WHITE_SPACE = / \t\f\v/;
const ANYTHING = /[^\r\n]/;

module.exports = grammar({
  name: "git_config",

  extras: ($) => [WHITE_SPACE, $.comment],

  rules: {
    source: ($) => "hello",

    comment: ($) => seq(choice(";", "#"), ANYTHING),
  },
});
