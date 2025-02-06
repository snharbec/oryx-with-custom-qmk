#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TD(DANCE_0),    KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           DE_SS,          
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           MT(MOD_LCTL, KC_T),                                MT(MOD_LCTL, DE_Y),MT(MOD_RCTL, KC_U),MT(MOD_RGUI, KC_I),MT(MOD_LALT, KC_O),KC_P,           TD(DANCE_2),    
    CW_TOGG,        KC_A,           MEH_T(KC_S),    MT(MOD_LGUI, KC_D),LT(1,KC_F),     MT(MOD_LSFT, KC_G),                                MT(MOD_RSFT, KC_H),KC_J,           KC_K,           KC_L,           DE_OE,          TD(DANCE_3),    
    KC_LEFT_SHIFT,  MT(MOD_LALT, DE_Z),KC_X,           KC_C,           LT(6,KC_V),     MT(MOD_LALT, KC_B),                                MT(MOD_LALT, KC_N),MT(MOD_RALT, KC_M),KC_COMMA,       KC_DOT,         TD(DANCE_4),    KC_RIGHT_SHIFT, 
                                                    LT(1,KC_SPACE), TD(DANCE_1),                                    LT(5,KC_ENTER), LT(2,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, LALT(KC_F7),    LALT(KC_F8),    LALT(KC_F9),    KC_HOME,        KC_END,                                         LSFT(KC_LEFT),  LSFT(KC_DOWN),  LSFT(KC_UP),    LSFT(KC_RIGHT), KC_TRANSPARENT, KC_LEFT_CTRL,   
    KC_TRANSPARENT, LALT(KC_F4),    LALT(KC_F5),    LALT(KC_F6),    KC_DOT,         KC_COMMA,                                       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_HOME,        KC_PAGE_UP,     
    KC_0,           LALT(KC_F1),    LALT(KC_F2),    LALT(KC_F3),    KC_LEFT_CTRL,   KC_LEFT_ALT,                                    LCTL(KC_LEFT),  LCTL(KC_DOWN),  LCTL(KC_UP),    LCTL(KC_RIGHT), KC_END,         KC_PGDN,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 TD(DANCE_5),    TD(DANCE_6)
  ),
  [2] = LAYOUT_voyager(
    DE_ACUT,        DE_EXLM,        DE_AT,          DE_HASH,        DE_DLR,         DE_PERC,                                        DE_CIRC,        DE_AMPR,        DE_ASTR,        DE_LPRN,        DE_RPRN,        KC_TRANSPARENT, 
    CW_TOGG,        DE_LCBR,        DE_LBRC,        DE_RBRC,        DE_RCBR,        DE_HASH,                                        DE_QUOT,        DE_ASTR,        DE_AMPR,        DE_GRV,         LSFT(DE_GRV),   KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_LPRN,        DE_LESS,        DE_MORE,        DE_RPRN,        DE_PERC,                                        DE_DQOT,        DE_MINS,        DE_PLUS,        DE_EQL,         DE_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_EXLM,        DE_AT,          DE_HASH,        DE_DLR,         DE_AMPR,                                        DE_BSLS,        DE_UNDS,        DE_PIPE,        DE_SLSH,        DE_QST,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    TO(0),          KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TO(0),          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_UP,    KC_MS_WH_DOWN,  KC_MS_WH_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_UP,       KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_MS_BTN1,                                     KC_MS_BTN2,     KC_MS_BTN3
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, ST_MACRO_1,     ST_MACRO_2,     KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_3,                                     ST_MACRO_9,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_5,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_10,    ST_MACRO_11,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_7,     KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_16,    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_17,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    ST_MACRO_8,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, DE_EXLM,        DE_AT,          DE_HASH,        DE_DLR,         DE_PERC,                                        DE_CIRC,        DE_AMPR,        DE_ASTR,        DE_LPRN,        DE_RPRN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, DE_EXLM,        DE_DQOT,        DE_PARA,        DE_DLR,         DE_PERC,                                        DE_AMPR,        DE_SLSH,        DE_LPRN,        DE_RPRN,        DE_EQL,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DE_PLUS,        KC_7,           KC_8,           KC_9,           DE_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DE_EQL,         KC_4,           KC_5,           KC_6,           KC_SPACE,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 DE_MINS,        KC_1,           KC_2,           KC_3,           DE_SLSH,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_BSPC,        KC_0
  ),
};

