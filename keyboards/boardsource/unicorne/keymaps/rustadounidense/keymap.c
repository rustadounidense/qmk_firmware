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

enum custom_keycodes {
  TO_RU = SAFE_RANGE,
  TO_EN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // =============================================================================================================================================================================================================================================================
  [_EN] = LAYOUT_split_3x6_3(
    KC_GRAVE,       KC_Q,                   KC_W,                   KC_E,                   KC_R,               KC_T,             /**/  KC_Y,                   KC_U,                 KC_I,                 KC_O,               KC_P,                   KC_EQUAL,
    CW_TOGG,        MT(MOD_LGUI,KC_A),      MT(MOD_LALT,KC_S),      MT(MOD_LCTL,KC_D),      MT(MOD_LSFT,KC_F),  KC_G,             /**/  KC_H,                   MT(MOD_RSFT,KC_J),    MT(MOD_RCTL,KC_K),    MT(MOD_RALT,KC_L),  MT(MOD_RGUI,KC_QUOTE),  KC_NO,
    KC_NO,          KC_Z,                   KC_X,                   KC_C,                   KC_V,               KC_B,             /**/  KC_N,                   KC_M,                 KC_COMMA,             KC_DOT,             KC_SCLN,                TO_RU,
                                                                    // -------------------------------------------------------------------------------------------------------------------- //
                                                                    LT(_FUN,KC_ESC),        LT(_NUM,KC_SPACE),  LT(_SYM,KC_TAB),  /**/  MT(MOD_HYPR,KC_ENTER),  LT(_NAV,KC_BSPC),     MO(_KBD)
  ),
  // =============================================================================================================================================================================================================================================================
  [_RU] = LAYOUT_split_3x6_3(
    KC_TRNS,        KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,          /**/  KC_TRNS,                KC_TRNS,              KC_TRNS,              KC_TRNS,           KC_TRNS,                 KC_LBRC,
    KC_TRNS,        KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,          /**/  KC_TRNS,                KC_TRNS,              KC_TRNS,              KC_TRNS,           MT(MOD_RGUI,KC_SCLN),    KC_QUOTE,
    TO_EN,          KC_TRNS,                KC_TRNS,                KC_TRNS,                KC_TRNS,            KC_TRNS,          /**/  KC_TRNS,                KC_TRNS,              KC_TRNS,              KC_TRNS,           KC_SLASH,                KC_RBRC,
                                                                    // -------------------------------------------------------------------------------------------------------------------- //
                                                                    KC_TRNS,                KC_TRNS,            KC_TRNS,          /**/  KC_TRNS,                KC_TRNS,              KC_TRNS
  ),
  // =============================================================================================================================================================================================================================================================
  [_NUM] = LAYOUT_split_3x6_3(
    LCTL(KC_6),     LCTL(KC_1),             LCTL(KC_2),             LCTL(KC_3),             LCTL(KC_4),         LCTL(KC_5),       /**/  KC_PLUS,                KC_7,                 KC_8,                 KC_9,               KC_MINUS,               KC_EQUAL,
    KC_CAPS,        OSM(MOD_LGUI),          OSM(MOD_LALT),          OSM(MOD_LCTL),          OSM(MOD_LSFT),      KC_NO,            /**/  KC_PIPE,                KC_1,                 KC_2,                 KC_3,               KC_DOT,                 KC_UNDS,
    KC_NO,          OSM(MOD_HYPR),          KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_ASTR,                KC_4,                 KC_5,                 KC_6,               KC_SLASH,               KC_BSLS,
                                                                    // -------------------------------------------------------------------------------------------------------------------- //
                                                                    KC_NO,                  KC_NO,              KC_NO,            /**/  KC_TRNS,                LT(_NAV,KC_0),        KC_TRNS
  ),
  // =============================================================================================================================================================================================================================================================
  [_SYM] = LAYOUT_split_3x6_3(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_NO,                  KC_NO,                KC_LBRC,              KC_RBRC,            KC_NO,                  KC_NO,
    KC_NO,          KC_LGUI,                KC_LOPT,                KC_LCTL,                KC_LSFT,            KC_NO,            /**/  KC_DOT,                 KC_LPRN,              KC_LCBR,              KC_RCBR,            KC_RPRN,                KC_NO,
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_BSLS,                KC_NO,                KC_LABK,              KC_RABK,            KC_NO,                  KC_NO,
                                                                    // -------------------------------------------------------------------------------------------------------------------- //
                                                                    KC_TRNS,                KC_TRNS,            KC_TRNS,          /**/  KC_TRNS,                KC_TRNS,              KC_TRNS
  ),
  // =============================================================================================================================================================================================================================================================
  [_NAV] = LAYOUT_split_3x6_3(
    LCTL(KC_6),     LCTL(KC_1),             LCTL(KC_2),             LCTL(KC_3),             LCTL(KC_4),         LCTL(KC_5),       /**/  KC_HOME,                LGUI(KC_LEFT),        KC_UP,                LGUI(KC_RIGHT),     KC_PAGE_UP,             KC_NO,
    KC_NO,          OSM(MOD_LGUI),          OSM(MOD_LALT),          OSM(MOD_LCTL),          OSM(MOD_LSFT),      KC_NO,            /**/  KC_END,                 KC_LEFT,              KC_DOWN,              KC_RIGHT,           KC_PGDN,                KC_NO,
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_NO,                  LGUI(KC_LBRC),        KC_NO,                LGUI(KC_RBRC),      KC_NO,                  KC_NO,
                                                                    // -------------------------------------------------------------------------------------------------------------------- //
                                                                    KC_TRNS,                KC_SPACE,           KC_TAB,           /**/  KC_TRNS,                KC_TRNS,              KC_TRNS
  ),
  // =============================================================================================================================================================================================================================================================
  [_FUN] = LAYOUT_split_3x6_3(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_NO,                  KC_F7,                KC_F8,                KC_F9,              KC_F10,                 KC_NO,
    KC_NO,          KC_LGUI,                KC_LOPT,                KC_LCTL,                KC_LSFT,            KC_NO,            /**/  KC_NO,                  KC_F1,                KC_F2,                KC_F3,              KC_F11,                 KC_NO,
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_NO,                  KC_F4,                KC_F5,                KC_F6,              KC_F12,                 KC_NO,
                                                                    // -------------------------------------------------------------------------------------------------------------------- //
                                                                    KC_TRNS,                KC_TRNS,            KC_TRNS,          /**/  KC_TRNS,                KC_TRNS,              KC_TRNS
),
  // =============================================================================================================================================================================================================================================================
  [_KBD] = LAYOUT_split_3x6_3(
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_NO,                  KC_NO,                KC_BRID,              KC_BRIU,            KC_NO,                  KC_NO,
    KC_CAPS,        CW_TOGG,                KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_NO,                  KC_NO,                KC_VOLD,              KC_VOLU,            KC_NO,                  KC_NO,
    KC_NO,          KC_NO,                  KC_NO,                  KC_NO,                  KC_NO,              KC_NO,            /**/  KC_NO,                  KC_NO,                RM_VALD,              RM_VALU,            RM_TOGG,                KC_NO,
                                                                    // -------------------------------------------------------------------------------------------------------------------- //
                                                                    KC_NO,                  KC_NO,              KC_NO,            /**/  KC_NO,                  KC_NO,                KC_NO
  )
  // =============================================================================================================================================================================================================================================================
};

