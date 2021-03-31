#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_W  KC_C,         KC_G,            KC_M,         KC_TAB,  KC_QUOTE, KC_U,         KC_K,         KC_J,         KC_SCOLON,
        KC_R, LALT_T(KC_S), LCTL_T(KC_N),    LGUI_T(KC_H), KC_F,    KC_Y,     RGUI_T(KC_I), RCTL_T(KC_E), RALT_T(KC_O), KC_A,
        KC_X, KC_B,         KC_L,            KC_D,         KC_V,    KC_MINUS, KC_P,         KC_COMM,      KC_DOT,       KC_SLSH,
              KC_BTN1,      LT(2, KC_SPACE), KC_LSFT,      KC_BTN2, KC_ENTER, KC_BSPC,      LT(1, KC_T),  KC_ESCAPE
    ),

    [1] = LAYOUT(
        KC_BSLASH,     KC_7,    KC_8,    KC_9,    KC_GRAVE,     KC_BTN3, KC_MS_WH_LEFT, KC_MS_WH_LEFT, KC_MS_WH_LEFT, KC_MS_WH_LEFT,
        KC_DOT,        KC_4,    KC_5,    KC_6,    LSFT(KC_EQL), KC_CAPS, KC_LEFT,       KC_DOWN,       KC_UP,         KC_RIGHT,
        LSFT(KC_BSLS), KC_1,    KC_2,    KC_3,    KC_EQL,       KC_NO,   KC_HOME,       KC_PGDOWN,     KC_PGUP,       KC_END,
                       KC_TRNS, KC_0,    KC_TRNS, KC_TRNS,      KC_NO,   KC_NO,         KC_NO,         KC_NO
    ),

    [2] = LAYOUT(
        LSFT(KC_6), LSFT(KC_1), KC_LBRC,       KC_RBRC,       LSFT(KC_GRV), KC_TRNS,    KC_WBAK,   KC_WFWD, KC_TRNS, KC_TRNS,
        LSFT(KC_4), LSFT(KC_3), LSFT(KC_9),    LSFT(KC_0),    LSFT(KC_2),   KC_PSCREEN, KC_MPRV,   KC_VOLD, KC_VOLU, KC_MKXT,
        LSFT(KC_7), LSFT(KC_5), LSFT(KC_LBRC), LSFT(KC_RBRC), LSFT(KC_8),   KC_TRNS,    KC_MPLY,   KC_MSTP, KC_MUTE, KC_TRNS,
                    KC_TRNS,    KC_NO,         KC_TRNS,       KC_TRNS,      KC_TRNS,    KC_DELETE, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT(
        KC_NO, KC_F7,   KC_F8,   KC_F9,   KC_F12,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        KC_NO, KC_F4,   KC_F5,   KC_F6,   KC_F11,  KC_NO,   TO(0),   KC_NO,   TO(4),   KC_NO,
        KC_NO, KC_F1,   KC_F2,   KC_F3,   KC_F10,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
               KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [4] = LAYOUT(
        KC_GRAVE, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,
        KC_TAB,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_P,    KC_TRNS,
                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}
