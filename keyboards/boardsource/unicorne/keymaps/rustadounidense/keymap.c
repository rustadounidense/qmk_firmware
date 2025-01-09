#include QMK_KEYBOARD_H

enum layers {
  _EN,
  _RU,
  _NUM,
  _SYM,
  _NAV,
  _FUN,
  _KBD, 
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [_EN] = LAYOUT_split_3x6_3(
    KC_GRAVE ,    KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,             /**/  KC_Y,                   KC_U,                 KC_I,                 KC_O,               KC_P,                  KC_SLASH,
    CW_TOGG,      MT(MOD_LGUI,KC_A),  MT(MOD_LALT,KC_S),  MT(MOD_LCTL,KC_D),  MT(MOD_LSFT,KC_F),  KC_G,             /**/  KC_H,                   MT(MOD_RSFT,KC_J),    MT(MOD_RCTL,KC_K),    MT(MOD_RALT,KC_L),  MT(MOD_RGUI,KC_QUOTE), KC_MINUS,
    KC_NO    ,    KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,             /**/  KC_N,                   KC_M,                 LT(_SYM,KC_COMMA),    KC_DOT,             KC_SCLN,               TO(_RU),
                                                          LT(_FUN,KC_ESCAPE), LT(_NUM,KC_SPACE),  LT(_SYM,KC_TAB),  /**/  LT(_SYM,KC_ENTER),      LT(_NAV,KC_BSPC),     LT(_KBD,KC_CAPS)
  ),
  // -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [_RU] = LAYOUT_split_3x6_3(
    KC_TRNS,      KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,          /**/  KC_TRNS,                KC_TRNS,              KC_TRNS,              KC_TRNS,           KC_TRNS,               KC_LBRC,
    KC_TRNS,      KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,              KC_TRNS,              KC_TRNS,           MT(MOD_RGUI,KC_SCLN),  KC_QUOTE,
    TO(_EN),      KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,              KC_TRNS,              KC_TRNS,           LT(_SYM,KC_SLASH),     KC_RBRC,
                                                          KC_TRNS,            KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,              KC_TRNS
  ),
  // -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [_NUM] = LAYOUT_split_3x6_3(
    KC_NO,        LCTL(KC_1),         LCTL(KC_2),         LCTL(KC_3),         LCTL(KC_4),         LCTL(KC_5),       /**/  KC_COLN,                KC_7,                 KC_8,                 KC_9,               KC_ASTR,              KC_SLASH,  
    OSM(MOD_HYPR),OSM(MOD_LGUI),      OSM(MOD_LALT),      OSM(MOD_LCTL),      OSM(MOD_LSFT),      LCTL(KC_6),             KC_DOT,                 KC_1,                 KC_2,                 KC_3,               KC_PLUS,              KC_MINUS,
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_COMMA,               KC_4,                 KC_5,                 KC_6,               KC_EQUAL,             KC_UNDS,
                                                          KC_NO,              KC_NO,              KC_NO,                  KC_TRNS,                KC_0,                 KC_TAB
  ),
  // -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [_SYM] = LAYOUT_split_3x6_3(
    KC_TILD,      KC_CIRC,            KC_AMPR,            KC_PERC,            KC_QUES,            KC_PIPE,          /**/  KC_COLN,                KC_QUES,              KC_LCBR,              KC_RCBR,            KC_ASTR,              KC_SLASH, 
    KC_NO,        KC_DLR,             KC_HASH,            KC_AT,              KC_EXLM,            KC_BSLS,                KC_DOT,                 KC_EXLM,              KC_LPRN,              KC_RPRN,            KC_PLUS,              KC_MINUS,
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_LABK,                KC_RABK,              KC_LBRC,              KC_RBRC,            KC_EQUAL,             KC_UNDS,
                                                          KC_TRNS,            KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,              KC_TRNS
  ),
  // -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [_NAV] = LAYOUT_split_3x6_3(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,            /**/  KC_HOME,                LGUI(KC_LEFT),        KC_UP,                LGUI(KC_RIGHT),     KC_PAGE_UP,           KC_NO,
    KC_NO,        KC_LGUI,            KC_LOPT,            KC_LCTL,            KC_LSFT,            KC_NO,                  KC_END,                 KC_LEFT,              KC_DOWN,              KC_RIGHT,           KC_PGDN,              KC_NO,
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,                  LGUI(KC_LBRC),        KC_NO,                LGUI(KC_RBRC),      KC_NO,                KC_NO,
                                                          KC_TRNS,            KC_SPACE,           KC_TAB,                 KC_TRNS,                KC_TRNS,              KC_TRNS
  ),
  // -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [_FUN] = LAYOUT_split_3x6_3(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,            /**/  KC_NO,                  KC_F7,                KC_F8,                KC_F9,              KC_F10,               LGUI(KC_EQUAL),
    KC_NO,        KC_LGUI,            KC_LOPT,            KC_LCTL,            KC_LSFT,            KC_NO,                  KC_NO,                  KC_F1,                KC_F2,                KC_F3,              KC_F11,               LGUI(KC_MINUS),
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,                  KC_F4,                KC_F5,                KC_F6,              KC_F12,               LGUI(KC_0),
                                                          KC_TRNS,            KC_TRNS,            KC_TRNS,                KC_TRNS,                KC_TRNS,              KC_TRNS
),
  // -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  [_KBD] = LAYOUT_split_3x6_3(
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,            /**/  KC_NO,                  KC_NO,                KC_BRID,              KC_BRIU,            KC_NO,                KC_NO,
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,                  KC_NO,                KC_VOLD,              KC_VOLU,            KC_NO,                KC_NO,
    KC_NO,        KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,                  KC_NO,                RGB_VAD,              RGB_VAI,            RGB_TOG,              KC_NO,
                                                          KC_NO,              KC_NO,              QK_BOOT,                QK_BOOT,                KC_NO,                KC_NO
  )
};

