#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 7
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_definition = 1,
  sym_string = 2,
  sym_base10 = 3,
  sym_base16 = 4,
  sym_base08 = 5,
  sym_source_file = 6,
  sym__declaration = 7,
  sym__top_level_form = 8,
  sym_number = 9,
  sym_integer = 10,
  aux_sym_source_file_repeat1 = 11,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_definition] = "definition",
  [sym_string] = "string",
  [sym_base10] = "base10",
  [sym_base16] = "base16",
  [sym_base08] = "base08",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym__top_level_form] = "_top_level_form",
  [sym_number] = "number",
  [sym_integer] = "integer",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_definition] = sym_definition,
  [sym_string] = sym_string,
  [sym_base10] = sym_base10,
  [sym_base16] = sym_base16,
  [sym_base08] = sym_base08,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym__top_level_form] = sym__top_level_form,
  [sym_number] = sym_number,
  [sym_integer] = sym_integer,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_base10] = {
    .visible = true,
    .named = true,
  },
  [sym_base16] = {
    .visible = true,
    .named = true,
  },
  [sym_base08] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__top_level_form] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(41);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(43);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == 'D') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == 'E') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'E') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'I') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'L') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'M') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'M') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'P') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(53);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_definition);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(34);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_base10);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_base10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_base16);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_base16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(31);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_base08);
      if (lookahead == ',' ||
          lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_base08);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_definition] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_base10] = ACTIONS(1),
    [sym_base16] = ACTIONS(1),
    [sym_base08] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__declaration] = STATE(2),
    [sym__top_level_form] = STATE(2),
    [sym_number] = STATE(2),
    [sym_integer] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_definition] = ACTIONS(5),
    [sym_string] = ACTIONS(5),
    [sym_base10] = ACTIONS(7),
    [sym_base16] = ACTIONS(9),
    [sym_base08] = ACTIONS(9),
  },
  [2] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_integer] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_definition] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_base10] = ACTIONS(7),
    [sym_base16] = ACTIONS(9),
    [sym_base08] = ACTIONS(9),
  },
  [3] = {
    [sym__declaration] = STATE(3),
    [sym__top_level_form] = STATE(3),
    [sym_number] = STATE(3),
    [sym_integer] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_definition] = ACTIONS(17),
    [sym_string] = ACTIONS(17),
    [sym_base10] = ACTIONS(20),
    [sym_base16] = ACTIONS(23),
    [sym_base08] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(28), 1,
      sym_base10,
    ACTIONS(26), 5,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      sym_base16,
      sym_base08,
  [11] = 2,
    ACTIONS(32), 1,
      sym_base10,
    ACTIONS(30), 5,
      ts_builtin_sym_end,
      sym_definition,
      sym_string,
      sym_base16,
      sym_base08,
  [22] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 11,
  [SMALL_STATE(6)] = 22,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_factor(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
