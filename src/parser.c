#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 35
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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
  sym_integer = 15,
  aux_sym__quoted_string_token1 = 16,
  sym__unquoted_string = 17,
  sym__escape_sequence = 18,
  aux_sym_comment_token1 = 19,
  aux_sym_comment_token2 = 20,
  sym_config = 21,
  sym_section = 22,
  sym_section_header = 23,
  sym_subsection_name = 24,
  sym_variable = 25,
  sym__value = 26,
  sym__boolean = 27,
  sym_string = 28,
  sym__quoted_string = 29,
  sym_comment = 30,
  aux_sym_config_repeat1 = 31,
  aux_sym_section_repeat1 = 32,
  aux_sym_subsection_name_repeat1 = 33,
  aux_sym__quoted_string_repeat1 = 34,
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
  [sym_integer] = "integer",
  [aux_sym__quoted_string_token1] = "_quoted_string_token1",
  [sym__unquoted_string] = "_unquoted_string",
  [sym__escape_sequence] = "_escape_sequence",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_config] = "config",
  [sym_section] = "section",
  [sym_section_header] = "section_header",
  [sym_subsection_name] = "subsection_name",
  [sym_variable] = "variable",
  [sym__value] = "_value",
  [sym__boolean] = "_boolean",
  [sym_string] = "string",
  [sym__quoted_string] = "_quoted_string",
  [sym_comment] = "comment",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_subsection_name_repeat1] = "subsection_name_repeat1",
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
  [sym_integer] = sym_integer,
  [aux_sym__quoted_string_token1] = aux_sym__quoted_string_token1,
  [sym__unquoted_string] = sym__unquoted_string,
  [sym__escape_sequence] = sym__escape_sequence,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_config] = sym_config,
  [sym_section] = sym_section,
  [sym_section_header] = sym_section_header,
  [sym_subsection_name] = sym_subsection_name,
  [sym_variable] = sym_variable,
  [sym__value] = sym__value,
  [sym__boolean] = sym__boolean,
  [sym_string] = sym_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_comment] = sym_comment,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_subsection_name_repeat1] = aux_sym_subsection_name_repeat1,
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
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
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
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
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
  [aux_sym__quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_value = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 2},
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
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(14);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == 'y') ADVANCE(8);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(6);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(58);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(23);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '[') ADVANCE(31);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(28)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_section_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_yes);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_no);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_off);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == '"') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(57);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(61);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == 'y') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'f') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(74);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {(TSStateId)(-1)},
  [34] = {(TSStateId)(-1)},
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
    [sym_integer] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
  [1] = {
    [sym_config] = STATE(31),
    [sym_section] = STATE(25),
    [sym_section_header] = STATE(4),
    [sym_comment] = STATE(1),
    [aux_sym_config_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym__unquoted_string,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    STATE(2), 1,
      sym_comment,
    STATE(19), 1,
      sym__value,
    STATE(20), 1,
      sym__quoted_string,
    STATE(21), 2,
      sym__boolean,
      sym_string,
    ACTIONS(11), 6,
      anon_sym_yes,
      anon_sym_on,
      anon_sym_no,
      anon_sym_off,
      sym_true,
      sym_false,
  [34] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(21), 1,
      aux_sym_section_token1,
    ACTIONS(24), 1,
      sym_name,
    STATE(12), 1,
      sym_variable,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(3), 2,
      sym_comment,
      aux_sym_section_repeat1,
  [55] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      aux_sym_section_token1,
    ACTIONS(31), 1,
      sym_name,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_section_repeat1,
    STATE(12), 1,
      sym_variable,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [78] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      aux_sym_section_token1,
    ACTIONS(31), 1,
      sym_name,
    STATE(3), 1,
      aux_sym_section_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(12), 1,
      sym_variable,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [101] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(37), 1,
      anon_sym_EQ,
    STATE(6), 1,
      sym_comment,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [117] = 6,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(4), 1,
      sym_section_header,
    STATE(25), 1,
      sym_section,
    STATE(7), 2,
      sym_comment,
      aux_sym_config_repeat1,
  [137] = 7,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_section_header,
    STATE(7), 1,
      aux_sym_config_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(25), 1,
      sym_section,
  [159] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(9), 1,
      sym_comment,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [172] = 6,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(48), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(52), 1,
      sym__escape_sequence,
    STATE(10), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_subsection_name_repeat1,
  [191] = 5,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(56), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(59), 1,
      sym__escape_sequence,
    STATE(11), 2,
      sym_comment,
      aux_sym__quoted_string_repeat1,
  [208] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
    ACTIONS(62), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [221] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(13), 1,
      sym_comment,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [234] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [247] = 6,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(72), 1,
      sym__escape_sequence,
    STATE(11), 1,
      aux_sym__quoted_string_repeat1,
    STATE(15), 1,
      sym_comment,
  [266] = 6,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(50), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(52), 1,
      sym__escape_sequence,
    STATE(10), 1,
      aux_sym_subsection_name_repeat1,
    STATE(16), 1,
      sym_comment,
    STATE(30), 1,
      sym_subsection_name,
  [285] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(17), 1,
      sym_comment,
    ACTIONS(74), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [298] = 5,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(76), 1,
      anon_sym_DQUOTE,
    ACTIONS(78), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(81), 1,
      sym__escape_sequence,
    STATE(18), 2,
      sym_comment,
      aux_sym_subsection_name_repeat1,
  [315] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [328] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [341] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(21), 1,
      sym_comment,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      aux_sym_section_token1,
      anon_sym_LBRACK,
      sym_name,
  [354] = 5,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(70), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(72), 1,
      sym__escape_sequence,
    STATE(15), 1,
      aux_sym__quoted_string_repeat1,
    STATE(22), 1,
      sym_comment,
  [370] = 4,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(92), 1,
      aux_sym_subsection_name_token1,
    STATE(23), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [384] = 4,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(96), 1,
      aux_sym__quoted_string_token1,
    STATE(24), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_DQUOTE,
      sym__escape_sequence,
  [398] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    STATE(25), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
  [409] = 4,
    ACTIONS(17), 1,
      aux_sym_comment_token1,
    ACTIONS(100), 1,
      aux_sym_section_token1,
    ACTIONS(102), 1,
      aux_sym_comment_token2,
    STATE(26), 1,
      sym_comment,
  [422] = 4,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      sym_comment,
  [435] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(108), 1,
      aux_sym_section_token1,
    STATE(28), 1,
      sym_comment,
  [445] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(110), 1,
      sym_section_name,
    STATE(29), 1,
      sym_comment,
  [455] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      sym_comment,
  [465] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_comment,
  [475] = 3,
    ACTIONS(3), 1,
      aux_sym_comment_token1,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(32), 1,
      sym_comment,
  [485] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [489] = 1,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 117,
  [SMALL_STATE(8)] = 137,
  [SMALL_STATE(9)] = 159,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 208,
  [SMALL_STATE(13)] = 221,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 266,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 298,
  [SMALL_STATE(19)] = 315,
  [SMALL_STATE(20)] = 328,
  [SMALL_STATE(21)] = 341,
  [SMALL_STATE(22)] = 354,
  [SMALL_STATE(23)] = 370,
  [SMALL_STATE(24)] = 384,
  [SMALL_STATE(25)] = 398,
  [SMALL_STATE(26)] = 409,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 435,
  [SMALL_STATE(29)] = 445,
  [SMALL_STATE(30)] = 455,
  [SMALL_STATE(31)] = 465,
  [SMALL_STATE(32)] = 475,
  [SMALL_STATE(33)] = 485,
  [SMALL_STATE(34)] = 489,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(12),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(29),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__boolean, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_name, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(24),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(24),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 6),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_name_repeat1, 2), SHIFT_REPEAT(23),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2), SHIFT_REPEAT(23),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_name_repeat1, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
