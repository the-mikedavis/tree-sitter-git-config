#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  anon_sym_no = 11,
  anon_sym_off = 12,
  sym_true = 13,
  sym_false = 14,
  aux_sym__color_token1 = 15,
  aux_sym__color_token2 = 16,
  anon_sym_normal = 17,
  anon_sym_black = 18,
  anon_sym_red = 19,
  anon_sym_green = 20,
  anon_sym_yellow = 21,
  anon_sym_blue = 22,
  anon_sym_magenta = 23,
  anon_sym_cyan = 24,
  anon_sym_white = 25,
  anon_sym_brightblack = 26,
  anon_sym_brightred = 27,
  anon_sym_brightgreen = 28,
  anon_sym_brightyellow = 29,
  anon_sym_brightblue = 30,
  anon_sym_brightmagenta = 31,
  anon_sym_brightcyan = 32,
  anon_sym_brightwhite = 33,
  anon_sym_bold = 34,
  anon_sym_dim = 35,
  anon_sym_ul = 36,
  anon_sym_blink = 37,
  anon_sym_reverse = 38,
  anon_sym_italic = 39,
  anon_sym_strike = 40,
  anon_sym_no_DASHbold = 41,
  anon_sym_no_DASHdim = 42,
  anon_sym_no_DASHul = 43,
  anon_sym_no_DASHblink = 44,
  anon_sym_no_DASHreverse = 45,
  anon_sym_no_DASHitalic = 46,
  anon_sym_no_DASHstrike = 47,
  sym_integer = 48,
  aux_sym__quoted_string_token1 = 49,
  aux_sym__unquoted_string_token1 = 50,
  sym__escape_sequence = 51,
  aux_sym_comment_token1 = 52,
  sym_config = 53,
  sym_section = 54,
  sym_section_header = 55,
  sym_subsection_name = 56,
  sym_variable = 57,
  sym_value = 58,
  sym__boolean = 59,
  sym_color = 60,
  sym__color = 61,
  sym_attribute = 62,
  sym_string = 63,
  sym__quoted_string = 64,
  sym__unquoted_string = 65,
  sym_comment = 66,
  aux_sym_config_repeat1 = 67,
  aux_sym_section_repeat1 = 68,
  aux_sym_subsection_name_repeat1 = 69,
  aux_sym_color_repeat1 = 70,
  aux_sym__quoted_string_repeat1 = 71,
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
  [anon_sym_no] = "false",
  [anon_sym_off] = "false",
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
  [aux_sym_comment_token1] = "comment_token1",
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
  [anon_sym_no] = anon_sym_no,
  [anon_sym_off] = anon_sym_no,
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
  [aux_sym_comment_token1] = aux_sym_comment_token1,
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
  [anon_sym_no] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_off] = {
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
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '1') ADVANCE(252);
      if (lookahead == '2') ADVANCE(250);
      if (lookahead == ';') ADVANCE(388);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(386);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0) ADVANCE(386);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(165);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(8);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(385);
      if (lookahead == '1') ADVANCE(252);
      if (lookahead == '2') ADVANCE(250);
      if (lookahead == ';') ADVANCE(386);
      if (lookahead == 'b') ADVANCE(325);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(326);
      if (lookahead == 'w') ADVANCE(306);
      if (lookahead == 'y') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(386);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 8:
      if (lookahead == 'U') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(147);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(387);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(215);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(94);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'g') ADVANCE(118);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 'w') ADVANCE(63);
      if (lookahead == 'y') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(245);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(235);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(207);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 56:
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(129);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 75:
      if (lookahead == 'k') ADVANCE(189);
      END_STATE();
    case 76:
      if (lookahead == 'k') ADVANCE(227);
      END_STATE();
    case 77:
      if (lookahead == 'k') ADVANCE(241);
      END_STATE();
    case 78:
      if (lookahead == 'k') ADVANCE(205);
      END_STATE();
    case 79:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == 'k') ADVANCE(40);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(239);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 94:
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 98:
      if (lookahead == 'm') ADVANCE(223);
      END_STATE();
    case 99:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 100:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 122:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 134:
      if (lookahead == 'v') ADVANCE(46);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 136:
      if (lookahead == 'w') ADVANCE(195);
      END_STATE();
    case 137:
      if (lookahead == 'w') ADVANCE(211);
      END_STATE();
    case 138:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 139:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 140:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(388);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(140)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
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
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == ']') ADVANCE(162);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(388);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(154)
      END_STATE();
    case 155:
      if (eof) ADVANCE(157);
      if (lookahead == '\n') ADVANCE(158);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#') ADVANCE(389);
      if (lookahead == '1') ADVANCE(184);
      if (lookahead == '2') ADVANCE(181);
      if (lookahead == ';') ADVANCE(388);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(81);
      if (lookahead == 'c') ADVANCE(138);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(31);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 'u') ADVANCE(82);
      if (lookahead == 'w') ADVANCE(61);
      if (lookahead == 'y') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(155)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 156:
      if (eof) ADVANCE(157);
      if (lookahead == '[') ADVANCE(159);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(388);
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
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
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
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(165);
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
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == 'r') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__color_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (lookahead == '5') ADVANCE(182);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(180);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__color_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__color_token2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__color_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_normal);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_normal);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_black);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_black);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_red);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_red);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_green);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_green);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_yellow);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_yellow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_blue);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_blue);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_magenta);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_magenta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_cyan);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_cyan);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_white);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_white);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_brightblack);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_brightblack);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_brightred);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_brightred);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_brightgreen);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_brightgreen);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_brightyellow);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_brightyellow);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_brightblue);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_brightblue);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_brightmagenta);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_brightmagenta);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_brightcyan);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_brightcyan);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_brightwhite);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_brightwhite);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_bold);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_bold);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_dim);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_dim);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_ul);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_blink);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_blink);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_reverse);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_reverse);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_italic);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_italic);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_strike);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_strike);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_no_DASHbold);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_no_DASHbold);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_no_DASHdim);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_no_DASHdim);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_no_DASHul);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_no_DASHul);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_no_DASHblink);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_no_DASHblink);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_no_DASHreverse);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_no_DASHreverse);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_no_DASHitalic);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_no_DASHitalic);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_no_DASHstrike);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_no_DASHstrike);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '5') ADVANCE(251);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(252);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_integer);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(252);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(249);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '"') ADVANCE(161);
      if (lookahead == '#') ADVANCE(385);
      if (lookahead == '1') ADVANCE(252);
      if (lookahead == '2') ADVANCE(250);
      if (lookahead == ';') ADVANCE(386);
      if (lookahead == 'b') ADVANCE(325);
      if (lookahead == 'c') ADVANCE(377);
      if (lookahead == 'd') ADVANCE(309);
      if (lookahead == 'f') ADVANCE(261);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead == 'i') ADVANCE(370);
      if (lookahead == 'm') ADVANCE(256);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 's') ADVANCE(365);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead == 'u') ADVANCE(326);
      if (lookahead == 'w') ADVANCE(306);
      if (lookahead == 'y') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(386);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead == 'u') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'u') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'b') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(371);
      if (lookahead == 'r') ADVANCE(283);
      if (lookahead == 's') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'b') ADVANCE(331);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead == 'g') ADVANCE(358);
      if (lookahead == 'm') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(292);
      if (lookahead == 'w') ADVANCE(308);
      if (lookahead == 'y') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'c') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'v') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'd') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'g') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'g') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'g') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'h') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'k') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(257);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead == 'r') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(332);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(316);
      if (lookahead == 'o') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'm') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'n') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 't') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'v') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'w') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'w') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'y') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'y') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(386);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(386);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(386);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 154},
  [2] = {.lex_state = 5},
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
  [26] = {.lex_state = 154},
  [27] = {.lex_state = 156},
  [28] = {.lex_state = 154},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 154},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 156},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 154},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 154},
  [38] = {.lex_state = 154},
  [39] = {.lex_state = 154},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 154},
  [42] = {.lex_state = 154},
  [43] = {.lex_state = 154},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 154},
  [46] = {.lex_state = 154},
  [47] = {.lex_state = 154},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 156},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 154},
  [52] = {.lex_state = 154},
  [53] = {.lex_state = 154},
  [54] = {.lex_state = 140},
  [55] = {.lex_state = 154},
  [56] = {.lex_state = 154},
  [57] = {.lex_state = 154},
  [58] = {(TSStateId)(-1)},
  [59] = {(TSStateId)(-1)},
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
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
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
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(57),
    [sym_section] = STATE(51),
    [sym_section_header] = STATE(35),
    [sym_comment] = STATE(1),
    [aux_sym_config_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
  },
  [2] = {
    [sym_value] = STATE(42),
    [sym__boolean] = STATE(47),
    [sym_color] = STATE(47),
    [sym__color] = STATE(6),
    [sym_attribute] = STATE(10),
    [sym_string] = STATE(47),
    [sym__quoted_string] = STATE(45),
    [sym__unquoted_string] = STATE(45),
    [sym_comment] = STATE(2),
    [aux_sym_color_repeat1] = STATE(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_yes] = ACTIONS(13),
    [anon_sym_on] = ACTIONS(13),
    [anon_sym_no] = ACTIONS(13),
    [anon_sym_off] = ACTIONS(13),
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
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [3] = {
    [sym__color] = STATE(20),
    [sym_attribute] = STATE(10),
    [sym_comment] = STATE(3),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(23),
    [aux_sym_section_token1] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(23),
    [aux_sym__color_token1] = ACTIONS(25),
    [aux_sym__color_token2] = ACTIONS(25),
    [anon_sym_normal] = ACTIONS(25),
    [anon_sym_black] = ACTIONS(25),
    [anon_sym_red] = ACTIONS(25),
    [anon_sym_green] = ACTIONS(25),
    [anon_sym_yellow] = ACTIONS(25),
    [anon_sym_blue] = ACTIONS(25),
    [anon_sym_magenta] = ACTIONS(25),
    [anon_sym_cyan] = ACTIONS(25),
    [anon_sym_white] = ACTIONS(25),
    [anon_sym_brightblack] = ACTIONS(25),
    [anon_sym_brightred] = ACTIONS(25),
    [anon_sym_brightgreen] = ACTIONS(25),
    [anon_sym_brightyellow] = ACTIONS(25),
    [anon_sym_brightblue] = ACTIONS(25),
    [anon_sym_brightmagenta] = ACTIONS(25),
    [anon_sym_brightcyan] = ACTIONS(25),
    [anon_sym_brightwhite] = ACTIONS(25),
    [anon_sym_bold] = ACTIONS(27),
    [anon_sym_dim] = ACTIONS(27),
    [anon_sym_ul] = ACTIONS(27),
    [anon_sym_blink] = ACTIONS(27),
    [anon_sym_reverse] = ACTIONS(27),
    [anon_sym_italic] = ACTIONS(27),
    [anon_sym_strike] = ACTIONS(27),
    [anon_sym_no_DASHbold] = ACTIONS(27),
    [anon_sym_no_DASHdim] = ACTIONS(27),
    [anon_sym_no_DASHul] = ACTIONS(27),
    [anon_sym_no_DASHblink] = ACTIONS(27),
    [anon_sym_no_DASHreverse] = ACTIONS(27),
    [anon_sym_no_DASHitalic] = ACTIONS(27),
    [anon_sym_no_DASHstrike] = ACTIONS(27),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [4] = {
    [sym__color] = STATE(17),
    [sym_attribute] = STATE(10),
    [sym_comment] = STATE(4),
    [aux_sym_color_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_section_token1] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [aux_sym__color_token1] = ACTIONS(25),
    [aux_sym__color_token2] = ACTIONS(25),
    [anon_sym_normal] = ACTIONS(25),
    [anon_sym_black] = ACTIONS(25),
    [anon_sym_red] = ACTIONS(25),
    [anon_sym_green] = ACTIONS(25),
    [anon_sym_yellow] = ACTIONS(25),
    [anon_sym_blue] = ACTIONS(25),
    [anon_sym_magenta] = ACTIONS(25),
    [anon_sym_cyan] = ACTIONS(25),
    [anon_sym_white] = ACTIONS(25),
    [anon_sym_brightblack] = ACTIONS(25),
    [anon_sym_brightred] = ACTIONS(25),
    [anon_sym_brightgreen] = ACTIONS(25),
    [anon_sym_brightyellow] = ACTIONS(25),
    [anon_sym_brightblue] = ACTIONS(25),
    [anon_sym_brightmagenta] = ACTIONS(25),
    [anon_sym_brightcyan] = ACTIONS(25),
    [anon_sym_brightwhite] = ACTIONS(25),
    [anon_sym_bold] = ACTIONS(27),
    [anon_sym_dim] = ACTIONS(27),
    [anon_sym_ul] = ACTIONS(27),
    [anon_sym_blink] = ACTIONS(27),
    [anon_sym_reverse] = ACTIONS(27),
    [anon_sym_italic] = ACTIONS(27),
    [anon_sym_strike] = ACTIONS(27),
    [anon_sym_no_DASHbold] = ACTIONS(27),
    [anon_sym_no_DASHdim] = ACTIONS(27),
    [anon_sym_no_DASHul] = ACTIONS(27),
    [anon_sym_no_DASHblink] = ACTIONS(27),
    [anon_sym_no_DASHreverse] = ACTIONS(27),
    [anon_sym_no_DASHitalic] = ACTIONS(27),
    [anon_sym_no_DASHstrike] = ACTIONS(27),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [5] = {
    [sym__color] = STATE(16),
    [sym_attribute] = STATE(10),
    [sym_comment] = STATE(5),
    [aux_sym_color_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_section_token1] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [aux_sym__color_token1] = ACTIONS(25),
    [aux_sym__color_token2] = ACTIONS(25),
    [anon_sym_normal] = ACTIONS(25),
    [anon_sym_black] = ACTIONS(25),
    [anon_sym_red] = ACTIONS(25),
    [anon_sym_green] = ACTIONS(25),
    [anon_sym_yellow] = ACTIONS(25),
    [anon_sym_blue] = ACTIONS(25),
    [anon_sym_magenta] = ACTIONS(25),
    [anon_sym_cyan] = ACTIONS(25),
    [anon_sym_white] = ACTIONS(25),
    [anon_sym_brightblack] = ACTIONS(25),
    [anon_sym_brightred] = ACTIONS(25),
    [anon_sym_brightgreen] = ACTIONS(25),
    [anon_sym_brightyellow] = ACTIONS(25),
    [anon_sym_brightblue] = ACTIONS(25),
    [anon_sym_brightmagenta] = ACTIONS(25),
    [anon_sym_brightcyan] = ACTIONS(25),
    [anon_sym_brightwhite] = ACTIONS(25),
    [anon_sym_bold] = ACTIONS(27),
    [anon_sym_dim] = ACTIONS(27),
    [anon_sym_ul] = ACTIONS(27),
    [anon_sym_blink] = ACTIONS(27),
    [anon_sym_reverse] = ACTIONS(27),
    [anon_sym_italic] = ACTIONS(27),
    [anon_sym_strike] = ACTIONS(27),
    [anon_sym_no_DASHbold] = ACTIONS(27),
    [anon_sym_no_DASHdim] = ACTIONS(27),
    [anon_sym_no_DASHul] = ACTIONS(27),
    [anon_sym_no_DASHblink] = ACTIONS(27),
    [anon_sym_no_DASHreverse] = ACTIONS(27),
    [anon_sym_no_DASHitalic] = ACTIONS(27),
    [anon_sym_no_DASHstrike] = ACTIONS(27),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [6] = {
    [sym__color] = STATE(14),
    [sym_attribute] = STATE(10),
    [sym_comment] = STATE(6),
    [aux_sym_color_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_section_token1] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [aux_sym__color_token1] = ACTIONS(25),
    [aux_sym__color_token2] = ACTIONS(25),
    [anon_sym_normal] = ACTIONS(25),
    [anon_sym_black] = ACTIONS(25),
    [anon_sym_red] = ACTIONS(25),
    [anon_sym_green] = ACTIONS(25),
    [anon_sym_yellow] = ACTIONS(25),
    [anon_sym_blue] = ACTIONS(25),
    [anon_sym_magenta] = ACTIONS(25),
    [anon_sym_cyan] = ACTIONS(25),
    [anon_sym_white] = ACTIONS(25),
    [anon_sym_brightblack] = ACTIONS(25),
    [anon_sym_brightred] = ACTIONS(25),
    [anon_sym_brightgreen] = ACTIONS(25),
    [anon_sym_brightyellow] = ACTIONS(25),
    [anon_sym_brightblue] = ACTIONS(25),
    [anon_sym_brightmagenta] = ACTIONS(25),
    [anon_sym_brightcyan] = ACTIONS(25),
    [anon_sym_brightwhite] = ACTIONS(25),
    [anon_sym_bold] = ACTIONS(27),
    [anon_sym_dim] = ACTIONS(27),
    [anon_sym_ul] = ACTIONS(27),
    [anon_sym_blink] = ACTIONS(27),
    [anon_sym_reverse] = ACTIONS(27),
    [anon_sym_italic] = ACTIONS(27),
    [anon_sym_strike] = ACTIONS(27),
    [anon_sym_no_DASHbold] = ACTIONS(27),
    [anon_sym_no_DASHdim] = ACTIONS(27),
    [anon_sym_no_DASHul] = ACTIONS(27),
    [anon_sym_no_DASHblink] = ACTIONS(27),
    [anon_sym_no_DASHreverse] = ACTIONS(27),
    [anon_sym_no_DASHitalic] = ACTIONS(27),
    [anon_sym_no_DASHstrike] = ACTIONS(27),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [7] = {
    [sym_attribute] = STATE(10),
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
    [aux_sym_comment_token1] = ACTIONS(3),
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
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [9] = {
    [sym__color] = STATE(4),
    [sym_attribute] = STATE(10),
    [sym_comment] = STATE(9),
    [aux_sym_color_repeat1] = STATE(7),
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
    [anon_sym_bold] = ACTIONS(27),
    [anon_sym_dim] = ACTIONS(27),
    [anon_sym_ul] = ACTIONS(27),
    [anon_sym_blink] = ACTIONS(27),
    [anon_sym_reverse] = ACTIONS(27),
    [anon_sym_italic] = ACTIONS(27),
    [anon_sym_strike] = ACTIONS(27),
    [anon_sym_no_DASHbold] = ACTIONS(27),
    [anon_sym_no_DASHdim] = ACTIONS(27),
    [anon_sym_no_DASHul] = ACTIONS(27),
    [anon_sym_no_DASHblink] = ACTIONS(27),
    [anon_sym_no_DASHreverse] = ACTIONS(27),
    [anon_sym_no_DASHitalic] = ACTIONS(27),
    [anon_sym_no_DASHstrike] = ACTIONS(27),
    [aux_sym_comment_token1] = ACTIONS(3),
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
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [11] = {
    [sym_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(46),
    [aux_sym_section_token1] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(46),
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
    [anon_sym_bold] = ACTIONS(46),
    [anon_sym_dim] = ACTIONS(46),
    [anon_sym_ul] = ACTIONS(46),
    [anon_sym_blink] = ACTIONS(46),
    [anon_sym_reverse] = ACTIONS(46),
    [anon_sym_italic] = ACTIONS(46),
    [anon_sym_strike] = ACTIONS(46),
    [anon_sym_no_DASHbold] = ACTIONS(46),
    [anon_sym_no_DASHdim] = ACTIONS(46),
    [anon_sym_no_DASHul] = ACTIONS(46),
    [anon_sym_no_DASHblink] = ACTIONS(46),
    [anon_sym_no_DASHreverse] = ACTIONS(46),
    [anon_sym_no_DASHitalic] = ACTIONS(46),
    [anon_sym_no_DASHstrike] = ACTIONS(46),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(48), 3,
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
  [34] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(52), 3,
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
  [68] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(54), 3,
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
  [102] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(15), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_color_repeat1,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(56), 3,
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
  [136] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      aux_sym_color_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(58), 3,
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
  [170] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      aux_sym_color_repeat1,
    STATE(17), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(60), 3,
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
  [204] = 5,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(23), 1,
      sym_attribute,
    STATE(18), 2,
      sym_comment,
      aux_sym_color_repeat1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
    ACTIONS(62), 14,
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
  [236] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(18), 1,
      aux_sym_color_repeat1,
    STATE(19), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(65), 3,
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
  [270] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      aux_sym_color_repeat1,
    STATE(20), 1,
      sym_comment,
    STATE(23), 1,
      sym_attribute,
    ACTIONS(67), 3,
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
  [304] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(46), 17,
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
  [330] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
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
  [356] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
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
  [382] = 6,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_section_header,
    STATE(51), 1,
      sym_section,
    STATE(24), 2,
      sym_comment,
      aux_sym_config_repeat1,
  [402] = 7,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      aux_sym_config_repeat1,
    STATE(25), 1,
      sym_comment,
    STATE(35), 1,
      sym_section_header,
    STATE(51), 1,
      sym_section,
  [424] = 4,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(78), 1,
      aux_sym_section_token1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(26), 2,
      sym_comment,
      aux_sym_section_repeat1,
  [439] = 5,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      sym_name,
    STATE(27), 1,
      sym_comment,
    STATE(43), 1,
      sym_variable,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [456] = 4,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(87), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_comment,
    ACTIONS(85), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [471] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(93), 1,
      sym__escape_sequence,
    STATE(29), 1,
      sym_comment,
    STATE(31), 1,
      aux_sym_subsection_name_repeat1,
  [490] = 5,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(97), 1,
      aux_sym_section_token1,
    STATE(26), 1,
      aux_sym_section_repeat1,
    STATE(30), 1,
      sym_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [507] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(104), 1,
      sym__escape_sequence,
    STATE(31), 2,
      sym_comment,
      aux_sym_subsection_name_repeat1,
  [524] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(91), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(93), 1,
      sym__escape_sequence,
    STATE(29), 1,
      aux_sym_subsection_name_repeat1,
    STATE(32), 1,
      sym_comment,
    STATE(56), 1,
      sym_subsection_name,
  [543] = 5,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      sym_name,
    STATE(33), 1,
      sym_comment,
    STATE(43), 1,
      sym_variable,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [560] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(112), 1,
      sym__escape_sequence,
    STATE(34), 2,
      sym_comment,
      aux_sym__quoted_string_repeat1,
  [577] = 5,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(117), 1,
      aux_sym_section_token1,
    STATE(30), 1,
      aux_sym_section_repeat1,
    STATE(35), 1,
      sym_comment,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [594] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(123), 1,
      sym__escape_sequence,
    STATE(34), 1,
      aux_sym__quoted_string_repeat1,
    STATE(36), 1,
      sym_comment,
  [613] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(37), 1,
      sym_comment,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [625] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [637] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(39), 1,
      sym_comment,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [649] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(133), 1,
      aux_sym__quoted_string_token1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(131), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [663] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [675] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(42), 1,
      sym_comment,
    ACTIONS(137), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [687] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(43), 1,
      sym_comment,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [699] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(141), 1,
      aux_sym_subsection_name_token1,
    STATE(44), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [713] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [725] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(46), 1,
      sym_comment,
    ACTIONS(145), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [737] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(47), 1,
      sym_comment,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
  [749] = 5,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(121), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(123), 1,
      sym__escape_sequence,
    STATE(36), 1,
      aux_sym__quoted_string_repeat1,
    STATE(48), 1,
      sym_comment,
  [765] = 4,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(83), 1,
      sym_name,
    STATE(43), 1,
      sym_variable,
    STATE(49), 1,
      sym_comment,
  [778] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(149), 1,
      aux_sym_section_token1,
    ACTIONS(151), 1,
      aux_sym__unquoted_string_token1,
    STATE(50), 1,
      sym_comment,
  [791] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [802] = 4,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      sym_comment,
  [815] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      aux_sym_section_token1,
    STATE(53), 1,
      sym_comment,
  [825] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(161), 1,
      sym_section_name,
    STATE(54), 1,
      sym_comment,
  [835] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym_comment,
  [845] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      sym_comment,
  [855] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(57), 1,
      sym_comment,
  [865] = 1,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
  [869] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 34,
  [SMALL_STATE(14)] = 68,
  [SMALL_STATE(15)] = 102,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 204,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 270,
  [SMALL_STATE(21)] = 304,
  [SMALL_STATE(22)] = 330,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 382,
  [SMALL_STATE(25)] = 402,
  [SMALL_STATE(26)] = 424,
  [SMALL_STATE(27)] = 439,
  [SMALL_STATE(28)] = 456,
  [SMALL_STATE(29)] = 471,
  [SMALL_STATE(30)] = 490,
  [SMALL_STATE(31)] = 507,
  [SMALL_STATE(32)] = 524,
  [SMALL_STATE(33)] = 543,
  [SMALL_STATE(34)] = 560,
  [SMALL_STATE(35)] = 577,
  [SMALL_STATE(36)] = 594,
  [SMALL_STATE(37)] = 613,
  [SMALL_STATE(38)] = 625,
  [SMALL_STATE(39)] = 637,
  [SMALL_STATE(40)] = 649,
  [SMALL_STATE(41)] = 663,
  [SMALL_STATE(42)] = 675,
  [SMALL_STATE(43)] = 687,
  [SMALL_STATE(44)] = 699,
  [SMALL_STATE(45)] = 713,
  [SMALL_STATE(46)] = 725,
  [SMALL_STATE(47)] = 737,
  [SMALL_STATE(48)] = 749,
  [SMALL_STATE(49)] = 765,
  [SMALL_STATE(50)] = 778,
  [SMALL_STATE(51)] = 791,
  [SMALL_STATE(52)] = 802,
  [SMALL_STATE(53)] = 815,
  [SMALL_STATE(54)] = 825,
  [SMALL_STATE(55)] = 835,
  [SMALL_STATE(56)] = 845,
  [SMALL_STATE(57)] = 855,
  [SMALL_STATE(58)] = 865,
  [SMALL_STATE(59)] = 869,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 1, .production_id = 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(8),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__color, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 2, .production_id = 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 4),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 3, .production_id = 5),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_color_repeat1, 2), SHIFT_REPEAT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 5, .production_id = 6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_color, 4, .production_id = 6),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(54),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(49),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_name, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_name_repeat1, 2), SHIFT_REPEAT(44),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2), SHIFT_REPEAT(44),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(40),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unquoted_string, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 6),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_name_repeat1, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
