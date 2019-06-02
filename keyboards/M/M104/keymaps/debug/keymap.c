// Default layout for M104zeal
#include QMK_KEYBOARD_H

#define _____ KC_TRNS
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT( /* Base , Layer shift on Backslash key left to left shift key*/
       KC_F6,  KC_F9,  KC_SCROLLLOCK,  KC_LBRACKET,    KC_J,       KC_7,       KC_SCOLON,  KC_KP_SLASH,                KC_BSLASH,  KC_TAB,                 KC_RALT,KC_L,       KC_KP_5,                          \
       KC_F4,  KC_F11, KC_F12,         KC_0,           KC_6,       KC_I,       KC_9,       KC_KP_PLUS,     KC_RSHIFT,  KC_EQUAL,   KC_F3,                          KC_8,       KC_KP_9,                KC_RCTRL, \
       KC_W,   KC_R,   KC_E,           KC_5,           KC_BSPACE,  KC_LEFT,    KC_KP_6,    KC_KP_MINUS,    KC_LSHIFT,  KC_T,       KC_Q,                           KC_ENTER,   KC_KP_3,                KC_LCTRL, \
       KC_X,   KC_D,   KC_V,           KC_N,           KC_DELETE,  KC_END,     KC_RIGHT,   KC_KP_ENTER,                KC_B,       KC_Z,                   KC_LALT,KC_PGDOWN,                                    \
       KC_F7,  KC_F8,  KC_PAUSE,       KC_QUOTE,       KC_M,       KC_COMMA,   KC_SLASH,   KC_KP_8,                                KC_F1,      KC_GRAVE,   KC_ESC, KC_DOT,     KC_NUMLOCK, KC_SPACE,             \
       KC_F5,  KC_F10, KC_PSCREEN,     KC_MINUS,       KC_U,       KC_K,       KC_P,       KC_KP_ASTERISK,             KC_RBRACKET,KC_F2,                          KC_O,       KC_KP_2,    KC_RGUI,              \
       KC_1,   KC_2,   KC_3,           KC_Y,           KC_UP,                              KC_KP_1,                    KC_4,       KC_CAPSLOCK,KC_S,       KC_A,   KC_KP_4,    KC_KP_7,    KC_APP,              \
               KC_C,   KC_F,           KC_H,           KC_INSERT,  KC_HOME,    KC_PGUP,    KC_KP_0,                    KC_G,       LT(1,KC_F), KC_LGUI,            KC_DOWN,    KC_KP_DOT                        \
),
[1] = LAYOUT( /* Mouse stuff on cursor keys */
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,                  _____,  _____,      _____,                           \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,          _____,      _____,      _____,                          _____,      _____,                  _____,   \
       _____,  _____, _____,           _____,          _____,      KC_MS_L,    _____,      _____,          _____,      _____,      _____,                          _____,      _____,                  _____,   \
       _____,  _____, _____,           _____,          _____,      _____,      KC_MS_R,    _____,                      _____,      _____,                  _____,  _____,                                       \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                                  _____,      _____,      _____,  _____,      _____,      _____,               \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,                          _____,      _____,      _____,               \
       _____,  _____, _____,           _____,          KC_MS_U,                            _____,                      _____,      _____,      _____,      _____,  _____,      _____,      _____,               \
               _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,      _____,              KC_MS_D,    _____                            \
),
[2] = LAYOUT( /* nothing yet */
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,                  _____,  _____,      _____,                           \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,          _____,      _____,      _____,                          _____,      _____,                  _____,   \
       _____,  _____, _____,           _____,          _____,      KC_MS_L,    _____,      _____,          _____,      _____,      _____,                          _____,      _____,                  _____,   \
       _____,  _____, _____,           _____,          _____,      _____,      KC_MS_R,    _____,                      _____,      _____,                  _____,  _____,                                       \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                                  _____,      _____,      _____,  _____,      _____,      _____,               \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,                          _____,      _____,      _____,               \
       _____,  _____, _____,           _____,          KC_MS_U,                            _____,                      _____,      _____,      _____,      _____,  _____,      _____,      _____,               \
               _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,      _____,              KC_MS_D,    _____                            \
),
[3] = LAYOUT( /*  nothing yet */
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,                  _____,  _____,      _____,                           \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,          _____,      _____,      _____,                          _____,      _____,                  _____,   \
       _____,  _____, _____,           _____,          _____,      KC_MS_L,    _____,      _____,          _____,      _____,      _____,                          _____,      _____,                  _____,   \
       _____,  _____, _____,           _____,          _____,      _____,      KC_MS_R,    _____,                      _____,      _____,                  _____,  _____,                                       \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                                  _____,      _____,      _____,  _____,      _____,      _____,               \
       _____,  _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,                          _____,      _____,      _____,               \
       _____,  _____, _____,           _____,          KC_MS_U,                            _____,                      _____,      _____,      _____,      _____,  _____,      _____,      _____,               \
               _____, _____,           _____,          _____,      _____,      _____,      _____,                      _____,      _____,      _____,              KC_MS_D,    _____                            \
),

};


// debugging via hid_listen 
//  OBS: this is basically a keylogger !!!

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %04X, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif 
  return true;
}