const uint16_t PROGMEM combo0[] = { KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_6, KC_7, COMBO_END};
const uint16_t PROGMEM combo2[] = { MT(MOD_RSFT, KC_H), KC_J, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo4[] = { MT(MOD_LCTL, DE_Y), MT(MOD_RCTL, KC_U), COMBO_END};
const uint16_t PROGMEM combo5[] = { LT(1,KC_SPACE), LT(2,KC_BSPC), COMBO_END};
const uint16_t PROGMEM combo6[] = { KC_LEFT_SHIFT, KC_RIGHT_SHIFT, COMBO_END};
const uint16_t PROGMEM combo7[] = { KC_R, MT(MOD_LCTL, KC_T), COMBO_END};
const uint16_t PROGMEM combo8[] = { MT(MOD_LALT, KC_N), MT(MOD_RALT, KC_M), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_HOME),
    COMBO(combo1, KC_END),
    COMBO(combo2, KC_ENTER),
    COMBO(combo3, KC_DELETE),
    COMBO(combo4, KC_ESCAPE),
    COMBO(combo5, LCTL(KC_B)),
    COMBO(combo6, TG(7)),
    COMBO(combo7, KC_BSPC),
    COMBO(combo8, ST_MACRO_0),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LCTL, KC_T):
            return TAPPING_TERM -2;
        case MEH_T(KC_S):
            return TAPPING_TERM + 548;
        case MT(MOD_LSFT, KC_G):
            return TAPPING_TERM -52;
        case LT(1,KC_SPACE):
            return TAPPING_TERM -52;
        case TD(DANCE_1):
            return TAPPING_TERM -52;
        case MT(MOD_RSFT, KC_H):
            return TAPPING_TERM -52;
        case LT(5,KC_ENTER):
            return TAPPING_TERM -52;
        case LT(2,KC_BSPC):
            return TAPPING_TERM -102;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {28,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {43,146,239}, {43,146,239}, {45,113,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,218,204}, {154,218,204}, {0,0,0}, {0,0,0}, {39,164,255}, {241,218,204}, {28,255,255}, {28,255,255}, {136,6,230}, {0,0,0}, {0,0,0}, {63,218,204}, {63,218,204}, {169,255,255}, {76,218,204}, {43,146,239}, {43,146,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,218,204}, {141,218,204}, {46,218,204}, {63,218,204}, {0,0,0}, {0,245,245}, {28,255,255}, {74,57,159}, {74,57,159}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {136,6,230}, {0,0,0}, {0,0,0}, {0,0,0}, {28,218,204}, {169,255,255}, {76,218,204} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {176,218,204}, {176,218,204}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {22,218,204}, {22,218,204}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {154,218,204}, {169,111,183}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {43,146,239}, {84,218,204}, {84,218,204}, {84,218,204}, {84,218,204}, {176,218,204}, {208,218,204}, {24,231,215}, {24,231,215}, {24,231,215}, {24,231,215}, {176,218,204}, {208,218,204}, {0,245,245}, {0,218,204} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {240,218,204}, {154,218,204}, {86,208,160}, {86,208,160}, {154,218,204}, {45,113,239}, {0,0,0}, {169,111,183}, {41,255,255}, {41,255,255}, {169,111,183}, {45,113,239}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {154,218,204}, {86,208,160}, {41,255,255}, {154,218,204}, {0,0,0}, {0,0,0}, {154,218,204}, {86,208,160}, {86,208,160}, {86,208,160}, {0,0,0}, {0,0,0}, {0,245,245}, {136,6,230}, {41,255,255}, {0,245,245}, {35,218,204}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {84,218,204}, {0,0,0}, {0,0,157}, {0,0,157}, {0,0,157}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {253,218,204}, {0,0,0}, {39,218,204}, {39,218,204}, {39,218,204}, {39,218,204}, {0,0,0}, {0,0,0}, {43,255,255}, {43,255,255}, {43,255,255}, {43,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {31,218,204}, {31,218,204} },

    [4] = { {0,0,0}, {159,218,204}, {159,218,204}, {0,0,0}, {0,0,0}, {159,218,204}, {0,0,0}, {159,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {159,218,204}, {0,0,0}, {0,0,0}, {159,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,218,204}, {0,0,0}, {0,0,0}, {159,218,204}, {0,0,0}, {159,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,218,204}, {159,218,204}, {0,0,0}, {0,0,0}, {159,218,204}, {159,218,204}, {159,218,204}, {159,218,204}, {0,0,0}, {159,218,204}, {0,0,0}, {0,0,0}, {159,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,255}, {0,0,255}, {0,0,255}, {136,6,230}, {136,6,230}, {136,6,230}, {0,0,0}, {141,218,204}, {141,218,204}, {141,218,204}, {141,218,204}, {141,218,204}, {0,0,0}, {45,113,239}, {45,218,204}, {35,218,204}, {74,61,224}, {63,218,204}, {0,0,0}, {241,146,224}, {241,146,224}, {241,146,224}, {241,146,224}, {241,146,224}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {1,218,204}, {141,218,204}, {141,218,204}, {141,218,204}, {141,218,204}, {141,218,204}, {0,0,0}, {63,218,204}, {74,61,224}, {35,218,204}, {45,218,204}, {45,113,239}, {0,0,0}, {241,146,224}, {241,146,224}, {241,146,224}, {241,146,224}, {241,146,224}, {0,0,0}, {0,0,0}, {0,0,0} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {43,146,239}, {63,218,204}, {63,218,204}, {63,218,204}, {43,146,239}, {0,0,0}, {74,57,159}, {63,218,204}, {63,218,204}, {63,218,204}, {74,57,159}, {0,0,0}, {43,146,239}, {63,218,204}, {63,218,204}, {63,218,204}, {43,146,239}, {0,0,0}, {1,218,204}, {63,218,204} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_T));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_T));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_T));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_T));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_S));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_SPACE));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_2));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_J));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_K));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_L));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_LSFT(SS_TAP(X_P)));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(100) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_LSFT(SS_TAP(X_V))));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[7];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_TILD);
        tap_code16(DE_TILD);
        tap_code16(DE_TILD);
    }
    if(state->count > 3) {
        tap_code16(DE_TILD);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(DE_TILD); break;
        case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_TILD); register_code16(DE_TILD);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(DE_TILD); break;
        case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_TILD); break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: layer_on(5); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_HOLD:
          layer_off(5);
        break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_UE);
        tap_code16(DE_UE);
        tap_code16(DE_UE);
    }
    if(state->count > 3) {
        tap_code16(DE_UE);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(DE_UE); break;
        case SINGLE_HOLD: layer_move(3); break;
        case DOUBLE_TAP: register_code16(DE_UE); register_code16(DE_UE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_UE); register_code16(DE_UE);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(DE_UE); break;
        case DOUBLE_TAP: unregister_code16(DE_UE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_UE); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_AE);
        tap_code16(DE_AE);
        tap_code16(DE_AE);
    }
    if(state->count > 3) {
        tap_code16(DE_AE);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(DE_AE); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_AE); register_code16(DE_AE);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(DE_AE); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_AE); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(DE_SLSH);
        tap_code16(DE_SLSH);
        tap_code16(DE_SLSH);
    }
    if(state->count > 3) {
        tap_code16(DE_SLSH);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(DE_SLSH); break;
        case SINGLE_HOLD: register_code16(DE_QST); break;
        case DOUBLE_TAP: register_code16(DE_BSLS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(DE_SLSH); register_code16(DE_SLSH);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(DE_SLSH); break;
        case SINGLE_HOLD: unregister_code16(DE_QST); break;
        case DOUBLE_TAP: unregister_code16(DE_BSLS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(DE_SLSH); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
        tap_code16(KC_DELETE);
    }
    if(state->count > 3) {
        tap_code16(KC_DELETE);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_DELETE); break;
        case SINGLE_HOLD: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(KC_DELETE); register_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DELETE); register_code16(KC_DELETE);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_DELETE); break;
        case SINGLE_HOLD: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(KC_DELETE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DELETE); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_BSPC));
        tap_code16(LALT(KC_BSPC));
        tap_code16(LALT(KC_BSPC));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_BSPC));
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(LALT(KC_BSPC)); break;
        case SINGLE_HOLD: register_code16(KC_BSPC); break;
        case DOUBLE_TAP: register_code16(LALT(KC_BSPC)); register_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_BSPC)); register_code16(LALT(KC_BSPC));
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_BSPC)); break;
        case SINGLE_HOLD: unregister_code16(KC_BSPC); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_BSPC)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_BSPC)); break;
    }
    dance_state[6].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
};