//#ifdef SWAP_HANDS_ENABLE
//const keypos_t hand_swap_config[MATRIX_ROWS][MATRIX_COLS] = {
//	// Left
//	{{0, 4}, {1, 4}, {2, 4}, {3, 4}, {4, 4}, {5, 4}},
//	{{0, 5}, {1, 5}, {2, 5}, {3, 5}, {4, 5}, {5, 5}},
//	{{0, 6}, {1, 6}, {2, 6}, {3, 6}, {4, 6}, {5, 6}},
//	{{0, 7}, {1, 7}, {2, 7}, {3, 7}, {4, 7}, {5, 7}},
//	// Right
//	{{0, 0}, {1, 0}, {2, 0}, {3, 0}, {4, 0}, {5, 0}},
//	{{0, 1}, {1, 1}, {2, 1}, {3, 1}, {4, 1}, {5, 1}},
//	{{0, 2}, {1, 2}, {2, 2}, {3, 2}, {4, 2}, {5, 2}},
//	{{0, 3}, {1, 3}, {2, 3}, {3, 3}, {4, 3}, {5, 3}}
//};
//#endif

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_F):
        case MT(MOD_RSFT, KC_J):
            return 145;
        case MT(MOD_LGUI, KC_A):
        case MT(MOD_RGUI, KC_QUOTE):
            return 200;
        default:
            return TAPPING_TERM;
    }
}

bool rgb_matrix_indicators_user(void) {
    uint8_t current_layer = get_highest_layer(layer_state);
    switch (current_layer) {
        case 1:
            rgb_matrix_set_color_all(RGB_GREEN);
            break;
        default:
            break;
    }
    return false;
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_F):
        case MT(MOD_RSFT, KC_J):
            // Immediately select the hold action when another key is tapped.
            return true;
        default:
            // Do not select the hold action when another key is tapped.
            return false;
    }
}
