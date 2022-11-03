#include QMK_KEYBOARD_H

// combos

enum combos {
  QW_ESC,
  AS_TAB,
  ZX_CAPS,
  OP_BSLS,
  LSCLN_QUOT,
  DOTSLSH_MINS
};

const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM as_combo[] = {LGUI_T(KC_A), LALT_T(KC_S), COMBO_END};
const uint16_t PROGMEM zx_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM lscln_combo[] = {RALT_T(KC_L), RGUI_T(KC_SCLN), COMBO_END};
const uint16_t PROGMEM dotslsh_combo[] = {KC_DOT, KC_SLSH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [QW_ESC] = COMBO(qw_combo, KC_ESC),
  [AS_TAB] = COMBO(as_combo, KC_TAB),
  [ZX_CAPS] = COMBO(zx_combo, KC_CAPS),
  [OP_BSLS] = COMBO(op_combo, KC_BSLS),
  [LSCLN_QUOT] = COMBO(lscln_combo, KC_QUOT),
  [DOTSLSH_MINS] = COMBO(dotslsh_combo, KC_MINS),
};

// layers

enum layers {
  _DEFAULT,
  _LOWER,
  _RAISE,
  _MOUSE
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT_split_3x5_3
  (KC_Q,            KC_W,          KC_E,         KC_R,                KC_T,               KC_Y,       KC_U,                     KC_I,         KC_O,         KC_P,
   LGUI_T(KC_A),    LALT_T(KC_S),  LCTL_T(KC_D), LSFT_T(KC_F),        KC_G,               KC_H,       RSFT_T(KC_J),             RCTL_T(KC_K), RALT_T(KC_L), RGUI_T(KC_SCLN),
   KC_Z,            KC_X,          KC_C,         KC_V,                KC_B,               KC_N,       KC_M,                     KC_COMM,      KC_DOT,       KC_SLSH,
                                   KC_NO,        LT(_LOWER, KC_BSPC), LT(_MOUSE, KC_SPC), KC_SPC,     LT(_RAISE, KC_ENT),       KC_NO),

  [_LOWER] = LAYOUT_split_3x5_3
  (KC_F1,           KC_F2,         KC_F3,         KC_F4,         KC_F5,        KC_F6,      KC_F7,        KC_F8,        KC_F9,        KC_BSLS,
   LGUI_T(KC_1),    LALT_T(KC_2),  LCTL_T(KC_3),  LSFT_T(KC_4),  KC_5,         KC_6,       RSFT_T(KC_7), RCTL_T(KC_8), RALT_T(KC_9), RGUI_T(KC_0),
   KC_F10,          KC_F11,        KC_F12,        KC_NO,         KC_LBRC,      KC_RBRC,    KC_GRV,       KC_EQL,       KC_MINS,      KC_QUOT,
                                   KC_TRNS,       KC_TRNS,       KC_TRNS,      KC_TRNS,    KC_TRNS,      KC_TRNS),

  /* [_LOWER] = LAYOUT_split_3x5_3 */
  /* (KC_GRV,          KC_F1,         KC_F2,         KC_F3,         KC_F4,        KC_LBRC,    KC_7,         KC_8,         KC_9,         KC_RBRC, */
  /*  LGUI_T(KC_QUOT), LALT_T(KC_F5), LCTL_T(KC_F6), LSFT_T(KC_F7), KC_F8,        KC_BSLS,    RSFT_T(KC_4), RCTL_T(KC_5), RALT_T(KC_6), RGUI_T(KC_MINS), */
  /*  KC_NO,           KC_F9,         KC_F10,        KC_F11,        KC_F12,       KC_0,       KC_1,         KC_2,         KC_3,         KC_EQL, */
  /*                                  KC_TRNS,       KC_TRNS,       KC_TRNS,      KC_TRNS,    KC_TRNS,      KC_TRNS), */

  [_RAISE] = LAYOUT_split_3x5_3
  (KC_INS,          KC_HOME,       KC_PGUP,       KC_UP,         KC_NO,        KC_NO,      KC_NO,        KC_MUTE,      KC_VOLD,      KC_VOLU,
   KC_DEL,          KC_END,        KC_LEFT,       KC_DOWN,       KC_RGHT,      KC_NO,      KC_RSFT,      KC_RCTL,      KC_RALT,      KC_RGUI,
   KC_PSCR,         KC_NO,         KC_PGDN,       KC_NO,         KC_NO,        KC_NO,      KC_NO,        KC_NO,        KC_SLEP,      KC_PWR,
                                   KC_TRNS,       KC_TRNS,       KC_TRNS,      KC_TRNS,    KC_TRNS,      KC_TRNS),

  [_MOUSE] = LAYOUT_split_3x5_3
  (KC_NO,           KC_NO,         KC_NO,         KC_NO,         KC_NO,        KC_NO,      KC_WH_U,      KC_MS_U,      KC_NO,      KC_NO,
   KC_LGUI,         KC_LALT,       KC_LCTL,       KC_LSFT,       KC_NO,        KC_NO,      KC_MS_L,      KC_MS_D,      KC_MS_R,    KC_NO,
   KC_NO,           KC_NO,         KC_NO,         KC_NO,         KC_NO,        KC_NO,      KC_WH_D,      KC_NO,        KC_NO,      KC_NO,
                                   KC_TRNS,       KC_TRNS,       KC_TRNS,      KC_BTN1,    KC_BTN2,      KC_BTN3),
};

/* layer_state_t layer_state_set_user(layer_state_t state) { */
/*   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST); */
/* } */
