#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_config_token1 = 1,
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
  anon_sym_BSLASH = 17,
  aux_sym__unquoted_string_token1 = 18,
  sym__escape_sequence = 19,
  aux_sym_comment_token1 = 20,
  aux_sym_comment_token2 = 21,
  sym_config = 22,
  sym_section = 23,
  sym_section_header = 24,
  sym_subsection_name = 25,
  sym_variable = 26,
  sym__value = 27,
  sym__boolean = 28,
  sym_string = 29,
  sym__quoted_string = 30,
  aux_sym__unquoted_string = 31,
  sym_comment = 32,
  aux_sym_config_repeat1 = 33,
  aux_sym_section_repeat1 = 34,
  aux_sym_subsection_name_repeat1 = 35,
  aux_sym_string_repeat1 = 36,
  aux_sym__quoted_string_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_config_token1] = "config_token1",
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
  [anon_sym_BSLASH] = "\\",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
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
  [aux_sym__unquoted_string] = "_unquoted_string",
  [sym_comment] = "comment",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_subsection_name_repeat1] = "subsection_name_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__quoted_string_repeat1] = "_quoted_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_config_token1] = aux_sym_config_token1,
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
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
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
  [aux_sym__unquoted_string] = aux_sym__unquoted_string,
  [sym_comment] = sym_comment,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_subsection_name_repeat1] = aux_sym_subsection_name_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__quoted_string_repeat1] = aux_sym__quoted_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_config_token1] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
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
  [aux_sym__unquoted_string] = {
    .visible = false,
    .named = false,
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
  [aux_sym_string_repeat1] = {
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
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'y') ADVANCE(24);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(75);
      if (lookahead == '.' ||
          lookahead == '_') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '#' &&
          lookahead != ';') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '#' ||
          lookahead == ';') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_config_token1);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'a') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 's') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 's') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_subsection_name_token1);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_yes);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_on);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_no);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_off);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_true);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_true);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_false);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '.') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_false);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (sym_integer_character_set_1(lookahead)) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'U') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(59);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == 'y') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '#' &&
          lookahead != ';' &&
          lookahead != '\\') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_config_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_yes] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_no] = ACTIONS(1),
    [anon_sym_off] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(39),
    [sym_section] = STATE(4),
    [sym_section_header] = STATE(3),
    [sym_comment] = STATE(4),
    [aux_sym_config_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_config_token1] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [aux_sym_comment_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(17), 1,
      aux_sym__unquoted_string_token1,
    STATE(10), 1,
      aux_sym__unquoted_string,
    STATE(9), 2,
      sym__quoted_string,
      aux_sym_string_repeat1,
    STATE(28), 3,
      sym__value,
      sym__boolean,
      sym_string,
    ACTIONS(13), 7,
      anon_sym_yes,
      anon_sym_on,
      anon_sym_no,
      anon_sym_off,
      sym_true,
      sym_false,
      sym_integer,
  [31] = 5,
    ACTIONS(21), 1,
      aux_sym_config_token1,
    ACTIONS(24), 1,
      sym_name,
    ACTIONS(26), 1,
      aux_sym_comment_token1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(6), 3,
      sym_variable,
      sym_comment,
      aux_sym_section_repeat1,
  [50] = 6,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_config_token1,
    STATE(3), 1,
      sym_section_header,
    STATE(7), 3,
      sym_section,
      sym_comment,
      aux_sym_config_repeat1,
  [71] = 6,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(38), 1,
      anon_sym_BSLASH,
    ACTIONS(41), 1,
      aux_sym__unquoted_string_token1,
    STATE(10), 1,
      aux_sym__unquoted_string,
    ACTIONS(33), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    STATE(5), 2,
      sym__quoted_string,
      aux_sym_string_repeat1,
  [92] = 5,
    ACTIONS(24), 1,
      sym_name,
    ACTIONS(46), 1,
      aux_sym_config_token1,
    ACTIONS(49), 1,
      aux_sym_comment_token1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(8), 3,
      sym_variable,
      sym_comment,
      aux_sym_section_repeat1,
  [111] = 6,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      aux_sym_config_token1,
    ACTIONS(57), 1,
      anon_sym_LBRACK,
    ACTIONS(60), 1,
      aux_sym_comment_token1,
    STATE(3), 1,
      sym_section_header,
    STATE(7), 3,
      sym_section,
      sym_comment,
      aux_sym_config_repeat1,
  [132] = 5,
    ACTIONS(65), 1,
      aux_sym_config_token1,
    ACTIONS(68), 1,
      sym_name,
    ACTIONS(71), 1,
      aux_sym_comment_token1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
    STATE(8), 3,
      sym_variable,
      sym_comment,
      aux_sym_section_repeat1,
  [151] = 6,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      anon_sym_BSLASH,
    ACTIONS(76), 1,
      aux_sym__unquoted_string_token1,
    STATE(10), 1,
      aux_sym__unquoted_string,
    ACTIONS(74), 2,
      aux_sym_config_token1,
      aux_sym_comment_token1,
    STATE(5), 2,
      sym__quoted_string,
      aux_sym_string_repeat1,
  [172] = 4,
    ACTIONS(80), 1,
      anon_sym_BSLASH,
    ACTIONS(83), 1,
      aux_sym__unquoted_string_token1,
    STATE(11), 1,
      aux_sym__unquoted_string,
    ACTIONS(78), 3,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      aux_sym_comment_token1,
  [187] = 4,
    ACTIONS(88), 1,
      anon_sym_BSLASH,
    ACTIONS(91), 1,
      aux_sym__unquoted_string_token1,
    STATE(11), 1,
      aux_sym__unquoted_string,
    ACTIONS(86), 3,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      aux_sym_comment_token1,
  [202] = 2,
    ACTIONS(96), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(94), 4,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
  [212] = 1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [220] = 1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [228] = 1,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [236] = 2,
    ACTIONS(104), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(86), 4,
      aux_sym_config_token1,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      aux_sym_comment_token1,
  [246] = 1,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [254] = 1,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [262] = 5,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(115), 1,
      anon_sym_BSLASH,
    ACTIONS(118), 1,
      sym__escape_sequence,
    STATE(19), 1,
      aux_sym__quoted_string_repeat1,
  [278] = 5,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(125), 1,
      anon_sym_BSLASH,
    ACTIONS(127), 1,
      sym__escape_sequence,
    STATE(19), 1,
      aux_sym__quoted_string_repeat1,
  [294] = 1,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      aux_sym_config_token1,
      anon_sym_LBRACK,
      sym_name,
      aux_sym_comment_token1,
  [302] = 4,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(131), 1,
      aux_sym_config_token1,
    ACTIONS(133), 1,
      anon_sym_EQ,
    STATE(18), 1,
      sym_comment,
  [315] = 4,
    ACTIONS(125), 1,
      anon_sym_BSLASH,
    ACTIONS(135), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(137), 1,
      sym__escape_sequence,
    STATE(20), 1,
      aux_sym__quoted_string_repeat1,
  [328] = 4,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(144), 1,
      sym__escape_sequence,
    STATE(24), 1,
      aux_sym_subsection_name_repeat1,
  [341] = 4,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(151), 1,
      sym__escape_sequence,
    STATE(24), 1,
      aux_sym_subsection_name_repeat1,
  [354] = 4,
    ACTIONS(153), 1,
      aux_sym_subsection_name_token1,
    ACTIONS(155), 1,
      sym__escape_sequence,
    STATE(25), 1,
      aux_sym_subsection_name_repeat1,
    STATE(37), 1,
      sym_subsection_name,
  [367] = 2,
    ACTIONS(157), 1,
      aux_sym__quoted_string_token1,
    ACTIONS(110), 3,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
      sym__escape_sequence,
  [376] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(159), 1,
      aux_sym_config_token1,
    STATE(15), 1,
      sym_comment,
  [386] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(161), 1,
      aux_sym_config_token1,
    STATE(21), 1,
      sym_comment,
  [396] = 3,
    ACTIONS(9), 1,
      aux_sym_comment_token1,
    ACTIONS(163), 1,
      aux_sym_config_token1,
    STATE(14), 1,
      sym_comment,
  [406] = 2,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
  [413] = 2,
    ACTIONS(169), 1,
      aux_sym_config_token1,
    ACTIONS(171), 1,
      aux_sym_comment_token2,
  [420] = 1,
    ACTIONS(173), 1,
      aux_sym_config_token1,
  [424] = 1,
    ACTIONS(175), 1,
      sym_section_name,
  [428] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
  [432] = 1,
    ACTIONS(179), 1,
      aux_sym_config_token1,
  [436] = 1,
    ACTIONS(181), 1,
      anon_sym_DQUOTE,
  [440] = 1,
    ACTIONS(183), 1,
      aux_sym_config_token1,
  [444] = 1,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 71,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 202,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 220,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 254,
  [SMALL_STATE(19)] = 262,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 294,
  [SMALL_STATE(22)] = 302,
  [SMALL_STATE(23)] = 315,
  [SMALL_STATE(24)] = 328,
  [SMALL_STATE(25)] = 341,
  [SMALL_STATE(26)] = 354,
  [SMALL_STATE(27)] = 367,
  [SMALL_STATE(28)] = 376,
  [SMALL_STATE(29)] = 386,
  [SMALL_STATE(30)] = 396,
  [SMALL_STATE(31)] = 406,
  [SMALL_STATE(32)] = 413,
  [SMALL_STATE(33)] = 420,
  [SMALL_STATE(34)] = 424,
  [SMALL_STATE(35)] = 428,
  [SMALL_STATE(36)] = 432,
  [SMALL_STATE(37)] = 436,
  [SMALL_STATE(38)] = 440,
  [SMALL_STATE(39)] = 444,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1), SHIFT(6),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1), SHIFT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(23),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(10),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2), SHIFT(8),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2), SHIFT(32),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(7),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(34),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(32),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(8),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(22),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(32),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1), SHIFT(33),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1), SHIFT(11),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(33),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2), SHIFT_REPEAT(11),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_string, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_string, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 7),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__unquoted_string, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(36),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_string_repeat1, 2), SHIFT_REPEAT(19),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_header, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_name_repeat1, 2), SHIFT_REPEAT(24),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_name_repeat1, 2), SHIFT_REPEAT(24),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_name, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__quoted_string_repeat1, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
