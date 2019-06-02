// Default layout for M104zeal
#include QMK_KEYBOARD_H

#define _____ KC_TRNS
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT( /* Base , Layer shift on Backslash key left to left shift key*/
       KC_F6,   KC_F9,   KC_SCROLLLOCK,  KC_LBRACKET,    KC_J,       KC_7,       KC_SCOLON,  KC_KP_SLASH,                  KC_BSLASH,  KC_TAB,                 KC_RALT,KC_L,       KC_KP_5,                          \
       KC_F4,   KC_F11,  KC_F12,         KC_0,           KC_6,       KC_I,       KC_9,       KC_KP_PLUS,     KC_RSHIFT,    KC_EQUAL,   KC_F3,                          KC_8,       KC_KP_9,                KC_RCTRL, \
       KC_W,    KC_R,    KC_E,           KC_5,           KC_BSPACE,  KC_LEFT,    KC_KP_6,    KC_KP_MINUS,    KC_LSHIFT,    KC_T,       KC_Q,                           KC_ENTER,   KC_KP_3,                KC_LCTRL, \
       KC_X,    KC_D,    KC_V,           KC_N,           KC_DELETE,  KC_END,     KC_RIGHT,   KC_KP_ENTER,                  KC_B,       KC_Z,                   KC_LALT,KC_PGDOWN,                                    \
       KC_F7,   KC_F8,   KC_PAUSE,       KC_QUOTE,       KC_M,       KC_COMMA,   KC_SLASH,   KC_KP_8,                                  KC_F1,      KC_GRAVE,   KC_ESC, KC_DOT,     KC_NUMLOCK, KC_SPACE,             \
       KC_F5,   KC_F10,  KC_PSCREEN,     KC_MINUS,       KC_U,       KC_K,       KC_P,       KC_KP_ASTERISK,               KC_RBRACKET,KC_F2,                          KC_O,       KC_KP_2,    KC_RGUI,              \
       KC_1,    KC_2,    KC_3,           KC_Y,           KC_UP,                              KC_KP_1,                      KC_4,       KC_CAPSLOCK,KC_S,       KC_A,   KC_KP_4,    KC_KP_7,    KC_APP,              \
                KC_C,    KC_F,           KC_H,           KC_INSERT,  KC_HOME,    KC_PGUP,    KC_KP_0,                      KC_G,       LT(1,KC_F), KC_LGUI,            KC_DOWN,    KC_KP_DOT                        \
),
//     MACRO06  MACRO09  MACRO14         KC_TRNS         KC_TRNS     KC_TRNS     KC_TRNS     KC_TRNS         KC_NO         KC_TRNS     KC_TRNS     KC_NO       KC_TRNS KC_TRNS     KC_TRNS     KC_NO       KC_NO   
//     MACRO04  MACRO11  MACRO12         KC_TRNS         KC_TRNS     KC_TRNS     KC_TRNS     KC_TRNS         KC_TRNS       KC_TRNS     MACRO03     KC_NO       KC_NO   KC_TRNS     KC_TRNS     KC_NO       KC_TRNS 
//     KC_TRNS  KC_TRNS  KC_TRNS         KC_TRNS         KC_TRNS     KC_MS_L     KC_TRNS     KC_TRNS         LT(2,KC_NO)   KC_TRNS     KC_TRNS     KC_NO       KC_NO   KC_TRNS     KC_TRNS     KC_NO       LT(3,KC_NO) 
//     KC_TRNS  KC_TRNS  KC_TRNS         KC_TRNS         KC_BTN1     KC_BTN3     KC_MS_R     KC_TRNS         KC_NO         KC_TRNS     KC_TRNS     KC_NO       KC_TRNS KC_BTN2     KC_NO       KC_NO       KC_NO   
//     MACRO07  MACRO08  MACRO15         KC_TRNS         KC_TRNS     KC_TRNS     KC_TRNS     KC_TRNS         KC_NO         KC_NO       MACRO01     KC_TRNS     MACRO00 KC_TRNS     KC_TRNS     KC_TRNS     KC_NO   
//     MACRO05  MACRO10  MACRO13         KC_TRNS         KC_TRNS     KC_TRNS     KC_TRNS     KC_TRNS         KC_NO         KC_TRNS     MACRO02     KC_NO       KC_NO   KC_TRNS     KC_TRNS     KC_TRNS     KC_NO   
//     KC_TRNS  KC_TRNS  KC_TRNS         KC_TRNS         KC_MS_U     KC_NO       KC_NO       KC_TRNS         KC_NO         KC_TRNS     KC_TRNS     KC_TRNS     KC_TRNS KC_TRNS     KC_TRNS     KC_TRNS     KC_NO   
//     KC_NO    KC_TRNS  KC_TRNS         KC_TRNS         KC_TRNS     KC_TRNS     KC_TRNS     KC_TRNS         KC_NO         KC_TRNS     KC_TRNS     KC_TRNS     KC_NO   KC_MS_D     KC_TRNS     KC_NO       KC_NO   

                                                
[1] = LAYOUT( // Mouse stuff on cursor keys                                          
       MACRO06, MACRO09, MACRO14,        _____,          _____,      _____,      _____,      _____,                         _____,      _____,                  _____,  _____,      _____,                                   \
       MACRO04, MACRO11, MACRO12,        _____,          _____,      _____,      _____,      _____,          _____,         _____,      MACRO03,                        _____,      _____,                  _____,           \
       _____,   _____,   _____,          _____,          _____,      KC_MS_L,    _____,      _____,          LT(2,KC_NO)  , _____,      _____,                          _____,      _____,                  LT(3,KC_NO),     \
       _____,   _____,   _____,          _____,          KC_BTN1,    KC_BTN3,    KC_MS_R,    _____,                         _____,      _____,                  _____,  KC_BTN2,                                             \
       MACRO07, MACRO08, MACRO15,        _____,          _____,      _____,      _____,      _____,                                     MACRO01,    _____,      MACRO00,_____,      _____,      _____,                       \
       MACRO05, MACRO10, MACRO13,        _____,          _____,      _____,      _____,      _____,                         _____,      MACRO02,                        _____,      _____,      _____,                       \
       _____,   _____,   _____,          _____,          KC_MS_U,                            _____,                         _____,      _____,      _____,      _____,  _____,      _____,      _____,                       \
                _____,   _____,          _____,          _____,      _____,      _____,      _____,                         _____,      _____,      _____,              KC_MS_D,    _____                                    \
),

