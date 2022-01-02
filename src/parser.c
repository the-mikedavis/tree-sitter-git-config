#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  aux_sym_section_token1 = 1,
  anon_sym_LBRACK = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_RBRACK = 4,
  sym_section_name = 5,
  aux_sym_subsection_name_token1 = 6,
  anon_sym_EQ = 7,
  sym_name = 8,
  anon_sym_yes = 9,
  anon_sym_on = 10,
  anon_sym_1 = 11,
  anon_sym_no = 12,
  anon_sym_off = 13,
  anon_sym_0 = 14,
  anon_sym_DQUOTE_DQUOTE = 15,
  sym_true = 16,
  sym_false = 17,
  aux_sym__color_token1 = 18,
  aux_sym__color_token2 = 19,
  anon_sym_normal = 20,
  anon_sym_black = 21,
  anon_sym_red = 22,
  anon_sym_green = 23,
  anon_sym_yellow = 24,
  anon_sym_blue = 25,
  anon_sym_magenta = 26,
  anon_sym_cyan = 27,
  anon_sym_white = 28,
  anon_sym_brightblack = 29,
  anon_sym_brightred = 30,
  anon_sym_brightgreen = 31,
  anon_sym_brightyellow = 32,
  anon_sym_brightblue = 33,
  anon_sym_brightmagenta = 34,
  anon_sym_brightcyan = 35,
  anon_sym_brightwhite = 36,
  anon_sym_bold = 37,
  anon_sym_dim = 38,
  anon_sym_ul = 39,
  anon_sym_blink = 40,
  anon_sym_reverse = 41,
  anon_sym_italic = 42,
  anon_sym_strike = 43,
  anon_sym_no_DASHbold = 44,
  anon_sym_no_DASHdim = 45,
  anon_sym_no_DASHul = 46,
  anon_sym_no_DASHblink = 47,
  anon_sym_no_DASHreverse = 48,
  anon_sym_no_DASHitalic = 49,
  anon_sym_no_DASHstrike = 50,
  sym_integer = 51,
  aux_sym__quoted_string_token1 = 52,
  aux_sym__unquoted_string_token1 = 53,
  sym__escape_sequence = 54,
  anon_sym_SEMI = 55,
  anon_sym_POUND = 56,
  sym_config = 57,
  sym_section = 58,
  sym_section_header = 59,
  sym_subsection_name = 60,
  sym_variable = 61,
  sym_value = 62,
  sym__boolean = 63,
  sym_color = 64,
  sym__color = 65,
  sym_attribute = 66,
  sym_string = 67,
  sym__quoted_string = 68,
  sym__unquoted_string = 69,
  sym_comment = 70,
  aux_sym_config_repeat1 = 71,
  aux_sym_section_repeat1 = 72,
  aux_sym_subsection_name_repeat1 = 73,
  aux_sym_color_repeat1 = 74,
  aux_sym__quoted_string_repeat1 = 75,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_section_token1] = "section_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_RBRACK] = "]",
  [sym_section_name] = "section_name",
  [aux_sym_subsection_name_token1] = "subsection_name_token1",
  [anon_sym_EQ] = "=",
  [sym_name] = "name",
  [anon_sym_yes] = "true",
  [anon_sym_on] = "true",
  [anon_sym_1] = "true",
  [anon_sym_no] = "false",
  [anon_sym_off] = "false",
  [anon_sym_0] = "false",
  [anon_sym_DQUOTE_DQUOTE] = "false",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym__color_token1] = "_color_token1",
  [aux_sym__color_token2] = "_color_token2",
  [anon_sym_normal] = "normal",
  [anon_sym_black] = "black",
  [anon_sym_red] = "red",
  [anon_sym_green] = "green",
  [anon_sym_yellow] = "yellow",
  [anon_sym_blue] = "blue",
  [anon_sym_magenta] = "magenta",
  [anon_sym_cyan] = "cyan",
  [anon_sym_white] = "white",
  [anon_sym_brightblack] = "brightblack",
  [anon_sym_brightred] = "brightred",
  [anon_sym_brightgreen] = "brightgreen",
  [anon_sym_brightyellow] = "brightyellow",
  [anon_sym_brightblue] = "brightblue",
  [anon_sym_brightmagenta] = "brightmagenta",
  [anon_sym_brightcyan] = "brightcyan",
  [anon_sym_brightwhite] = "brightwhite",
  [anon_sym_bold] = "bold",
  [anon_sym_dim] = "dim",
  [anon_sym_ul] = "ul",
  [anon_sym_blink] = "blink",
  [anon_sym_reverse] = "reverse",
  [anon_sym_italic] = "italic",
  [anon_sym_strike] = "strike",
  [anon_sym_no_DASHbold] = "no-bold",
  [anon_sym_no_DASHdim] = "no-dim",
  [anon_sym_no_DASHul] = "no-ul",
  [anon_sym_no_DASHblink] = "no-blink",
  [anon_sym_no_DASHreverse] = "no-reverse",
  [anon_sym_no_DASHitalic] = "no-italic",
  [anon_sym_no_DASHstrike] = "no-strike",
  [sym_integer] = "integer",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [sym_config] = "config",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_subsection_name] = "subsection_name",
  [sym_variable] = "variable",
  [sym_value] = "value",
  [sym__boolean] = "_boolean",
  [sym_color] = "color",
  [sym__color] = "_color",
  [sym_attribute] = "attribute",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym__unquoted_string] = "_unquoted_string",
  [sym_comment] = "comment",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_subsection_name_repeat1] = "subsection_name_repeat1",
  [aux_sym_color_repeat1] = "color_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_section_token1] = aux_sym_section_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_section_name] = sym_section_name,
  [aux_sym_subsection_name_token1] = aux_sym_subsection_name_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_name] = sym_name,
  [anon_sym_yes] = anon_sym_yes,
  [anon_sym_on] = anon_sym_yes,
  [anon_sym_1] = anon_sym_yes,
  [anon_sym_no] = anon_sym_no,
  [anon_sym_off] = anon_sym_no,
  [anon_sym_0] = anon_sym_no,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_no,
  [sym_true] = anon_sym_yes,
  [sym_false] = anon_sym_no,
  [aux_sym__color_token1] = aux_sym__color_token1,
  [aux_sym__color_token2] = aux_sym__color_token2,
  [anon_sym_normal] = anon_sym_normal,
  [anon_sym_black] = anon_sym_black,
  [anon_sym_red] = anon_sym_red,
  [anon_sym_green] = anon_sym_green,
  [anon_sym_yellow] = anon_sym_yellow,
  [anon_sym_blue] = anon_sym_blue,
  [anon_sym_magenta] = anon_sym_magenta,
  [anon_sym_cyan] = anon_sym_cyan,
  [anon_sym_white] = anon_sym_white,
  [anon_sym_brightblack] = anon_sym_brightblack,
  [anon_sym_brightred] = anon_sym_brightred,
  [anon_sym_brightgreen] = anon_sym_brightgreen,
  [anon_sym_brightyellow] = anon_sym_brightyellow,
  [anon_sym_brightblue] = anon_sym_brightblue,
  [anon_sym_brightmagenta] = anon_sym_brightmagenta,
  [anon_sym_brightcyan] = anon_sym_brightcyan,
  [anon_sym_brightwhite] = anon_sym_brightwhite,
  [anon_sym_bold] = anon_sym_bold,
  [anon_sym_dim] = anon_sym_dim,
  [anon_sym_ul] = anon_sym_ul,
  [anon_sym_blink] = anon_sym_blink,
  [anon_sym_reverse] = anon_sym_reverse,
  [anon_sym_italic] = anon_sym_italic,
  [anon_sym_strike] = anon_sym_strike,
  [anon_sym_no_DASHbold] = anon_sym_no_DASHbold,
  [anon_sym_no_DASHdim] = anon_sym_no_DASHdim,
  [anon_sym_no_DASHul] = anon_sym_no_DASHul,
  [anon_sym_no_DASHblink] = anon_sym_no_DASHblink,
  [anon_sym_no_DASHreverse] = anon_sym_no_DASHreverse,
  [anon_sym_no_DASHitalic] = anon_sym_no_DASHitalic,
  [anon_sym_no_DASHstrike] = anon_sym_no_DASHstrike,
  [sym_integer] = sym_integer,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_config] = sym_config,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_subsection_name] = sym_subsection_name,
  [sym_variable] = sym_variable,
  [sym_value] = sym_value,
  [sym__boolean] = sym__boolean,
  [sym_color] = sym_color,
  [sym__color] = sym__color,
  [sym_attribute] = sym_attribute,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym__unquoted_string] = sym__unquoted_string,
  [sym_comment] = sym_comment,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_subsection_name_repeat1] = aux_sym_subsection_name_repeat1,
  [aux_sym_color_repeat1] = aux_sym_color_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_section_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_subsection_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_yes] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_no] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_off] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__color_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__color_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_normal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_black] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_red] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_green] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_yellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magenta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_white] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightblack] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightred] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightgreen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightyellow] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightblue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightmagenta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightcyan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brightwhite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_italic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strike] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHbold] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHdim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHblink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHreverse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHitalic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_DASHstrike] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__unquoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_name] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym_color] = {
    .visible = true,
    .named = true,
  },
  [sym__color] = {
    .visible = false,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_background = 1,
  field_foreground = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_background] = "background",
  [field_foreground] = "foreground",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
  [6] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_foreground, 0},
  [1] =
    {field_background, 1},
    {field_foreground, 0},
  [3] =
    {field_foreground, 1},
  [4] =
    {field_background, 2},
    {field_foreground, 0},
  [6] =
    {field_background, 2},
    {field_foreground, 1},
  [8] =
    {field_background, 3},
    {field_foreground, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_integer_character_set_1(int32_t c) {
  return (c < 'e'
    ? (c < 'M'
      ? (c < 'G'
        ? c == 'E'
        : (c <= 'G' || c == 'K'))
      : (c <= 'M' || (c < 'T'
        ? c == 'P'
        : (c <= 'T' || (c >= 'Y' && c <= 'Z')))))
    : (c <= 'e' || (c < 'p'
      ? (c < 'k'
        ? c == 'g'
        : (c <= 'k' || c == 'm'))
      : (c <= 'p' || (c < 'y'
        ? c == 't'
        : c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(157);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(115);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(62);
      if (lookahead == 'y') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == 'b') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == 'y') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(223);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(222);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == ';') ADVANCE(242);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(165);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(222);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(37);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 'u') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'g') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == 'y') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(209);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(79);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(189);
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 58:
      if (lookahead == 'f') ADVANCE(172);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(48);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(125);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(188);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(207);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(214);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(196);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(122);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(212);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(202);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(198);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(47);
      END_STATE();
    case 136:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 137:
      if (lookahead == 'w') ADVANCE(191);
      END_STATE();
    case 138:
      if (lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      if (eof) ADVANCE(157);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(154)
      END_STATE();
    case 155:
      if (eof) ADVANCE(157);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '1') ADVANCE(185);
      if (lookahead == '2') ADVANCE(179);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(65);
      if (lookahead == 'g') ADVANCE(116);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 'u') ADVANCE(83);
      if (lookahead == 'w') ADVANCE(62);
      if (lookahead == 'y') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(155)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 156:
      if (eof) ADVANCE(157);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(156)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_section_token1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead == '#') ADVANCE(245);
      if (lookahead == ';') ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(218);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(218);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__color_token1);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(180);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(184);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(218);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(181);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(182);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(218);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(177);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(218);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(218);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__color_token2);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_magenta);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_brightblack);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_brightred);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_brightgreen);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_brightyellow);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_brightblue);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_brightmagenta);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_brightcyan);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_brightwhite);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_strike);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_no_DASHbold);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_no_DASHdim);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_no_DASHul);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_no_DASHblink);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_no_DASHreverse);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_no_DASHitalic);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_no_DASHstrike);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(244);
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '1') ADVANCE(170);
      if (lookahead == '2') ADVANCE(178);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == 'b') ADVANCE(232);
      if (lookahead == 'c') ADVANCE(239);
      if (lookahead == 'd') ADVANCE(231);
      if (lookahead == 'f') ADVANCE(226);
      if (lookahead == 'g') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(238);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(237);
      if (lookahead == 't') ADVANCE(235);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == 'w') ADVANCE(230);
      if (lookahead == 'y') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(223);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(222);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(169);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(165);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(165);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 154},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 155},
  [4] = {.lex_state = 155},
  [5] = {.lex_state = 155},
  [6] = {.lex_state = 155},
  [7] = {.lex_state = 155},
  [8] = {.lex_state = 155},
  [9] = {.lex_state = 155},
  [10] = {.lex_state = 155},
  [11] = {.lex_state = 155},
  [12] = {.lex_state = 154},
  [13] = {.lex_state = 154},
  [14] = {.lex_state = 154},
  [15] = {.lex_state = 154},
  [16] = {.lex_state = 154},
  [17] = {.lex_state = 154},
  [18] = {.lex_state = 154},
  [19] = {.lex_state = 154},
  [20] = {.lex_state = 154},
  [21] = {.lex_state = 154},
  [22] = {.lex_state = 154},
  [23] = {.lex_state = 154},
  [24] = {.lex_state = 154},
  [25] = {.lex_state = 154},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 156},
  [29] = {.lex_state = 154},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 154},
  [32] = {.lex_state = 156},
  [33] = {.lex_state = 154},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 154},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 154},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 154},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 154},
  [43] = {.lex_state = 154},
  [44] = {.lex_state = 154},
  [45] = {.lex_state = 154},
  [46] = {.lex_state = 154},
  [47] = {.lex_state = 154},
  [48] = {.lex_state = 154},
  [49] = {.lex_state = 156},
  [50] = {.lex_state = 154},
  [51] = {.lex_state = 154},
  [52] = {.lex_state = 154},
  [53] = {.lex_state = 154},
  [54] = {.lex_state = 154},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 6},
  [57] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_section_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [aux_sym__color_token1] = ACTIONS(1),
    [aux_sym__color_token2] = ACTIONS(1),
    [anon_sym_normal] = ACTIONS(1),
    [anon_sym_black] = ACTIONS(1),
    [anon_sym_red] = ACTIONS(1),
    [anon_sym_green] = ACTIONS(1),
    [anon_sym_yellow] = ACTIONS(1),
    [anon_sym_blue] = ACTIONS(1),
    [anon_sym_magenta] = ACTIONS(1),
    [anon_sym_cyan] = ACTIONS(1),
    [anon_sym_white] = ACTIONS(1),
    [anon_sym_brightblack] = ACTIONS(1),
    [anon_sym_brightred] = ACTIONS(1),
    [anon_sym_brightgreen] = ACTIONS(1),
    [anon_sym_brightyellow] = ACTIONS(1),
    [anon_sym_brightblue] = ACTIONS(1),
    [anon_sym_brightmagenta] = ACTIONS(1),
    [anon_sym_brightcyan] = ACTIONS(1),
    [anon_sym_brightwhite] = ACTIONS(1),
    [anon_sym_bold] = ACTIONS(1),
    [anon_sym_dim] = ACTIONS(1),
    [anon_sym_ul] = ACTIONS(1),
    [anon_sym_blink] = ACTIONS(1),
    [anon_sym_reverse] = ACTIONS(1),
    [anon_sym_italic] = ACTIONS(1),
    [anon_sym_strike] = ACTIONS(1),
    [anon_sym_no_DASHbold] = ACTIONS(1),
    [anon_sym_no_DASHdim] = ACTIONS(1),
    [anon_sym_no_DASHul] = ACTIONS(1),
    [anon_sym_no_DASHblink] = ACTIONS(1),
    [anon_sym_no_DASHreverse] = ACTIONS(1),
    [anon_sym_no_DASHitalic] = ACTIONS(1),
    [anon_sym_no_DASHstrike] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [1] = {
    [sym_config] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_header] = STATE(36),
    [sym_comment] = STATE(1),
    [aux_sym_config_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
  },
  [2] = {
    [sym_value] = STATE(43),
    [sym__boolean] = STATE(47),
    [sym_color] = STATE(47),
    [sym__color] = STATE(6),
    [sym_attribute] = STATE(11),
    [sym_string] = STATE(47),
    [sym__quoted_string] = STATE(42),
    [sym__unquoted_string] = STATE(42),
    [sym_comment] = STATE(2),
    [aux_sym_color_repeat1] = STATE(10),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(13),
    [anon_sym_on] = ACTIONS(13),
    [anon_sym_1] = ACTIONS(13),
    [anon_sym_no] = ACTIONS(13),
    [anon_sym_off] = ACTIONS(13),
    [anon_sym_0] = ACTIONS(13),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [aux_sym__color_token1] = ACTIONS(15),
    [aux_sym__color_token2] = ACTIONS(15),
    [anon_sym_normal] = ACTIONS(15),
    [anon_sym_black] = ACTIONS(15),
    [anon_sym_red] = ACTIONS(15),
    [anon_sym_green] = ACTIONS(15),
    [anon_sym_yellow] = ACTIONS(15),
    [anon_sym_blue] = ACTIONS(15),
    [anon_sym_magenta] = ACTIONS(15),
    [anon_sym_cyan] = ACTIONS(15),
    [anon_sym_white] = ACTIONS(15),
    [anon_sym_brightblack] = ACTIONS(15),
    [anon_sym_brightred] = ACTIONS(15),
    [anon_sym_brightgreen] = ACTIONS(15),
    [anon_sym_brightyellow] = ACTIONS(15),
    [anon_sym_brightblue] = ACTIONS(15),
    [anon_sym_brightmagenta] = ACTIONS(15),
    [anon_sym_brightcyan] = ACTIONS(15),
    [anon_sym_brightwhite] = ACTIONS(15),
    [anon_sym_bold] = ACTIONS(17),
    [anon_sym_dim] = ACTIONS(17),
    [anon_sym_ul] = ACTIONS(17),
    [anon_sym_blink] = ACTIONS(17),
    [anon_sym_reverse] = ACTIONS(17),
    [anon_sym_italic] = ACTIONS(17),
    [anon_sym_strike] = ACTIONS(17),
    [anon_sym_no_DASHbold] = ACTIONS(17),
    [anon_sym_no_DASHdim] = ACTIONS(17),
    [anon_sym_no_DASHul] = ACTIONS(17),
    [anon_sym_no_DASHblink] = ACTIONS(17),
    [anon_sym_no_DASHreverse] = ACTIONS(17),
    [anon_sym_no_DASHitalic] = ACTIONS(17),
    [anon_sym_no_DASHstrike] = ACTIONS(17),
    [sym_integer] = ACTIONS(19),
    [aux_sym__unquoted_string_token1] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(23),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [3] = {
    [sym__color] = STATE(14),
    [sym_attribute] = STATE(11),
    [sym_comment] = STATE(3),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(25),
    [aux_sym_section_token1] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym__color_token1] = ACTIONS(27),
    [aux_sym__color_token2] = ACTIONS(27),
    [anon_sym_normal] = ACTIONS(27),
    [anon_sym_black] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_green] = ACTIONS(27),
    [anon_sym_yellow] = ACTIONS(27),
    [anon_sym_blue] = ACTIONS(27),
    [anon_sym_magenta] = ACTIONS(27),
    [anon_sym_cyan] = ACTIONS(27),
    [anon_sym_white] = ACTIONS(27),
    [anon_sym_brightblack] = ACTIONS(27),
    [anon_sym_brightred] = ACTIONS(27),
    [anon_sym_brightgreen] = ACTIONS(27),
    [anon_sym_brightyellow] = ACTIONS(27),
    [anon_sym_brightblue] = ACTIONS(27),
    [anon_sym_brightmagenta] = ACTIONS(27),
    [anon_sym_brightcyan] = ACTIONS(27),
    [anon_sym_brightwhite] = ACTIONS(27),
    [anon_sym_bold] = ACTIONS(29),
    [anon_sym_dim] = ACTIONS(29),
    [anon_sym_ul] = ACTIONS(29),
    [anon_sym_blink] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_italic] = ACTIONS(29),
    [anon_sym_strike] = ACTIONS(29),
    [anon_sym_no_DASHbold] = ACTIONS(29),
    [anon_sym_no_DASHdim] = ACTIONS(29),
    [anon_sym_no_DASHul] = ACTIONS(29),
    [anon_sym_no_DASHblink] = ACTIONS(29),
    [anon_sym_no_DASHreverse] = ACTIONS(29),
    [anon_sym_no_DASHitalic] = ACTIONS(29),
    [anon_sym_no_DASHstrike] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [4] = {
    [sym__color] = STATE(17),
    [sym_attribute] = STATE(11),
    [sym_comment] = STATE(4),
    [aux_sym_color_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_section_token1] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [aux_sym__color_token1] = ACTIONS(27),
    [aux_sym__color_token2] = ACTIONS(27),
    [anon_sym_normal] = ACTIONS(27),
    [anon_sym_black] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_green] = ACTIONS(27),
    [anon_sym_yellow] = ACTIONS(27),
    [anon_sym_blue] = ACTIONS(27),
    [anon_sym_magenta] = ACTIONS(27),
    [anon_sym_cyan] = ACTIONS(27),
    [anon_sym_white] = ACTIONS(27),
    [anon_sym_brightblack] = ACTIONS(27),
    [anon_sym_brightred] = ACTIONS(27),
    [anon_sym_brightgreen] = ACTIONS(27),
    [anon_sym_brightyellow] = ACTIONS(27),
    [anon_sym_brightblue] = ACTIONS(27),
    [anon_sym_brightmagenta] = ACTIONS(27),
    [anon_sym_brightcyan] = ACTIONS(27),
    [anon_sym_brightwhite] = ACTIONS(27),
    [anon_sym_bold] = ACTIONS(29),
    [anon_sym_dim] = ACTIONS(29),
    [anon_sym_ul] = ACTIONS(29),
    [anon_sym_blink] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_italic] = ACTIONS(29),
    [anon_sym_strike] = ACTIONS(29),
    [anon_sym_no_DASHbold] = ACTIONS(29),
    [anon_sym_no_DASHdim] = ACTIONS(29),
    [anon_sym_no_DASHul] = ACTIONS(29),
    [anon_sym_no_DASHblink] = ACTIONS(29),
    [anon_sym_no_DASHreverse] = ACTIONS(29),
    [anon_sym_no_DASHitalic] = ACTIONS(29),
    [anon_sym_no_DASHstrike] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [5] = {
    [sym__color] = STATE(18),
    [sym_attribute] = STATE(11),
    [sym_comment] = STATE(5),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_section_token1] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [aux_sym__color_token1] = ACTIONS(27),
    [aux_sym__color_token2] = ACTIONS(27),
    [anon_sym_normal] = ACTIONS(27),
    [anon_sym_black] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_green] = ACTIONS(27),
    [anon_sym_yellow] = ACTIONS(27),
    [anon_sym_blue] = ACTIONS(27),
    [anon_sym_magenta] = ACTIONS(27),
    [anon_sym_cyan] = ACTIONS(27),
    [anon_sym_white] = ACTIONS(27),
    [anon_sym_brightblack] = ACTIONS(27),
    [anon_sym_brightred] = ACTIONS(27),
    [anon_sym_brightgreen] = ACTIONS(27),
    [anon_sym_brightyellow] = ACTIONS(27),
    [anon_sym_brightblue] = ACTIONS(27),
    [anon_sym_brightmagenta] = ACTIONS(27),
    [anon_sym_brightcyan] = ACTIONS(27),
    [anon_sym_brightwhite] = ACTIONS(27),
    [anon_sym_bold] = ACTIONS(29),
    [anon_sym_dim] = ACTIONS(29),
    [anon_sym_ul] = ACTIONS(29),
    [anon_sym_blink] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_italic] = ACTIONS(29),
    [anon_sym_strike] = ACTIONS(29),
    [anon_sym_no_DASHbold] = ACTIONS(29),
    [anon_sym_no_DASHdim] = ACTIONS(29),
    [anon_sym_no_DASHul] = ACTIONS(29),
    [anon_sym_no_DASHblink] = ACTIONS(29),
    [anon_sym_no_DASHreverse] = ACTIONS(29),
    [anon_sym_no_DASHitalic] = ACTIONS(29),
    [anon_sym_no_DASHstrike] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [6] = {
    [sym__color] = STATE(20),
    [sym_attribute] = STATE(11),
    [sym_comment] = STATE(6),
    [aux_sym_color_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_section_token1] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [aux_sym__color_token1] = ACTIONS(27),
    [aux_sym__color_token2] = ACTIONS(27),
    [anon_sym_normal] = ACTIONS(27),
    [anon_sym_black] = ACTIONS(27),
    [anon_sym_red] = ACTIONS(27),
    [anon_sym_green] = ACTIONS(27),
    [anon_sym_yellow] = ACTIONS(27),
    [anon_sym_blue] = ACTIONS(27),
    [anon_sym_magenta] = ACTIONS(27),
    [anon_sym_cyan] = ACTIONS(27),
    [anon_sym_white] = ACTIONS(27),
    [anon_sym_brightblack] = ACTIONS(27),
    [anon_sym_brightred] = ACTIONS(27),
    [anon_sym_brightgreen] = ACTIONS(27),
    [anon_sym_brightyellow] = ACTIONS(27),
    [anon_sym_brightblue] = ACTIONS(27),
    [anon_sym_brightmagenta] = ACTIONS(27),
    [anon_sym_brightcyan] = ACTIONS(27),
    [anon_sym_brightwhite] = ACTIONS(27),
    [anon_sym_bold] = ACTIONS(29),
    [anon_sym_dim] = ACTIONS(29),
    [anon_sym_ul] = ACTIONS(29),
    [anon_sym_blink] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_italic] = ACTIONS(29),
    [anon_sym_strike] = ACTIONS(29),
    [anon_sym_no_DASHbold] = ACTIONS(29),
    [anon_sym_no_DASHdim] = ACTIONS(29),
    [anon_sym_no_DASHul] = ACTIONS(29),
    [anon_sym_no_DASHblink] = ACTIONS(29),
    [anon_sym_no_DASHreverse] = ACTIONS(29),
    [anon_sym_no_DASHitalic] = ACTIONS(29),
    [anon_sym_no_DASHstrike] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [7] = {
    [sym_attribute] = STATE(11),
    [sym_comment] = STATE(7),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_section_token1] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [aux_sym__color_token1] = ACTIONS(37),
    [aux_sym__color_token2] = ACTIONS(37),
    [anon_sym_normal] = ACTIONS(37),
    [anon_sym_black] = ACTIONS(37),
    [anon_sym_red] = ACTIONS(37),
    [anon_sym_green] = ACTIONS(37),
    [anon_sym_yellow] = ACTIONS(37),
    [anon_sym_blue] = ACTIONS(37),
    [anon_sym_magenta] = ACTIONS(37),
    [anon_sym_cyan] = ACTIONS(37),
    [anon_sym_white] = ACTIONS(37),
    [anon_sym_brightblack] = ACTIONS(37),
    [anon_sym_brightred] = ACTIONS(37),
    [anon_sym_brightgreen] = ACTIONS(37),
    [anon_sym_brightyellow] = ACTIONS(37),
    [anon_sym_brightblue] = ACTIONS(37),
    [anon_sym_brightmagenta] = ACTIONS(37),
    [anon_sym_brightcyan] = ACTIONS(37),
    [anon_sym_brightwhite] = ACTIONS(37),
    [anon_sym_bold] = ACTIONS(39),
    [anon_sym_dim] = ACTIONS(39),
    [anon_sym_ul] = ACTIONS(39),
    [anon_sym_blink] = ACTIONS(39),
    [anon_sym_reverse] = ACTIONS(39),
    [anon_sym_italic] = ACTIONS(39),
    [anon_sym_strike] = ACTIONS(39),
    [anon_sym_no_DASHbold] = ACTIONS(39),
    [anon_sym_no_DASHdim] = ACTIONS(39),
    [anon_sym_no_DASHul] = ACTIONS(39),
    [anon_sym_no_DASHblink] = ACTIONS(39),
    [anon_sym_no_DASHreverse] = ACTIONS(39),
    [anon_sym_no_DASHitalic] = ACTIONS(39),
    [anon_sym_no_DASHstrike] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(42),
    [aux_sym_section_token1] = ACTIONS(42),
    [anon_sym_LBRACK] = ACTIONS(42),
    [aux_sym__color_token1] = ACTIONS(42),
    [aux_sym__color_token2] = ACTIONS(42),
    [anon_sym_normal] = ACTIONS(42),
    [anon_sym_black] = ACTIONS(42),
    [anon_sym_red] = ACTIONS(42),
    [anon_sym_green] = ACTIONS(42),
    [anon_sym_yellow] = ACTIONS(42),
    [anon_sym_blue] = ACTIONS(42),
    [anon_sym_magenta] = ACTIONS(42),
    [anon_sym_cyan] = ACTIONS(42),
    [anon_sym_white] = ACTIONS(42),
    [anon_sym_brightblack] = ACTIONS(42),
    [anon_sym_brightred] = ACTIONS(42),
    [anon_sym_brightgreen] = ACTIONS(42),
    [anon_sym_brightyellow] = ACTIONS(42),
    [anon_sym_brightblue] = ACTIONS(42),
    [anon_sym_brightmagenta] = ACTIONS(42),
    [anon_sym_brightcyan] = ACTIONS(42),
    [anon_sym_brightwhite] = ACTIONS(42),
    [anon_sym_bold] = ACTIONS(42),
    [anon_sym_dim] = ACTIONS(42),
    [anon_sym_ul] = ACTIONS(42),
    [anon_sym_blink] = ACTIONS(42),
    [anon_sym_reverse] = ACTIONS(42),
    [anon_sym_italic] = ACTIONS(42),
    [anon_sym_strike] = ACTIONS(42),
    [anon_sym_no_DASHbold] = ACTIONS(42),
    [anon_sym_no_DASHdim] = ACTIONS(42),
    [anon_sym_no_DASHul] = ACTIONS(42),
    [anon_sym_no_DASHblink] = ACTIONS(42),
    [anon_sym_no_DASHreverse] = ACTIONS(42),
    [anon_sym_no_DASHitalic] = ACTIONS(42),
    [anon_sym_no_DASHstrike] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(44),
    [aux_sym_section_token1] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(44),
    [aux_sym__color_token1] = ACTIONS(44),
    [aux_sym__color_token2] = ACTIONS(44),
    [anon_sym_normal] = ACTIONS(44),
    [anon_sym_black] = ACTIONS(44),
    [anon_sym_red] = ACTIONS(44),
    [anon_sym_green] = ACTIONS(44),
    [anon_sym_yellow] = ACTIONS(44),
    [anon_sym_blue] = ACTIONS(44),
    [anon_sym_magenta] = ACTIONS(44),
    [anon_sym_cyan] = ACTIONS(44),
    [anon_sym_white] = ACTIONS(44),
    [anon_sym_brightblack] = ACTIONS(44),
    [anon_sym_brightred] = ACTIONS(44),
    [anon_sym_brightgreen] = ACTIONS(44),
    [anon_sym_brightyellow] = ACTIONS(44),
    [anon_sym_brightblue] = ACTIONS(44),
    [anon_sym_brightmagenta] = ACTIONS(44),
    [anon_sym_brightcyan] = ACTIONS(44),
    [anon_sym_brightwhite] = ACTIONS(44),
    [anon_sym_bold] = ACTIONS(44),
    [anon_sym_dim] = ACTIONS(44),
    [anon_sym_ul] = ACTIONS(44),
    [anon_sym_blink] = ACTIONS(44),
    [anon_sym_reverse] = ACTIONS(44),
    [anon_sym_italic] = ACTIONS(44),
    [anon_sym_strike] = ACTIONS(44),
    [anon_sym_no_DASHbold] = ACTIONS(44),
    [anon_sym_no_DASHdim] = ACTIONS(44),
    [anon_sym_no_DASHul] = ACTIONS(44),
    [anon_sym_no_DASHblink] = ACTIONS(44),
    [anon_sym_no_DASHreverse] = ACTIONS(44),
    [anon_sym_no_DASHitalic] = ACTIONS(44),
    [anon_sym_no_DASHstrike] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [10] = {
    [sym__color] = STATE(4),
    [sym_attribute] = STATE(11),
    [sym_comment] = STATE(10),
    [aux_sym_color_repeat1] = STATE(7),
    [aux_sym__color_token1] = ACTIONS(46),
    [aux_sym__color_token2] = ACTIONS(46),
    [anon_sym_normal] = ACTIONS(46),
    [anon_sym_black] = ACTIONS(46),
    [anon_sym_red] = ACTIONS(46),
    [anon_sym_green] = ACTIONS(46),
    [anon_sym_yellow] = ACTIONS(46),
    [anon_sym_blue] = ACTIONS(46),
    [anon_sym_magenta] = ACTIONS(46),
    [anon_sym_cyan] = ACTIONS(46),
    [anon_sym_white] = ACTIONS(46),
    [anon_sym_brightblack] = ACTIONS(46),
    [anon_sym_brightred] = ACTIONS(46),
    [anon_sym_brightgreen] = ACTIONS(46),
    [anon_sym_brightyellow] = ACTIONS(46),
    [anon_sym_brightblue] = ACTIONS(46),
    [anon_sym_brightmagenta] = ACTIONS(46),
    [anon_sym_brightcyan] = ACTIONS(46),
    [anon_sym_brightwhite] = ACTIONS(46),
    [anon_sym_bold] = ACTIONS(29),
    [anon_sym_dim] = ACTIONS(29),
    [anon_sym_ul] = ACTIONS(29),
    [anon_sym_blink] = ACTIONS(29),
    [anon_sym_reverse] = ACTIONS(29),
    [anon_sym_italic] = ACTIONS(29),
    [anon_sym_strike] = ACTIONS(29),
    [anon_sym_no_DASHbold] = ACTIONS(29),
    [anon_sym_no_DASHdim] = ACTIONS(29),
    [anon_sym_no_DASHul] = ACTIONS(29),
    [anon_sym_no_DASHblink] = ACTIONS(29),
    [anon_sym_no_DASHreverse] = ACTIONS(29),
    [anon_sym_no_DASHitalic] = ACTIONS(29),
    [anon_sym_no_DASHstrike] = ACTIONS(29),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(48),
    [aux_sym_section_token1] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(48),
    [aux_sym__color_token1] = ACTIONS(48),
    [aux_sym__color_token2] = ACTIONS(48),
    [anon_sym_normal] = ACTIONS(48),
    [anon_sym_black] = ACTIONS(48),
    [anon_sym_red] = ACTIONS(48),
    [anon_sym_green] = ACTIONS(48),
    [anon_sym_yellow] = ACTIONS(48),
    [anon_sym_blue] = ACTIONS(48),
    [anon_sym_magenta] = ACTIONS(48),
    [anon_sym_cyan] = ACTIONS(48),
    [anon_sym_white] = ACTIONS(48),
    [anon_sym_brightblack] = ACTIONS(48),
    [anon_sym_brightred] = ACTIONS(48),
    [anon_sym_brightgreen] = ACTIONS(48),
    [anon_sym_brightyellow] = ACTIONS(48),
    [anon_sym_brightblue] = ACTIONS(48),
    [anon_sym_brightmagenta] = ACTIONS(48),
    [anon_sym_brightcyan] = ACTIONS(48),
    [anon_sym_brightwhite] = ACTIONS(48),
    [anon_sym_bold] = ACTIONS(48),
    [anon_sym_dim] = ACTIONS(48),
    [anon_sym_ul] = ACTIONS(48),
    [anon_sym_blink] = ACTIONS(48),
    [anon_sym_reverse] = ACTIONS(48),
    [anon_sym_italic] = ACTIONS(48),
    [anon_sym_strike] = ACTIONS(48),
    [anon_sym_no_DASHbold] = ACTIONS(48),
    [anon_sym_no_DASHdim] = ACTIONS(48),
    [anon_sym_no_DASHul] = ACTIONS(48),
    [anon_sym_no_DASHblink] = ACTIONS(48),
    [anon_sym_no_DASHreverse] = ACTIONS(48),
    [anon_sym_no_DASHitalic] = ACTIONS(48),
    [anon_sym_no_DASHstrike] = ACTIONS(48),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_attribute,
    STATE(12), 2,
      sym_comment,
      aux_sym_color_repeat1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(50), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [35] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(12), 1,
      aux_sym_color_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute,
    ACTIONS(53), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(55), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [72] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(13), 1,
      aux_sym_color_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute,
    ACTIONS(57), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(55), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [109] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(12), 1,
      aux_sym_color_repeat1,
    STATE(15), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(55), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [146] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(12), 1,
      aux_sym_color_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(55), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [183] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(15), 1,
      aux_sym_color_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(55), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [220] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(16), 1,
      aux_sym_color_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(55), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [257] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(12), 1,
      aux_sym_color_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(55), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [294] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(19), 1,
      aux_sym_color_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(21), 1,
      sym_attribute,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(55), 14,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [331] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(48), 17,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [360] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(42), 17,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [389] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(44), 17,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      anon_sym_bold,
      anon_sym_dim,
      anon_sym_ul,
      anon_sym_blink,
      anon_sym_reverse,
      anon_sym_italic,
      anon_sym_strike,
      anon_sym_no_DASHbold,
      anon_sym_no_DASHdim,
      anon_sym_no_DASHul,
      anon_sym_no_DASHblink,
      anon_sym_no_DASHreverse,
      anon_sym_no_DASHitalic,
      anon_sym_no_DASHstrike,
  [418] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_section_header,
    STATE(50), 1,
      sym_section,
    STATE(24), 2,
      sym_comment,
      aux_sym_config_repeat1,
  [441] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_config_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(36), 1,
      sym_section_header,
    STATE(50), 1,
      sym_section,
    ACTIONS(9), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
  [464] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(80), 2,
      aux_sym__quoted_string_token1,
      sym__escape_sequence,
    STATE(26), 2,
      sym_comment,
      aux_sym__quoted_string_repeat1,
  [482] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      aux_sym__quoted_string_repeat1,
    STATE(27), 1,
      sym_comment,
    ACTIONS(85), 2,
      aux_sym__quoted_string_token1,
      sym__escape_sequence,
  [502] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      sym_name,
    STATE(28), 1,
      sym_comment,
    STATE(44), 1,
      sym_variable,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [522] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      aux_sym_section_token1,
    STATE(29), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_section_repeat1,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [542] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_comment,
    STATE(35), 1,
      aux_sym_subsection_name_repeat1,
    STATE(54), 1,
      sym_subsection_name,
    ACTIONS(93), 2,
      aux_sym_subsection_name_token1,
      sym__escape_sequence,
  [562] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_comment,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [580] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      sym_name,
    STATE(32), 1,
      sym_comment,
    STATE(44), 1,
      sym_variable,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [600] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      aux_sym_section_token1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(33), 2,
      sym_comment,
      aux_sym_section_repeat1,
  [618] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 2,
      aux_sym_subsection_name_token1,
      sym__escape_sequence,
    STATE(34), 2,
      sym_comment,
      aux_sym_subsection_name_repeat1,
  [636] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      aux_sym_subsection_name_repeat1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(93), 2,
      aux_sym_subsection_name_token1,
      sym__escape_sequence,
  [656] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(115), 1,
      aux_sym_section_token1,
    STATE(29), 1,
      aux_sym_section_repeat1,
    STATE(36), 1,
      sym_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [676] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_DQUOTE,
      aux_sym_subsection_name_token1,
      sym__escape_sequence,
  [691] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [706] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_DQUOTE,
      aux_sym__quoted_string_token1,
      sym__escape_sequence,
  [721] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [736] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      aux_sym__quoted_string_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(85), 2,
      aux_sym__quoted_string_token1,
      sym__escape_sequence,
  [753] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [768] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [783] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [798] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [813] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(131), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [828] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(47), 1,
      sym_comment,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [843] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(48), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [858] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      sym_name,
    STATE(44), 1,
      sym_variable,
    STATE(49), 1,
      sym_comment,
  [874] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(50), 1,
      sym_comment,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [888] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_comment,
  [904] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      sym_comment,
  [917] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_comment,
  [930] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_comment,
  [943] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(149), 1,
      sym_section_name,
    STATE(55), 1,
      sym_comment,
  [956] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(151), 1,
      aux_sym__unquoted_string_token1,
    STATE(56), 1,
      sym_comment,
  [969] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 35,
  [SMALL_STATE(14)] = 72,
  [SMALL_STATE(15)] = 109,
  [SMALL_STATE(16)] = 146,
  [SMALL_STATE(17)] = 183,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 257,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 360,
  [SMALL_STATE(23)] = 389,
  [SMALL_STATE(24)] = 418,
  [SMALL_STATE(25)] = 441,
  [SMALL_STATE(26)] = 464,
  [SMALL_STATE(27)] = 482,
  [SMALL_STATE(28)] = 502,
  [SMALL_STATE(29)] = 522,
  [SMALL_STATE(30)] = 542,
  [SMALL_STATE(31)] = 562,
  [SMALL_STATE(32)] = 580,
  [SMALL_STATE(33)] = 600,
  [SMALL_STATE(34)] = 618,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 656,
  [SMALL_STATE(37)] = 676,
  [SMALL_STATE(38)] = 691,
  [SMALL_STATE(39)] = 706,
  [SMALL_STATE(40)] = 721,
  [SMALL_STATE(41)] = 736,
  [SMALL_STATE(42)] = 753,
  [SMALL_STATE(43)] = 768,
  [SMALL_STATE(44)] = 783,
  [SMALL_STATE(45)] = 798,
  [SMALL_STATE(46)] = 813,
  [SMALL_STATE(47)] = 828,
  [SMALL_STATE(48)] = 843,
  [SMALL_STATE(49)] = 858,
  [SMALL_STATE(50)] = 874,
  [SMALL_STATE(51)] = 888,
  [SMALL_STATE(52)] = 904,
  [SMALL_STATE(53)] = 917,
  [SMALL_STATE(54)] = 930,
  [SMALL_STATE(55)] = 943,
  [SMALL_STATE(56)] = 956,
  [SMALL_STATE(57)] = 969,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__color, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 1),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(22),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 5, .production_id = 6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(55),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(39),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(49),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2), SHIFT_REPEAT(37),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_name, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unquoted_string, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [145] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_git_config(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
