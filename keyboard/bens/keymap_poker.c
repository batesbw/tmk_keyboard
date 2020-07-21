#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty */     
    KEYMAP( V,    B,    F,    G,    T,    5,     R,    6,    7,    \
            X,    C,    D,    S,    W,    3,     E,    4,    Q,    \
            Z,    CAPS, A,    TAB,  Q,    2,     ESC,  1,    P,    \
            LBRC, RBRC, BSPC, LCTL, A,    S,     D,    QUOT, BSPC, \
            SPC,  N,    J,    H,    Y,    7,     U,    8,    Z,    \
            COMM, M,    K,    L,    I,    9,     O,    0,    SLSH, \
            DOT,  SLSH, SCLN, QUOT, P,    MINS,  LBRC, EQL,  D,    \
            RCTL, BSLS, RSFT, 4,    FN0,  RBRC,  ENT,  DEL,  M,    \
            DOT,  2,    1,    5,    8,    LGUI,  7,    LEFT, V,    \
            0,    RALT, 3,    6,    9,    RIGHT, DOWN, UP,   5),

    /* 1: FN 1 */
    KEYMAP( TRNS, TRNS, TRNS, TRNS, TRNS, F5,    TRNS, F6,   F7,   \
            TRNS, TRNS, TRNS, TRNS, TRNS, F3,    TRNS, F4,   TRNS, \
            TRNS, TRNS, TRNS, TRNS, TRNS, F2,    TRNS, F1,   TRNS,    \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS,    \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, F8,   TRNS,    \
            TRNS, TRNS, TRNS, TRNS, TRNS, F9,    TRNS, F10,  TRNS,    \
            TRNS, TRNS, TRNS, TRNS, TRNS, F11,   TRNS, F12,  TRNS,    \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS,    \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS,    \
            TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  TRNS, TRNS, TRNS),
    };

const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};

