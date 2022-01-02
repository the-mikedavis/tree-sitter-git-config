#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 70
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_DQUOTE = 3,
  sym_section_name = 4,
  anon_sym_EQ = 5,
  sym_name = 6,
  anon_sym_yes = 7,
  anon_sym_on = 8,
  anon_sym_1 = 9,
  anon_sym_no = 10,
  anon_sym_off = 11,
  anon_sym_0 = 12,
  anon_sym_DQUOTE_DQUOTE = 13,
  sym_true = 14,
  sym_false = 15,
  aux_sym__color_token1 = 16,
  aux_sym__color_token2 = 17,
  anon_sym_normal = 18,
  anon_sym_black = 19,
  anon_sym_red = 20,
  anon_sym_green = 21,
  anon_sym_yellow = 22,
  anon_sym_blue = 23,
  anon_sym_magenta = 24,
  anon_sym_cyan = 25,
  anon_sym_white = 26,
  anon_sym_brightblack = 27,
  anon_sym_brightred = 28,
  anon_sym_brightgreen = 29,
  anon_sym_brightyellow = 30,
  anon_sym_brightblue = 31,
  anon_sym_brightmagenta = 32,
  anon_sym_brightcyan = 33,
  anon_sym_brightwhite = 34,
  anon_sym_bold = 35,
  anon_sym_dim = 36,
  anon_sym_ul = 37,
  anon_sym_blink = 38,
  anon_sym_reverse = 39,
  anon_sym_italic = 40,
  anon_sym_strike = 41,
  anon_sym_no_DASHbold = 42,
  anon_sym_no_DASHdim = 43,
  anon_sym_no_DASHul = 44,
  anon_sym_no_DASHblink = 45,
  anon_sym_no_DASHreverse = 46,
  anon_sym_no_DASHitalic = 47,
  anon_sym_no_DASHstrike = 48,
  sym_integer = 49,
  aux_sym_string_token1 = 50,
  sym__escape_sequence = 51,
  anon_sym_SEMI = 52,
  anon_sym_POUND = 53,
  aux_sym_comment_token1 = 54,
  sym_source = 55,
  sym_section = 56,
  sym_section_header = 57,
  sym_variable = 58,
  sym_value = 59,
  sym__boolean = 60,
  sym_color = 61,
  sym__color = 62,
  sym_attribute = 63,
  sym_string = 64,
  sym_comment = 65,
  aux_sym_source_repeat1 = 66,
  aux_sym_section_repeat1 = 67,
  aux_sym_color_repeat1 = 68,
  aux_sym_string_repeat1 = 69,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_section_name] = "section_name",
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
  [aux_sym_string_token1] = "string_token1",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_SEMI] = ";",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source] = "source",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_variable] = "variable",
  [sym_value] = "value",
  [sym__boolean] = "_boolean",
  [sym_color] = "color",
  [sym__color] = "_color",
  [sym_attribute] = "attribute",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_color_repeat1] = "color_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_section_name] = sym_section_name,
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
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source] = sym_source,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_variable] = sym_variable,
  [sym_value] = sym_value,
  [sym__boolean] = sym__boolean,
  [sym_color] = sym_color,
  [sym__color] = sym__color,
  [sym_attribute] = sym_attribute,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_color_repeat1] = aux_sym_color_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
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
  [aux_sym_string_token1] = {
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
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_color_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
      if (eof) ADVANCE(179);
      if (lookahead == ' ') SKIP(164)
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '0') ADVANCE(224);
      if (lookahead == '1') ADVANCE(221);
      if (lookahead == '2') ADVANCE(185);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(191);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(190);
      if (lookahead == 'g') ADVANCE(195);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(189);
      if (lookahead == 'y') ADVANCE(188);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(184);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == '\t') SKIP(6)
      END_STATE();
    case 3:
      if (lookahead == 11) SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == 11) SKIP(10)
      END_STATE();
    case 5:
      if (lookahead == '\f') SKIP(3)
      END_STATE();
    case 6:
      if (lookahead == '\f') SKIP(4)
      END_STATE();
    case 7:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '"') ADVANCE(183);
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '0') ADVANCE(224);
      if (lookahead == '1') ADVANCE(221);
      if (lookahead == '2') ADVANCE(229);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == 'b') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(149);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(141);
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(69);
      if (lookahead == 'y') ADVANCE(48);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(271);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(271);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(276);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(276);
      END_STATE();
    case 10:
      if (lookahead == ' ') SKIP(2)
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(272);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(252);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'g') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(267);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(255);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(248);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 61:
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(223);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 65:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 67:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 68:
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'h') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(239);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(258);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(265);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(247);
      END_STATE();
    case 85:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 86:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 's') ADVANCE(219);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(263);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(249);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 119:
      if (lookahead == 'o') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 144:
      if (lookahead == 'v') ADVANCE(59);
      END_STATE();
    case 145:
      if (lookahead == 'w') ADVANCE(242);
      END_STATE();
    case 146:
      if (lookahead == 'w') ADVANCE(250);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 148:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 149:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 163:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 164:
      if (eof) ADVANCE(179);
      if (lookahead == '\t') SKIP(172)
      END_STATE();
    case 165:
      if (eof) ADVANCE(179);
      if (lookahead == '\t') SKIP(173)
      END_STATE();
    case 166:
      if (eof) ADVANCE(179);
      if (lookahead == '\t') SKIP(174)
      END_STATE();
    case 167:
      if (eof) ADVANCE(179);
      if (lookahead == '\t') SKIP(175)
      END_STATE();
    case 168:
      if (eof) ADVANCE(179);
      if (lookahead == 11) SKIP(0)
      END_STATE();
    case 169:
      if (eof) ADVANCE(179);
      if (lookahead == 11) SKIP(176)
      END_STATE();
    case 170:
      if (eof) ADVANCE(179);
      if (lookahead == 11) SKIP(177)
      END_STATE();
    case 171:
      if (eof) ADVANCE(179);
      if (lookahead == 11) SKIP(178)
      END_STATE();
    case 172:
      if (eof) ADVANCE(179);
      if (lookahead == '\f') SKIP(168)
      END_STATE();
    case 173:
      if (eof) ADVANCE(179);
      if (lookahead == '\f') SKIP(169)
      END_STATE();
    case 174:
      if (eof) ADVANCE(179);
      if (lookahead == '\f') SKIP(170)
      END_STATE();
    case 175:
      if (eof) ADVANCE(179);
      if (lookahead == '\f') SKIP(171)
      END_STATE();
    case 176:
      if (eof) ADVANCE(179);
      if (lookahead == ' ') SKIP(165)
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(99);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 177:
      if (eof) ADVANCE(179);
      if (lookahead == ' ') SKIP(166)
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '1') ADVANCE(236);
      if (lookahead == '2') ADVANCE(230);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead == 'g') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(35);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 178:
      if (eof) ADVANCE(179);
      if (lookahead == ' ') SKIP(167)
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == ';') ADVANCE(273);
      if (lookahead == '=') ADVANCE(201);
      if (lookahead == '[') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(225);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_section_name);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '5') ADVANCE(231);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(233);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'a') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'h') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'i') ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(214);
      if (lookahead == 'r') ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'n') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'o') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'r') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 't') ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == 'y') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_section_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_name);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(25);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd') ADVANCE(240);
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'v') ADVANCE(37);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__color_token1);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(231);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(233);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(232);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(235);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(234);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(228);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__color_token2);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_magenta);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_brightblack);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_brightred);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_brightgreen);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_brightyellow);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_brightblue);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_brightmagenta);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_brightcyan);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_brightwhite);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_strike);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_no_DASHbold);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_no_DASHdim);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_no_DASHul);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_no_DASHblink);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_no_DASHreverse);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_no_DASHitalic);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_no_DASHstrike);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 176},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 177},
  [4] = {.lex_state = 177},
  [5] = {.lex_state = 177},
  [6] = {.lex_state = 177},
  [7] = {.lex_state = 177},
  [8] = {.lex_state = 177},
  [9] = {.lex_state = 177},
  [10] = {.lex_state = 177},
  [11] = {.lex_state = 177},
  [12] = {.lex_state = 176},
  [13] = {.lex_state = 176},
  [14] = {.lex_state = 176},
  [15] = {.lex_state = 176},
  [16] = {.lex_state = 176},
  [17] = {.lex_state = 176},
  [18] = {.lex_state = 176},
  [19] = {.lex_state = 176},
  [20] = {.lex_state = 176},
  [21] = {.lex_state = 176},
  [22] = {.lex_state = 176},
  [23] = {.lex_state = 176},
  [24] = {.lex_state = 178},
  [25] = {.lex_state = 176},
  [26] = {.lex_state = 178},
  [27] = {.lex_state = 176},
  [28] = {.lex_state = 178},
  [29] = {.lex_state = 178},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 178},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 178},
  [35] = {.lex_state = 178},
  [36] = {.lex_state = 178},
  [37] = {.lex_state = 178},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 178},
  [40] = {.lex_state = 176},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 176},
  [43] = {.lex_state = 176},
  [44] = {.lex_state = 10},
  [45] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_1] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
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
    [sym_source] = STATE(43),
    [sym_section] = STATE(40),
    [sym_section_header] = STATE(28),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
  },
  [2] = {
    [sym_value] = STATE(35),
    [sym__boolean] = STATE(36),
    [sym_color] = STATE(36),
    [sym__color] = STATE(5),
    [sym_attribute] = STATE(9),
    [sym_string] = STATE(36),
    [sym_comment] = STATE(2),
    [aux_sym_color_repeat1] = STATE(8),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(13),
    [anon_sym_on] = ACTIONS(13),
    [anon_sym_1] = ACTIONS(15),
    [anon_sym_no] = ACTIONS(15),
    [anon_sym_off] = ACTIONS(13),
    [anon_sym_0] = ACTIONS(15),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(13),
    [sym_true] = ACTIONS(13),
    [sym_false] = ACTIONS(13),
    [aux_sym__color_token1] = ACTIONS(17),
    [aux_sym__color_token2] = ACTIONS(19),
    [anon_sym_normal] = ACTIONS(19),
    [anon_sym_black] = ACTIONS(19),
    [anon_sym_red] = ACTIONS(19),
    [anon_sym_green] = ACTIONS(19),
    [anon_sym_yellow] = ACTIONS(19),
    [anon_sym_blue] = ACTIONS(19),
    [anon_sym_magenta] = ACTIONS(19),
    [anon_sym_cyan] = ACTIONS(19),
    [anon_sym_white] = ACTIONS(19),
    [anon_sym_brightblack] = ACTIONS(19),
    [anon_sym_brightred] = ACTIONS(19),
    [anon_sym_brightgreen] = ACTIONS(19),
    [anon_sym_brightyellow] = ACTIONS(19),
    [anon_sym_brightblue] = ACTIONS(19),
    [anon_sym_brightmagenta] = ACTIONS(19),
    [anon_sym_brightcyan] = ACTIONS(19),
    [anon_sym_brightwhite] = ACTIONS(19),
    [anon_sym_bold] = ACTIONS(21),
    [anon_sym_dim] = ACTIONS(21),
    [anon_sym_ul] = ACTIONS(21),
    [anon_sym_blink] = ACTIONS(21),
    [anon_sym_reverse] = ACTIONS(21),
    [anon_sym_italic] = ACTIONS(21),
    [anon_sym_strike] = ACTIONS(21),
    [anon_sym_no_DASHbold] = ACTIONS(21),
    [anon_sym_no_DASHdim] = ACTIONS(21),
    [anon_sym_no_DASHul] = ACTIONS(21),
    [anon_sym_no_DASHblink] = ACTIONS(21),
    [anon_sym_no_DASHreverse] = ACTIONS(21),
    [anon_sym_no_DASHitalic] = ACTIONS(21),
    [anon_sym_no_DASHstrike] = ACTIONS(21),
    [sym_integer] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [3] = {
    [sym__color] = STATE(17),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(3),
    [aux_sym_color_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_name] = ACTIONS(27),
    [aux_sym__color_token1] = ACTIONS(29),
    [aux_sym__color_token2] = ACTIONS(29),
    [anon_sym_normal] = ACTIONS(29),
    [anon_sym_black] = ACTIONS(29),
    [anon_sym_red] = ACTIONS(29),
    [anon_sym_green] = ACTIONS(29),
    [anon_sym_yellow] = ACTIONS(29),
    [anon_sym_blue] = ACTIONS(29),
    [anon_sym_magenta] = ACTIONS(29),
    [anon_sym_cyan] = ACTIONS(29),
    [anon_sym_white] = ACTIONS(29),
    [anon_sym_brightblack] = ACTIONS(29),
    [anon_sym_brightred] = ACTIONS(29),
    [anon_sym_brightgreen] = ACTIONS(29),
    [anon_sym_brightyellow] = ACTIONS(29),
    [anon_sym_brightblue] = ACTIONS(29),
    [anon_sym_brightmagenta] = ACTIONS(29),
    [anon_sym_brightcyan] = ACTIONS(29),
    [anon_sym_brightwhite] = ACTIONS(29),
    [anon_sym_bold] = ACTIONS(21),
    [anon_sym_dim] = ACTIONS(21),
    [anon_sym_ul] = ACTIONS(21),
    [anon_sym_blink] = ACTIONS(21),
    [anon_sym_reverse] = ACTIONS(21),
    [anon_sym_italic] = ACTIONS(21),
    [anon_sym_strike] = ACTIONS(21),
    [anon_sym_no_DASHbold] = ACTIONS(21),
    [anon_sym_no_DASHdim] = ACTIONS(21),
    [anon_sym_no_DASHul] = ACTIONS(21),
    [anon_sym_no_DASHblink] = ACTIONS(21),
    [anon_sym_no_DASHreverse] = ACTIONS(21),
    [anon_sym_no_DASHitalic] = ACTIONS(21),
    [anon_sym_no_DASHstrike] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [4] = {
    [sym__color] = STATE(18),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(4),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_name] = ACTIONS(33),
    [aux_sym__color_token1] = ACTIONS(29),
    [aux_sym__color_token2] = ACTIONS(29),
    [anon_sym_normal] = ACTIONS(29),
    [anon_sym_black] = ACTIONS(29),
    [anon_sym_red] = ACTIONS(29),
    [anon_sym_green] = ACTIONS(29),
    [anon_sym_yellow] = ACTIONS(29),
    [anon_sym_blue] = ACTIONS(29),
    [anon_sym_magenta] = ACTIONS(29),
    [anon_sym_cyan] = ACTIONS(29),
    [anon_sym_white] = ACTIONS(29),
    [anon_sym_brightblack] = ACTIONS(29),
    [anon_sym_brightred] = ACTIONS(29),
    [anon_sym_brightgreen] = ACTIONS(29),
    [anon_sym_brightyellow] = ACTIONS(29),
    [anon_sym_brightblue] = ACTIONS(29),
    [anon_sym_brightmagenta] = ACTIONS(29),
    [anon_sym_brightcyan] = ACTIONS(29),
    [anon_sym_brightwhite] = ACTIONS(29),
    [anon_sym_bold] = ACTIONS(21),
    [anon_sym_dim] = ACTIONS(21),
    [anon_sym_ul] = ACTIONS(21),
    [anon_sym_blink] = ACTIONS(21),
    [anon_sym_reverse] = ACTIONS(21),
    [anon_sym_italic] = ACTIONS(21),
    [anon_sym_strike] = ACTIONS(21),
    [anon_sym_no_DASHbold] = ACTIONS(21),
    [anon_sym_no_DASHdim] = ACTIONS(21),
    [anon_sym_no_DASHul] = ACTIONS(21),
    [anon_sym_no_DASHblink] = ACTIONS(21),
    [anon_sym_no_DASHreverse] = ACTIONS(21),
    [anon_sym_no_DASHitalic] = ACTIONS(21),
    [anon_sym_no_DASHstrike] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [5] = {
    [sym__color] = STATE(20),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(5),
    [aux_sym_color_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_name] = ACTIONS(37),
    [aux_sym__color_token1] = ACTIONS(29),
    [aux_sym__color_token2] = ACTIONS(29),
    [anon_sym_normal] = ACTIONS(29),
    [anon_sym_black] = ACTIONS(29),
    [anon_sym_red] = ACTIONS(29),
    [anon_sym_green] = ACTIONS(29),
    [anon_sym_yellow] = ACTIONS(29),
    [anon_sym_blue] = ACTIONS(29),
    [anon_sym_magenta] = ACTIONS(29),
    [anon_sym_cyan] = ACTIONS(29),
    [anon_sym_white] = ACTIONS(29),
    [anon_sym_brightblack] = ACTIONS(29),
    [anon_sym_brightred] = ACTIONS(29),
    [anon_sym_brightgreen] = ACTIONS(29),
    [anon_sym_brightyellow] = ACTIONS(29),
    [anon_sym_brightblue] = ACTIONS(29),
    [anon_sym_brightmagenta] = ACTIONS(29),
    [anon_sym_brightcyan] = ACTIONS(29),
    [anon_sym_brightwhite] = ACTIONS(29),
    [anon_sym_bold] = ACTIONS(21),
    [anon_sym_dim] = ACTIONS(21),
    [anon_sym_ul] = ACTIONS(21),
    [anon_sym_blink] = ACTIONS(21),
    [anon_sym_reverse] = ACTIONS(21),
    [anon_sym_italic] = ACTIONS(21),
    [anon_sym_strike] = ACTIONS(21),
    [anon_sym_no_DASHbold] = ACTIONS(21),
    [anon_sym_no_DASHdim] = ACTIONS(21),
    [anon_sym_no_DASHul] = ACTIONS(21),
    [anon_sym_no_DASHblink] = ACTIONS(21),
    [anon_sym_no_DASHreverse] = ACTIONS(21),
    [anon_sym_no_DASHitalic] = ACTIONS(21),
    [anon_sym_no_DASHstrike] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [6] = {
    [sym__color] = STATE(16),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(6),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [sym_name] = ACTIONS(41),
    [aux_sym__color_token1] = ACTIONS(29),
    [aux_sym__color_token2] = ACTIONS(29),
    [anon_sym_normal] = ACTIONS(29),
    [anon_sym_black] = ACTIONS(29),
    [anon_sym_red] = ACTIONS(29),
    [anon_sym_green] = ACTIONS(29),
    [anon_sym_yellow] = ACTIONS(29),
    [anon_sym_blue] = ACTIONS(29),
    [anon_sym_magenta] = ACTIONS(29),
    [anon_sym_cyan] = ACTIONS(29),
    [anon_sym_white] = ACTIONS(29),
    [anon_sym_brightblack] = ACTIONS(29),
    [anon_sym_brightred] = ACTIONS(29),
    [anon_sym_brightgreen] = ACTIONS(29),
    [anon_sym_brightyellow] = ACTIONS(29),
    [anon_sym_brightblue] = ACTIONS(29),
    [anon_sym_brightmagenta] = ACTIONS(29),
    [anon_sym_brightcyan] = ACTIONS(29),
    [anon_sym_brightwhite] = ACTIONS(29),
    [anon_sym_bold] = ACTIONS(21),
    [anon_sym_dim] = ACTIONS(21),
    [anon_sym_ul] = ACTIONS(21),
    [anon_sym_blink] = ACTIONS(21),
    [anon_sym_reverse] = ACTIONS(21),
    [anon_sym_italic] = ACTIONS(21),
    [anon_sym_strike] = ACTIONS(21),
    [anon_sym_no_DASHbold] = ACTIONS(21),
    [anon_sym_no_DASHdim] = ACTIONS(21),
    [anon_sym_no_DASHul] = ACTIONS(21),
    [anon_sym_no_DASHblink] = ACTIONS(21),
    [anon_sym_no_DASHreverse] = ACTIONS(21),
    [anon_sym_no_DASHitalic] = ACTIONS(21),
    [anon_sym_no_DASHstrike] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [7] = {
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(7),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
    [aux_sym__color_token1] = ACTIONS(43),
    [aux_sym__color_token2] = ACTIONS(43),
    [anon_sym_normal] = ACTIONS(43),
    [anon_sym_black] = ACTIONS(43),
    [anon_sym_red] = ACTIONS(43),
    [anon_sym_green] = ACTIONS(43),
    [anon_sym_yellow] = ACTIONS(43),
    [anon_sym_blue] = ACTIONS(43),
    [anon_sym_magenta] = ACTIONS(43),
    [anon_sym_cyan] = ACTIONS(43),
    [anon_sym_white] = ACTIONS(43),
    [anon_sym_brightblack] = ACTIONS(43),
    [anon_sym_brightred] = ACTIONS(43),
    [anon_sym_brightgreen] = ACTIONS(43),
    [anon_sym_brightyellow] = ACTIONS(43),
    [anon_sym_brightblue] = ACTIONS(43),
    [anon_sym_brightmagenta] = ACTIONS(43),
    [anon_sym_brightcyan] = ACTIONS(43),
    [anon_sym_brightwhite] = ACTIONS(43),
    [anon_sym_bold] = ACTIONS(47),
    [anon_sym_dim] = ACTIONS(47),
    [anon_sym_ul] = ACTIONS(47),
    [anon_sym_blink] = ACTIONS(47),
    [anon_sym_reverse] = ACTIONS(47),
    [anon_sym_italic] = ACTIONS(47),
    [anon_sym_strike] = ACTIONS(47),
    [anon_sym_no_DASHbold] = ACTIONS(47),
    [anon_sym_no_DASHdim] = ACTIONS(47),
    [anon_sym_no_DASHul] = ACTIONS(47),
    [anon_sym_no_DASHblink] = ACTIONS(47),
    [anon_sym_no_DASHreverse] = ACTIONS(47),
    [anon_sym_no_DASHitalic] = ACTIONS(47),
    [anon_sym_no_DASHstrike] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [8] = {
    [sym__color] = STATE(3),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(8),
    [aux_sym_color_repeat1] = STATE(7),
    [aux_sym__color_token1] = ACTIONS(19),
    [aux_sym__color_token2] = ACTIONS(19),
    [anon_sym_normal] = ACTIONS(19),
    [anon_sym_black] = ACTIONS(19),
    [anon_sym_red] = ACTIONS(19),
    [anon_sym_green] = ACTIONS(19),
    [anon_sym_yellow] = ACTIONS(19),
    [anon_sym_blue] = ACTIONS(19),
    [anon_sym_magenta] = ACTIONS(19),
    [anon_sym_cyan] = ACTIONS(19),
    [anon_sym_white] = ACTIONS(19),
    [anon_sym_brightblack] = ACTIONS(19),
    [anon_sym_brightred] = ACTIONS(19),
    [anon_sym_brightgreen] = ACTIONS(19),
    [anon_sym_brightyellow] = ACTIONS(19),
    [anon_sym_brightblue] = ACTIONS(19),
    [anon_sym_brightmagenta] = ACTIONS(19),
    [anon_sym_brightcyan] = ACTIONS(19),
    [anon_sym_brightwhite] = ACTIONS(19),
    [anon_sym_bold] = ACTIONS(21),
    [anon_sym_dim] = ACTIONS(21),
    [anon_sym_ul] = ACTIONS(21),
    [anon_sym_blink] = ACTIONS(21),
    [anon_sym_reverse] = ACTIONS(21),
    [anon_sym_italic] = ACTIONS(21),
    [anon_sym_strike] = ACTIONS(21),
    [anon_sym_no_DASHbold] = ACTIONS(21),
    [anon_sym_no_DASHdim] = ACTIONS(21),
    [anon_sym_no_DASHul] = ACTIONS(21),
    [anon_sym_no_DASHblink] = ACTIONS(21),
    [anon_sym_no_DASHreverse] = ACTIONS(21),
    [anon_sym_no_DASHitalic] = ACTIONS(21),
    [anon_sym_no_DASHstrike] = ACTIONS(21),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [9] = {
    [sym_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(50),
    [anon_sym_LBRACK] = ACTIONS(50),
    [sym_name] = ACTIONS(52),
    [aux_sym__color_token1] = ACTIONS(50),
    [aux_sym__color_token2] = ACTIONS(50),
    [anon_sym_normal] = ACTIONS(50),
    [anon_sym_black] = ACTIONS(50),
    [anon_sym_red] = ACTIONS(50),
    [anon_sym_green] = ACTIONS(50),
    [anon_sym_yellow] = ACTIONS(50),
    [anon_sym_blue] = ACTIONS(50),
    [anon_sym_magenta] = ACTIONS(50),
    [anon_sym_cyan] = ACTIONS(50),
    [anon_sym_white] = ACTIONS(50),
    [anon_sym_brightblack] = ACTIONS(50),
    [anon_sym_brightred] = ACTIONS(50),
    [anon_sym_brightgreen] = ACTIONS(50),
    [anon_sym_brightyellow] = ACTIONS(50),
    [anon_sym_brightblue] = ACTIONS(50),
    [anon_sym_brightmagenta] = ACTIONS(50),
    [anon_sym_brightcyan] = ACTIONS(50),
    [anon_sym_brightwhite] = ACTIONS(50),
    [anon_sym_bold] = ACTIONS(50),
    [anon_sym_dim] = ACTIONS(50),
    [anon_sym_ul] = ACTIONS(50),
    [anon_sym_blink] = ACTIONS(50),
    [anon_sym_reverse] = ACTIONS(50),
    [anon_sym_italic] = ACTIONS(50),
    [anon_sym_strike] = ACTIONS(50),
    [anon_sym_no_DASHbold] = ACTIONS(50),
    [anon_sym_no_DASHdim] = ACTIONS(50),
    [anon_sym_no_DASHul] = ACTIONS(50),
    [anon_sym_no_DASHblink] = ACTIONS(50),
    [anon_sym_no_DASHreverse] = ACTIONS(50),
    [anon_sym_no_DASHitalic] = ACTIONS(50),
    [anon_sym_no_DASHstrike] = ACTIONS(50),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [10] = {
    [sym_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(54),
    [sym_name] = ACTIONS(56),
    [aux_sym__color_token1] = ACTIONS(54),
    [aux_sym__color_token2] = ACTIONS(54),
    [anon_sym_normal] = ACTIONS(54),
    [anon_sym_black] = ACTIONS(54),
    [anon_sym_red] = ACTIONS(54),
    [anon_sym_green] = ACTIONS(54),
    [anon_sym_yellow] = ACTIONS(54),
    [anon_sym_blue] = ACTIONS(54),
    [anon_sym_magenta] = ACTIONS(54),
    [anon_sym_cyan] = ACTIONS(54),
    [anon_sym_white] = ACTIONS(54),
    [anon_sym_brightblack] = ACTIONS(54),
    [anon_sym_brightred] = ACTIONS(54),
    [anon_sym_brightgreen] = ACTIONS(54),
    [anon_sym_brightyellow] = ACTIONS(54),
    [anon_sym_brightblue] = ACTIONS(54),
    [anon_sym_brightmagenta] = ACTIONS(54),
    [anon_sym_brightcyan] = ACTIONS(54),
    [anon_sym_brightwhite] = ACTIONS(54),
    [anon_sym_bold] = ACTIONS(54),
    [anon_sym_dim] = ACTIONS(54),
    [anon_sym_ul] = ACTIONS(54),
    [anon_sym_blink] = ACTIONS(54),
    [anon_sym_reverse] = ACTIONS(54),
    [anon_sym_italic] = ACTIONS(54),
    [anon_sym_strike] = ACTIONS(54),
    [anon_sym_no_DASHbold] = ACTIONS(54),
    [anon_sym_no_DASHdim] = ACTIONS(54),
    [anon_sym_no_DASHul] = ACTIONS(54),
    [anon_sym_no_DASHblink] = ACTIONS(54),
    [anon_sym_no_DASHreverse] = ACTIONS(54),
    [anon_sym_no_DASHitalic] = ACTIONS(54),
    [anon_sym_no_DASHstrike] = ACTIONS(54),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(58),
    [anon_sym_LBRACK] = ACTIONS(58),
    [sym_name] = ACTIONS(60),
    [aux_sym__color_token1] = ACTIONS(58),
    [aux_sym__color_token2] = ACTIONS(58),
    [anon_sym_normal] = ACTIONS(58),
    [anon_sym_black] = ACTIONS(58),
    [anon_sym_red] = ACTIONS(58),
    [anon_sym_green] = ACTIONS(58),
    [anon_sym_yellow] = ACTIONS(58),
    [anon_sym_blue] = ACTIONS(58),
    [anon_sym_magenta] = ACTIONS(58),
    [anon_sym_cyan] = ACTIONS(58),
    [anon_sym_white] = ACTIONS(58),
    [anon_sym_brightblack] = ACTIONS(58),
    [anon_sym_brightred] = ACTIONS(58),
    [anon_sym_brightgreen] = ACTIONS(58),
    [anon_sym_brightyellow] = ACTIONS(58),
    [anon_sym_brightblue] = ACTIONS(58),
    [anon_sym_brightmagenta] = ACTIONS(58),
    [anon_sym_brightcyan] = ACTIONS(58),
    [anon_sym_brightwhite] = ACTIONS(58),
    [anon_sym_bold] = ACTIONS(58),
    [anon_sym_dim] = ACTIONS(58),
    [anon_sym_ul] = ACTIONS(58),
    [anon_sym_blink] = ACTIONS(58),
    [anon_sym_reverse] = ACTIONS(58),
    [anon_sym_italic] = ACTIONS(58),
    [anon_sym_strike] = ACTIONS(58),
    [anon_sym_no_DASHbold] = ACTIONS(58),
    [anon_sym_no_DASHdim] = ACTIONS(58),
    [anon_sym_no_DASHul] = ACTIONS(58),
    [anon_sym_no_DASHblink] = ACTIONS(58),
    [anon_sym_no_DASHreverse] = ACTIONS(58),
    [anon_sym_no_DASHitalic] = ACTIONS(58),
    [anon_sym_no_DASHstrike] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(64), 1,
      sym_name,
    STATE(12), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(66), 14,
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
  [39] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(70), 1,
      sym_name,
    STATE(13), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(66), 14,
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
  [78] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(74), 1,
      sym_name,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(66), 14,
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
  [117] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_name,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(15), 2,
      sym_comment,
      aux_sym_color_repeat1,
    ACTIONS(76), 14,
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
  [154] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      sym_name,
    STATE(12), 1,
      aux_sym_color_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(66), 14,
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
  [193] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(85), 1,
      sym_name,
    STATE(13), 1,
      aux_sym_color_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(66), 14,
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
  [232] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      sym_name,
    STATE(14), 1,
      aux_sym_color_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(66), 14,
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
  [271] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      sym_name,
    STATE(15), 1,
      aux_sym_color_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(66), 14,
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
  [310] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      sym_name,
    STATE(19), 1,
      aux_sym_color_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    ACTIONS(66), 14,
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
  [349] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      sym_name,
    STATE(21), 1,
      sym_comment,
    ACTIONS(58), 16,
      ts_builtin_sym_end,
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
  [380] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(56), 1,
      sym_name,
    STATE(22), 1,
      sym_comment,
    ACTIONS(54), 16,
      ts_builtin_sym_end,
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
  [411] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(52), 1,
      sym_name,
    STATE(23), 1,
      sym_comment,
    ACTIONS(50), 16,
      ts_builtin_sym_end,
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
  [442] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym_name,
    STATE(24), 1,
      sym_comment,
    STATE(26), 1,
      aux_sym_section_repeat1,
    STATE(32), 1,
      sym_variable,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [465] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_section_header,
    STATE(40), 1,
      sym_section,
    STATE(25), 2,
      sym_comment,
      aux_sym_source_repeat1,
  [488] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(110), 1,
      sym_name,
    STATE(32), 1,
      sym_variable,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(26), 2,
      sym_comment,
      aux_sym_section_repeat1,
  [509] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
      aux_sym_source_repeat1,
    STATE(27), 1,
      sym_comment,
    STATE(28), 1,
      sym_section_header,
    STATE(40), 1,
      sym_section,
    ACTIONS(9), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
  [532] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym_name,
    STATE(24), 1,
      aux_sym_section_repeat1,
    STATE(28), 1,
      sym_comment,
    STATE(32), 1,
      sym_variable,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [555] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(119), 1,
      anon_sym_EQ,
    STATE(29), 1,
      sym_comment,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [573] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_string_repeat1,
    ACTIONS(123), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [593] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
    STATE(31), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [611] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(32), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [626] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_comment,
    ACTIONS(134), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__escape_sequence,
  [641] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(34), 1,
      sym_comment,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [656] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(35), 1,
      sym_comment,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [671] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(36), 1,
      sym_comment,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [686] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(37), 1,
      sym_comment,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [701] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      aux_sym_string_repeat1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(123), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [718] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_name,
  [733] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(40), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [747] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(148), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
  [760] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
      sym_comment,
  [773] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      sym_comment,
  [786] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(154), 1,
      sym_section_name,
    STATE(44), 1,
      sym_comment,
  [799] = 1,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 39,
  [SMALL_STATE(14)] = 78,
  [SMALL_STATE(15)] = 117,
  [SMALL_STATE(16)] = 154,
  [SMALL_STATE(17)] = 193,
  [SMALL_STATE(18)] = 232,
  [SMALL_STATE(19)] = 271,
  [SMALL_STATE(20)] = 310,
  [SMALL_STATE(21)] = 349,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 411,
  [SMALL_STATE(24)] = 442,
  [SMALL_STATE(25)] = 465,
  [SMALL_STATE(26)] = 488,
  [SMALL_STATE(27)] = 509,
  [SMALL_STATE(28)] = 532,
  [SMALL_STATE(29)] = 555,
  [SMALL_STATE(30)] = 573,
  [SMALL_STATE(31)] = 593,
  [SMALL_STATE(32)] = 611,
  [SMALL_STATE(33)] = 626,
  [SMALL_STATE(34)] = 641,
  [SMALL_STATE(35)] = 656,
  [SMALL_STATE(36)] = 671,
  [SMALL_STATE(37)] = 686,
  [SMALL_STATE(38)] = 701,
  [SMALL_STATE(39)] = 718,
  [SMALL_STATE(40)] = 733,
  [SMALL_STATE(41)] = 747,
  [SMALL_STATE(42)] = 760,
  [SMALL_STATE(43)] = 773,
  [SMALL_STATE(44)] = 786,
  [SMALL_STATE(45)] = 799,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, .production_id = 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 1, .production_id = 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 3, .production_id = 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_color_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(10),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 1),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_color_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__color, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__color, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 5, .production_id = 6),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 5, .production_id = 6),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 5),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 4, .production_id = 5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 4, .production_id = 4),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(22),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 4, .production_id = 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 3, .production_id = 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 3, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_color, 2, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(44),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(29),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
