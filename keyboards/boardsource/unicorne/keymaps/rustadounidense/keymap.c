#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
    KC_GRAVE,           KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,                   KC_Y,               KC_U,               KC_I,               KC_O,               KC_P,                   KC_BSLS,
    CW_TOGG,            MT(MOD_LGUI, KC_A), MT(MOD_LALT, KC_S), MT(MOD_LCTL, KC_D), MT(MOD_LSFT, KC_F), KC_G,                   KC_H,               MT(MOD_RSFT, KC_J), MT(MOD_RCTL, KC_K), MT(MOD_RALT, KC_L), MT(MOD_RGUI, KC_SCLN),  KC_QUOTE,
    KC_NO,              KC_Z,               KC_X,               KC_C,               KC_V,               KC_B,                   KC_N,               KC_M,               KC_COMMA,           KC_DOT,             KC_SLASH,               TO(1),
                                                                LT(5,KC_ESCAPE),    LT(2,KC_SPACE),     LT(3,KC_TAB),           KC_ENTER,           LT(4,KC_BSPC),      LT(6,KC_DELETE)
  ),
  [1] = LAYOUT_split_3x6_3(
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_LBRC,
    KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,
    TO(0),              KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_RBRC,
                                                                KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT
  ),
  [2] = LAYOUT_split_3x6_3(
    LCTL(KC_6),         LCTL(KC_1),         LCTL(KC_2),         LCTL(KC_3),         LCTL(KC_4),         LCTL(KC_5),             KC_LBRC,            KC_7,               KC_8,               KC_9,               KC_EQUAL,               KC_RBRC,
    KC_CAPS,            OSM(MOD_LGUI),      OSM(MOD_LALT),      OSM(MOD_LCTL),      OSM(MOD_LSFT),      KC_NO,                  KC_LPRN,            KC_1,               KC_2,               KC_3,               KC_MINUS,               KC_RPRN,
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,              KC_4,               KC_5,               KC_6,               KC_SLASH,               KC_NO,
                                                                KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     LT(4,KC_0),         KC_DOT
  ),
  [3] = LAYOUT_split_3x6_3(
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_LCBR,            KC_AMPR,            KC_ASTR,            KC_LPRN,            KC_PLUS,                KC_RCBR,
    KC_NO,              KC_LEFT_GUI,        KC_LEFT_ALT,        KC_LEFT_CTRL,       KC_LEFT_SHIFT,      KC_NO,                  KC_LPRN,            KC_EXLM,            KC_AT,              KC_HASH,            KC_UNDS,                KC_RPRN,
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,              KC_DLR,             KC_PERC,            KC_CIRC,            KC_QUES,                KC_NO,
                                                                KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT
  ),
  [4] = LAYOUT_split_3x6_3(
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_HOME,            LGUI(KC_LEFT),      KC_UP,              LGUI(KC_RIGHT),     KC_PAGE_UP,             KC_NO,
    KC_NO,              KC_LEFT_GUI,        KC_LEFT_ALT,        KC_LEFT_CTRL,       KC_LEFT_SHIFT,      KC_NO,                  KC_END,             KC_LEFT,            KC_DOWN,            KC_RIGHT,           KC_PGDN,                KC_NO,
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,              LGUI(KC_LBRC),      LCTL(KC_UP),        LGUI(KC_RBRC),      KC_NO,                  KC_NO,
                                                                KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT
  ),
  [5] = LAYOUT_split_3x6_3(
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,              KC_F7,              KC_F8,              KC_F9,              KC_F10,                 KC_NO,
    KC_NO,              KC_LEFT_GUI,        KC_LEFT_ALT,        KC_LEFT_CTRL,       KC_LEFT_SHIFT,      KC_NO,                  KC_NO,              KC_F1,              KC_F2,              KC_F3,              KC_F11,                 KC_NO,
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,              KC_F4,              KC_F5,              KC_F6,              KC_F12,                 KC_NO,
                                                                KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT
  ),
  [6] = LAYOUT_split_3x6_3(
    QK_BOOT,            KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,              KC_NO,              KC_AUDIO_VOL_UP,    KC_NO,              KC_NO,                  QK_BOOT,
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,              KC_BRIGHTNESS_DOWN, KC_AUDIO_VOL_DOWN,  KC_BRIGHTNESS_UP,   KC_NO,                  KC_NO,
    KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,              KC_NO,                  KC_NO,              KC_NO,              KC_AUDIO_MUTE,      KC_NO,              KC_NO,                  KC_NO,
                                                                KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT
  )
};

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
        case MT(MOD_RGUI, KC_SCLN):
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