const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM = LAYOUT(
  // Left Hand Alphas
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L', 'R', 'R', 'R', 'R', 'R', 'R',
                 '*', '*', '*', '*', '*', '*'
);

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LSFT, KC_F):
        case MT(MOD_RSFT, KC_J):
        case MT(MOD_LGUI, KC_A):
            return 140;
        default:
            return TAPPING_TERM;
    }
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case _EN:
                rgb_matrix_set_color(i, RGB_RED);
                break;
            case _RU:
                rgb_matrix_set_color(i, RGB_GREEN);
                break;
            case _KBD :
                rgb_matrix_set_color(i, RGB_PURPLE);
                break;
            default:
                rgb_matrix_set_color(i, RGB_OFF);
                break;
        }
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TO_RU:
            if (record->event.pressed) {
                // Switch to Russian layer
                layer_move(_RU);

                // Send Control+R to trigger macOS Russian layout via Karabiner
                register_mods(MOD_BIT(KC_LCTL));
                tap_code(KC_R);
                unregister_mods(MOD_BIT(KC_LCTL));
            }
            return false;

        case TO_EN:
            if (record->event.pressed) {
                // Switch back to U.S. layer
                layer_move(_EN);

                // Send Control+E to trigger macOS U.S. layout via Karabiner
                register_mods(MOD_BIT(KC_LCTL));
                tap_code(KC_E);
                unregister_mods(MOD_BIT(KC_LCTL));
            }
            return false;
    }
    return true;
}