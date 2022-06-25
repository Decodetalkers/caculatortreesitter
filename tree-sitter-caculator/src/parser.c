#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_PLUS = 1,
  anon_sym_DASH = 2,
  anon_sym_STAR = 3,
  anon_sym_SLASH = 4,
  anon_sym_LPAREN = 5,
  anon_sym_sin_LPAREN = 6,
  anon_sym_cos_LPAREN = 7,
  anon_sym_tan_LPAREN = 8,
  anon_sym_RPAREN = 9,
  sym_number = 10,
  sym_source_file = 11,
  sym__aboveall = 12,
  sym__unint = 13,
  sym__math = 14,
  sym_math0 = 15,
  sym_math1 = 16,
  sym_block = 17,
  aux_sym_source_file_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LPAREN] = "(",
  [anon_sym_sin_LPAREN] = "sin(",
  [anon_sym_cos_LPAREN] = "cos(",
  [anon_sym_tan_LPAREN] = "tan(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__aboveall] = "_aboveall",
  [sym__unint] = "_unint",
  [sym__math] = "_math",
  [sym_math0] = "math0",
  [sym_math1] = "math1",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_sin_LPAREN] = anon_sym_sin_LPAREN,
  [anon_sym_cos_LPAREN] = anon_sym_cos_LPAREN,
  [anon_sym_tan_LPAREN] = anon_sym_tan_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__aboveall] = sym__aboveall,
  [sym__unint] = sym__unint,
  [sym__math] = sym__math,
  [sym_math0] = sym_math0,
  [sym_math1] = sym_math1,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sin_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cos_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tan_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__aboveall] = {
    .visible = false,
    .named = true,
  },
  [sym__unint] = {
    .visible = false,
    .named = true,
  },
  [sym__math] = {
    .visible = false,
    .named = true,
  },
  [sym_math0] = {
    .visible = true,
    .named = true,
  },
  [sym_math1] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'c') ADVANCE(8);
      if (lookahead == 's') ADVANCE(5);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_sin_LPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_cos_LPAREN);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_tan_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_sin_LPAREN] = ACTIONS(1),
    [anon_sym_cos_LPAREN] = ACTIONS(1),
    [anon_sym_tan_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__unint] = STATE(3),
    [sym_block] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_sin_LPAREN] = ACTIONS(3),
    [anon_sym_cos_LPAREN] = ACTIONS(3),
    [anon_sym_tan_LPAREN] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
  },
  [2] = {
    [sym__aboveall] = STATE(2),
    [sym__math] = STATE(8),
    [sym_math0] = STATE(8),
    [sym_math1] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(12),
    [anon_sym_SLASH] = ACTIONS(12),
    [anon_sym_RPAREN] = ACTIONS(7),
  },
  [3] = {
    [sym__aboveall] = STATE(5),
    [sym__math] = STATE(8),
    [sym_math0] = STATE(8),
    [sym_math1] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
  },
  [4] = {
    [sym__aboveall] = STATE(6),
    [sym__math] = STATE(8),
    [sym_math0] = STATE(8),
    [sym_math1] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
  },
  [5] = {
    [sym__aboveall] = STATE(2),
    [sym__math] = STATE(8),
    [sym_math0] = STATE(8),
    [sym_math1] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
  },
  [6] = {
    [sym__aboveall] = STATE(2),
    [sym__math] = STATE(8),
    [sym_math0] = STATE(8),
    [sym_math1] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(27), 1,
      sym_number,
    STATE(4), 2,
      sym__unint,
      sym_block,
    ACTIONS(3), 4,
      anon_sym_LPAREN,
      anon_sym_sin_LPAREN,
      anon_sym_cos_LPAREN,
      anon_sym_tan_LPAREN,
  [14] = 3,
    ACTIONS(29), 1,
      sym_number,
    STATE(10), 2,
      sym__unint,
      sym_block,
    ACTIONS(3), 4,
      anon_sym_LPAREN,
      anon_sym_sin_LPAREN,
      anon_sym_cos_LPAREN,
      anon_sym_tan_LPAREN,
  [28] = 1,
    ACTIONS(31), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [37] = 1,
    ACTIONS(33), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [46] = 1,
    ACTIONS(35), 6,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_RPAREN,
  [55] = 1,
    ACTIONS(37), 5,
      anon_sym_LPAREN,
      anon_sym_sin_LPAREN,
      anon_sym_cos_LPAREN,
      anon_sym_tan_LPAREN,
      sym_number,
  [63] = 1,
    ACTIONS(39), 5,
      anon_sym_LPAREN,
      anon_sym_sin_LPAREN,
      anon_sym_cos_LPAREN,
      anon_sym_tan_LPAREN,
      sym_number,
  [71] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 14,
  [SMALL_STATE(9)] = 28,
  [SMALL_STATE(10)] = 37,
  [SMALL_STATE(11)] = 46,
  [SMALL_STATE(12)] = 55,
  [SMALL_STATE(13)] = 63,
  [SMALL_STATE(14)] = 71,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aboveall, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math0, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_math1, 1),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cac(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