[2] = LAYOUT( /* nothing yet */
       _____,   _____,   _____,          _____,          _____,      _____,      _____,      _____,                        _____,      _____,                  _____,  _____,      _____,                           \
       _____,   _____,   _____,          _____,          _____,      _____,      _____,      _____,          _____,        _____,      _____,                          _____,      _____,                  _____,   \
       _____,   _____,   _____,          _____,          _____,      _____,      _____,      _____,          _____,        _____,      _____,                          _____,      _____,                  _____,   \
       _____,   _____,   _____,          _____,          _____,      _____,      _____,      _____,                        _____,      _____,                  _____,  _____,                                       \
       _____,   _____,   _____,          _____,          _____,      _____,      _____,      _____,                                    _____,      _____,      _____,  _____,      _____,      _____,               \
       _____,   _____,   _____,          _____,          _____,      _____,      _____,      _____,                        _____,      _____,                          _____,      _____,      _____,               \
       _____,   _____,   _____,          _____,          _____,                              _____,                        _____,      _____,      _____,      _____,  _____,      _____,      _____,               \
                _____,   _____,          _____,          _____,      _____,      _____,      _____,                        _____,      _____,      _____,              _____,      _____                            \
),    
[3] = LAYOUT( /*  nothing yet */    
       _____,   _____,  _____,           _____,          _____,      _____,      _____,      _____,                        _____,      _____,                  _____,  _____,      _____,                           \
       _____,   _____,  _____,           _____,          _____,      _____,      _____,      _____,          _____,        _____,      _____,                          _____,      _____,                  _____,   \
       _____,   _____,  _____,           _____,          _____,      _____,      _____,      _____,          _____,        _____,      _____,                          _____,      _____,                  _____,   \
       _____,   _____,  _____,           _____,          _____,      _____,      _____,      _____,                        _____,      _____,                  _____,  _____,                                       \
       _____,   _____,  _____,           _____,          _____,      _____,      _____,      _____,                                    _____,      _____,      _____,  _____,      _____,      _____,               \
       _____,   _____,  _____,           _____,          _____,      _____,      _____,      _____,                        _____,      _____,                          _____,      _____,      _____,               \
       _____,   _____,  _____,           _____,          _____,                              _____,                        _____,      _____,      _____ ,     _____,  _____,      _____,      _____,               \
                _____,  _____,           _____,          _____,      _____,      _____,      _____,                        _____,      _____,      _____,              _____,      _____                            \
),

};


