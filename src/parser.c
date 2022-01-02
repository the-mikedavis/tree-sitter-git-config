#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  aux_sym_section_token1 = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_DQUOTE = 4,
  sym_section_name = 5,
  sym_subsection_name = 6,
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
  aux_sym_string_token1 = 52,
  sym__escape_sequence = 53,
  anon_sym_SEMI = 54,
  anon_sym_POUND = 55,
  aux_sym_comment_token1 = 56,
  sym_config = 57,
  sym_section = 58,
  sym_subsection = 59,
  sym_section_header = 60,
  sym_subsection_header = 61,
  sym_variable = 62,
  sym_value = 63,
  sym__boolean = 64,
  sym_color = 65,
  sym__color = 66,
  sym_attribute = 67,
  sym_string = 68,
  sym_comment = 69,
  aux_sym_config_repeat1 = 70,
  aux_sym_section_repeat1 = 71,
  aux_sym_color_repeat1 = 72,
  aux_sym_string_repeat1 = 73,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_section_token1] = "section_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [sym_section_name] = "section_name",
  [sym_subsection_name] = "subsection_name",
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
  [sym_config] = "config",
  [sym_section] = "section",
  [sym_subsection] = "subsection",
  [sym_section_header] = "section_header",
  [sym_subsection_header] = "subsection_header",
  [sym_variable] = "variable",
  [sym_value] = "value",
  [sym__boolean] = "_boolean",
  [sym_color] = "color",
  [sym__color] = "_color",
  [sym_attribute] = "attribute",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_color_repeat1] = "color_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_section_token1] = aux_sym_section_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_section_name] = sym_section_name,
  [sym_subsection_name] = sym_subsection_name,
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
  [sym_config] = sym_config,
  [sym_section] = sym_section,
  [sym_subsection] = sym_subsection,
  [sym_section_header] = sym_section_header,
  [sym_subsection_header] = sym_subsection_header,
  [sym_variable] = sym_variable,
  [sym_value] = sym_value,
  [sym__boolean] = sym__boolean,
  [sym_color] = sym_color,
  [sym__color] = sym__color,
  [sym_attribute] = sym_attribute,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_color_repeat1] = aux_sym_color_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
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
  [sym_subsection_name] = {
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
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection] = {
    .visible = true,
    .named = true,
  },
  [sym_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_header] = {
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
  [aux_sym_config_repeat1] = {
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
      if (eof) ADVANCE(171);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(156)
      if (lookahead == '"') ADVANCE(176);
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '0') ADVANCE(190);
      if (lookahead == '1') ADVANCE(187);
      if (lookahead == '2') ADVANCE(195);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 't') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == 'y') ADVANCE(35);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 1:
      if (lookahead == '\t') SKIP(4)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(172);
      END_STATE();
    case 3:
      if (lookahead == 11) SKIP(8)
      END_STATE();
    case 4:
      if (lookahead == '\f') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(237);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(182);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(244);
      END_STATE();
    case 8:
      if (lookahead == ' ') SKIP(1)
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(149);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(238);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(90);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'g') ADVANCE(121);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == 'w') ADVANCE(66);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(226);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(206);
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 60:
      if (lookahead == 'f') ADVANCE(189);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(65);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(71);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(127);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(109);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(205);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(224);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(231);
      END_STATE();
    case 81:
      if (lookahead == 'k') ADVANCE(213);
      END_STATE();
    case 82:
      if (lookahead == 'k') ADVANCE(41);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(43);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(230);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(91);
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'm') ADVANCE(222);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 137:
      if (lookahead == 'v') ADVANCE(49);
      END_STATE();
    case 138:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 139:
      if (lookahead == 'w') ADVANCE(208);
      END_STATE();
    case 140:
      if (lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 142:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (eof) ADVANCE(171);
      if (lookahead == '\t') SKIP(166)
      END_STATE();
    case 157:
      if (eof) ADVANCE(171);
      if (lookahead == '\t') SKIP(167)
      END_STATE();
    case 158:
      if (eof) ADVANCE(171);
      if (lookahead == '\t') SKIP(168)
      END_STATE();
    case 159:
      if (eof) ADVANCE(171);
      if (lookahead == '\t') SKIP(169)
      END_STATE();
    case 160:
      if (eof) ADVANCE(171);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(157)
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '=') ADVANCE(183);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == ']') ADVANCE(174);
      if (lookahead == 'b') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(58);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 161:
      if (eof) ADVANCE(171);
      if (lookahead == '\n') ADVANCE(172);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == ' ') SKIP(158)
      if (lookahead == '#') ADVANCE(242);
      if (lookahead == '1') ADVANCE(202);
      if (lookahead == '2') ADVANCE(196);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '[') ADVANCE(173);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(141);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == 'w') ADVANCE(64);
      if (lookahead == 'y') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 162:
      if (eof) ADVANCE(171);
      if (lookahead == 11) SKIP(0)
      END_STATE();
    case 163:
      if (eof) ADVANCE(171);
      if (lookahead == 11) SKIP(160)
      END_STATE();
    case 164:
      if (eof) ADVANCE(171);
      if (lookahead == 11) SKIP(161)
      END_STATE();
    case 165:
      if (eof) ADVANCE(171);
      if (lookahead == 11) SKIP(170)
      END_STATE();
    case 166:
      if (eof) ADVANCE(171);
      if (lookahead == '\f') SKIP(162)
      END_STATE();
    case 167:
      if (eof) ADVANCE(171);
      if (lookahead == '\f') SKIP(163)
      END_STATE();
    case 168:
      if (eof) ADVANCE(171);
      if (lookahead == '\f') SKIP(164)
      END_STATE();
    case 169:
      if (eof) ADVANCE(171);
      if (lookahead == '\f') SKIP(165)
      END_STATE();
    case 170:
      if (eof) ADVANCE(171);
      if (lookahead == ' ') SKIP(159)
      if (lookahead == '#') ADVANCE(241);
      if (lookahead == ';') ADVANCE(239);
      if (lookahead == '[') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_section_token1);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_subsection_name);
      if (lookahead == '\t') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(182);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_subsection_name);
      if (lookahead == 11) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_subsection_name);
      if (lookahead == '\f') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_subsection_name);
      if (lookahead == ' ') ADVANCE(178);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ';') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_subsection_name);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__color_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(197);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(201);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(198);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(199);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(194);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__color_token2);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_magenta);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_brightblack);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_brightred);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_brightgreen);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_brightyellow);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_brightblue);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_brightmagenta);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_brightcyan);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_brightwhite);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_strike);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_no_DASHbold);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_no_DASHdim);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_no_DASHul);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_no_DASHblink);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_no_DASHreverse);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_no_DASHitalic);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_no_DASHstrike);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(182);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(182);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 161},
  [4] = {.lex_state = 161},
  [5] = {.lex_state = 161},
  [6] = {.lex_state = 161},
  [7] = {.lex_state = 161},
  [8] = {.lex_state = 161},
  [9] = {.lex_state = 161},
  [10] = {.lex_state = 161},
  [11] = {.lex_state = 161},
  [12] = {.lex_state = 160},
  [13] = {.lex_state = 160},
  [14] = {.lex_state = 160},
  [15] = {.lex_state = 160},
  [16] = {.lex_state = 160},
  [17] = {.lex_state = 160},
  [18] = {.lex_state = 160},
  [19] = {.lex_state = 160},
  [20] = {.lex_state = 160},
  [21] = {.lex_state = 160},
  [22] = {.lex_state = 160},
  [23] = {.lex_state = 160},
  [24] = {.lex_state = 160},
  [25] = {.lex_state = 160},
  [26] = {.lex_state = 170},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 160},
  [29] = {.lex_state = 160},
  [30] = {.lex_state = 170},
  [31] = {.lex_state = 160},
  [32] = {.lex_state = 160},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 160},
  [35] = {.lex_state = 170},
  [36] = {.lex_state = 160},
  [37] = {.lex_state = 170},
  [38] = {.lex_state = 160},
  [39] = {.lex_state = 160},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 160},
  [43] = {.lex_state = 160},
  [44] = {.lex_state = 160},
  [45] = {.lex_state = 160},
  [46] = {.lex_state = 160},
  [47] = {.lex_state = 170},
  [48] = {.lex_state = 160},
  [49] = {.lex_state = 160},
  [50] = {.lex_state = 160},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 160},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 160},
  [55] = {.lex_state = 8},
  [56] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_section_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
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
    [sym_config] = STATE(54),
    [sym_section] = STATE(49),
    [sym_subsection] = STATE(49),
    [sym_section_header] = STATE(28),
    [sym_subsection_header] = STATE(29),
    [sym_comment] = STATE(1),
    [aux_sym_config_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(9),
  },
  [2] = {
    [sym_value] = STATE(45),
    [sym__boolean] = STATE(46),
    [sym_color] = STATE(46),
    [sym__color] = STATE(3),
    [sym_attribute] = STATE(9),
    [sym_string] = STATE(46),
    [sym_comment] = STATE(2),
    [aux_sym_color_repeat1] = STATE(11),
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
    [sym__color] = STATE(19),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(3),
    [aux_sym_color_repeat1] = STATE(4),
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
    [sym__color] = STATE(14),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(4),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_section_token1] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
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
    [sym__color] = STATE(13),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(5),
    [aux_sym_color_repeat1] = STATE(6),
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
    [sym__color] = STATE(20),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(6),
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
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_section_token1] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [aux_sym__color_token1] = ACTIONS(35),
    [aux_sym__color_token2] = ACTIONS(35),
    [anon_sym_normal] = ACTIONS(35),
    [anon_sym_black] = ACTIONS(35),
    [anon_sym_red] = ACTIONS(35),
    [anon_sym_green] = ACTIONS(35),
    [anon_sym_yellow] = ACTIONS(35),
    [anon_sym_blue] = ACTIONS(35),
    [anon_sym_magenta] = ACTIONS(35),
    [anon_sym_cyan] = ACTIONS(35),
    [anon_sym_white] = ACTIONS(35),
    [anon_sym_brightblack] = ACTIONS(35),
    [anon_sym_brightred] = ACTIONS(35),
    [anon_sym_brightgreen] = ACTIONS(35),
    [anon_sym_brightyellow] = ACTIONS(35),
    [anon_sym_brightblue] = ACTIONS(35),
    [anon_sym_brightmagenta] = ACTIONS(35),
    [anon_sym_brightcyan] = ACTIONS(35),
    [anon_sym_brightwhite] = ACTIONS(35),
    [anon_sym_bold] = ACTIONS(37),
    [anon_sym_dim] = ACTIONS(37),
    [anon_sym_ul] = ACTIONS(37),
    [anon_sym_blink] = ACTIONS(37),
    [anon_sym_reverse] = ACTIONS(37),
    [anon_sym_italic] = ACTIONS(37),
    [anon_sym_strike] = ACTIONS(37),
    [anon_sym_no_DASHbold] = ACTIONS(37),
    [anon_sym_no_DASHdim] = ACTIONS(37),
    [anon_sym_no_DASHul] = ACTIONS(37),
    [anon_sym_no_DASHblink] = ACTIONS(37),
    [anon_sym_no_DASHreverse] = ACTIONS(37),
    [anon_sym_no_DASHitalic] = ACTIONS(37),
    [anon_sym_no_DASHstrike] = ACTIONS(37),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(40),
    [aux_sym_section_token1] = ACTIONS(40),
    [anon_sym_LBRACK] = ACTIONS(40),
    [aux_sym__color_token1] = ACTIONS(40),
    [aux_sym__color_token2] = ACTIONS(40),
    [anon_sym_normal] = ACTIONS(40),
    [anon_sym_black] = ACTIONS(40),
    [anon_sym_red] = ACTIONS(40),
    [anon_sym_green] = ACTIONS(40),
    [anon_sym_yellow] = ACTIONS(40),
    [anon_sym_blue] = ACTIONS(40),
    [anon_sym_magenta] = ACTIONS(40),
    [anon_sym_cyan] = ACTIONS(40),
    [anon_sym_white] = ACTIONS(40),
    [anon_sym_brightblack] = ACTIONS(40),
    [anon_sym_brightred] = ACTIONS(40),
    [anon_sym_brightgreen] = ACTIONS(40),
    [anon_sym_brightyellow] = ACTIONS(40),
    [anon_sym_brightblue] = ACTIONS(40),
    [anon_sym_brightmagenta] = ACTIONS(40),
    [anon_sym_brightcyan] = ACTIONS(40),
    [anon_sym_brightwhite] = ACTIONS(40),
    [anon_sym_bold] = ACTIONS(40),
    [anon_sym_dim] = ACTIONS(40),
    [anon_sym_ul] = ACTIONS(40),
    [anon_sym_blink] = ACTIONS(40),
    [anon_sym_reverse] = ACTIONS(40),
    [anon_sym_italic] = ACTIONS(40),
    [anon_sym_strike] = ACTIONS(40),
    [anon_sym_no_DASHbold] = ACTIONS(40),
    [anon_sym_no_DASHdim] = ACTIONS(40),
    [anon_sym_no_DASHul] = ACTIONS(40),
    [anon_sym_no_DASHblink] = ACTIONS(40),
    [anon_sym_no_DASHreverse] = ACTIONS(40),
    [anon_sym_no_DASHitalic] = ACTIONS(40),
    [anon_sym_no_DASHstrike] = ACTIONS(40),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(5),
  },
  [9] = {
    [sym_comment] = STATE(9),
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
  [10] = {
    [sym_comment] = STATE(10),
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
  [11] = {
    [sym__color] = STATE(5),
    [sym_attribute] = STATE(9),
    [sym_comment] = STATE(11),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(48), 14,
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
  [37] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(48), 14,
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
  [74] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(48), 14,
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
  [111] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(48), 14,
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
  [148] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_attribute,
    STATE(16), 2,
      sym_comment,
      aux_sym_color_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(56), 14,
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
    STATE(16), 1,
      aux_sym_color_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(48), 14,
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
    STATE(23), 1,
      sym_attribute,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(48), 14,
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
    STATE(15), 1,
      aux_sym_color_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(48), 14,
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
    STATE(12), 1,
      aux_sym_color_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(48), 14,
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
  [360] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(40), 17,
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
  [418] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_section_header,
    STATE(29), 1,
      sym_subsection_header,
    STATE(24), 2,
      sym_comment,
      aux_sym_config_repeat1,
    STATE(49), 2,
      sym_section,
      sym_subsection,
  [445] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_config_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(28), 1,
      sym_section_header,
    STATE(29), 1,
      sym_subsection_header,
    ACTIONS(9), 2,
      anon_sym_LBRACK,
      anon_sym_POUND,
    STATE(49), 2,
      sym_section,
      sym_subsection,
  [472] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      sym_name,
    STATE(26), 1,
      sym_comment,
    STATE(38), 1,
      sym_variable,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [492] = 6,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_string_repeat1,
    ACTIONS(80), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [512] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(86), 1,
      aux_sym_section_token1,
    STATE(28), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_section_repeat1,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [532] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(90), 1,
      aux_sym_section_token1,
    STATE(29), 1,
      sym_comment,
    STATE(32), 1,
      aux_sym_section_repeat1,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [552] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      sym_name,
    STATE(30), 1,
      sym_comment,
    STATE(38), 1,
      sym_variable,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [572] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(94), 1,
      aux_sym_section_token1,
    STATE(31), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_section_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [592] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(96), 1,
      aux_sym_section_token1,
    STATE(32), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_section_repeat1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [612] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
    STATE(33), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [630] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      anon_sym_EQ,
    STATE(34), 1,
      sym_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [648] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      sym_name,
    STATE(35), 1,
      sym_comment,
    STATE(38), 1,
      sym_variable,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [668] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(111), 1,
      aux_sym_section_token1,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(36), 2,
      sym_comment,
      aux_sym_section_repeat1,
  [686] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      sym_name,
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      sym_variable,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [706] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(38), 1,
      sym_comment,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [721] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(39), 1,
      sym_comment,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [736] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    ACTIONS(118), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      sym__escape_sequence,
  [751] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      aux_sym_string_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(80), 2,
      aux_sym_string_token1,
      sym__escape_sequence,
  [768] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(42), 1,
      sym_comment,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [783] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(43), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [798] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(44), 1,
      sym_comment,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [813] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(45), 1,
      sym_comment,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [828] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(46), 1,
      sym_comment,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [843] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(76), 1,
      sym_name,
    STATE(38), 1,
      sym_variable,
    STATE(47), 1,
      sym_comment,
  [859] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      sym_comment,
  [875] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    STATE(49), 1,
      sym_comment,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [889] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(50), 1,
      sym_comment,
  [902] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      sym_subsection_name,
    STATE(51), 1,
      sym_comment,
  [915] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      sym_comment,
  [928] = 4,
    ACTIONS(5), 1,
      anon_sym_POUND,
    ACTIONS(82), 1,
      anon_sym_SEMI,
    ACTIONS(142), 1,
      aux_sym_comment_token1,
    STATE(53), 1,
      sym_comment,
  [941] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
  [954] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(146), 1,
      sym_section_name,
    STATE(55), 1,
      sym_comment,
  [967] = 1,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 37,
  [SMALL_STATE(14)] = 74,
  [SMALL_STATE(15)] = 111,
  [SMALL_STATE(16)] = 148,
  [SMALL_STATE(17)] = 183,
  [SMALL_STATE(18)] = 220,
  [SMALL_STATE(19)] = 257,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 331,
  [SMALL_STATE(22)] = 360,
  [SMALL_STATE(23)] = 389,
  [SMALL_STATE(24)] = 418,
  [SMALL_STATE(25)] = 445,
  [SMALL_STATE(26)] = 472,
  [SMALL_STATE(27)] = 492,
  [SMALL_STATE(28)] = 512,
  [SMALL_STATE(29)] = 532,
  [SMALL_STATE(30)] = 552,
  [SMALL_STATE(31)] = 572,
  [SMALL_STATE(32)] = 592,
  [SMALL_STATE(33)] = 612,
  [SMALL_STATE(34)] = 630,
  [SMALL_STATE(35)] = 648,
  [SMALL_STATE(36)] = 668,
  [SMALL_STATE(37)] = 686,
  [SMALL_STATE(38)] = 706,
  [SMALL_STATE(39)] = 721,
  [SMALL_STATE(40)] = 736,
  [SMALL_STATE(41)] = 751,
  [SMALL_STATE(42)] = 768,
  [SMALL_STATE(43)] = 783,
  [SMALL_STATE(44)] = 798,
  [SMALL_STATE(45)] = 813,
  [SMALL_STATE(46)] = 828,
  [SMALL_STATE(47)] = 843,
  [SMALL_STATE(48)] = 859,
  [SMALL_STATE(49)] = 875,
  [SMALL_STATE(50)] = 889,
  [SMALL_STATE(51)] = 902,
  [SMALL_STATE(52)] = 915,
  [SMALL_STATE(53)] = 928,
  [SMALL_STATE(54)] = 941,
  [SMALL_STATE(55)] = 954,
  [SMALL_STATE(56)] = 967,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, .production_id = 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__color, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 5, .production_id = 6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(22),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(55),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(47),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_header, 6),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
