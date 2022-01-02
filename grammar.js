const NEWLINE = /\r?\n/;
const WHITE_SPACE = / \t\f\v/;

module.exports = grammar({
  name: 'git_config',

  rules: {
    source: ($) => 'hello',
  },
});
