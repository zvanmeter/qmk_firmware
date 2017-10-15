// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

#include "amj60.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _DEF 0
#define _SPC 1

// increase readability
#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap _DEF: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =| ~`| BS|
     * |-----------------------------------------------------------|
     * | Tab |  Q|  W|  E|  R|  5|  6|  7|  8|  9|  a|  b|  c|    \|
     * |-----------------------------------------------------------|
     * | Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  #|  Enter|
     * |-----------------------------------------------------------|
     * |Shft|   \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Shft| Fn|
     * |-----------------------------------------------------------|
     * |Ctrl| Win| Alt|        Space          | Alt| Win|Menu| Ctrl|
     * `-----------------------------------------------------------'
     */
    [_DEF] = KEYMAP(
        KC_ESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_GRV,KC_BSPC,\
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,       \
        KC_CAPS,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_NUHS,KC_ENT,        \
        KC_LSFT,KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,MO(1),         \
        KC_LCTL,KC_LGUI,KC_LALT,                        KC_SPC,                                 KC_RALT,KC_RGUI,KC_MENU,KC_RCTL),
    /* Keymap 1: F-and-arrow Layer
     * ,-----------------------------------------------------------.
     * |PrSc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|  |Del|
     * |-----------------------------------------------------------|
     * |    |Paus| Up|   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |Lft|Dwn|Rgt|   |   |Left|Down|Right|Up|  |   | PLAY |
     * |-----------------------------------------------------------|
     * |    |   |   |   |   |  |   |   |   |   |   |   | Vol+ |  Fn|
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |Prev|Vol-|Next|
     * `-----------------------------------------------------------'
     */
    [_SPC] = KEYMAP(
        KC_PSCR,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11,  KC_F12,_______,KC_DEL,\
        _______,KC_PAUS,KC_UP,  _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,       \
        _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,KC_LEFT,KC_DOWN,KC_UP,  KC_RGHT,_______,_______,_______,KC_MPLY,       \
        _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,KC_VOLU,MO(1),         \
        _______,_______,_______,                        _______,                                _______,KC_MPRV,KC_VOLD,KC_MNXT),

};
