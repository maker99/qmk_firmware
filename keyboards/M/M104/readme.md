# M104

![M104]()

M104, a reclaimed HP-KU-0316 104 key keyboard with teensy2++ and zeal60 rawhid support

Keyboard Maintainer: [maker99](https://github.com/maker99)  
Hardware Supported: HP-KU-0316 104 key keyboard with a teensy2++  
Hardware Availability: plain 104 key keyboard

Make example for this keyboard (after setting up your build environment):

    make M/M104:default:teensy

See [build environment setup](https://docs.qmk.fm/build_environment_setup.html) then the [make instructions](https://docs.qmk.fm/make_instructions.html) for more information.

RGB Backlight Configuration
====
It supports 3 WS2812 leds for Caps Lock, Num Lock, and Scroll Lock or 
RGB animations.

Re-programming
===
Using a modified zeal60 rawhid interface, the keyboard is fully re-programmable during operation without re-compiling from qmk sources. 

references: https://github.com/maker99/zeal60/tree/KB104_and_2x4

features:
====
the zeal60 rawhid interface allows to change many settings of the keyboard during operation

see: https://github.com/maker99/zeal60/tree/KB104_and_2x4

* eeprom reset:

    example: zealM104 eeprom_reset
* start bootloader:

    example: zealM104 bootloader
* USB LED indicators: 

  * example: zealM104  backlight_config_get_values [brightness|effect|effect_speed|caps_lock_indicator_color|num_lock_indicator_color|scroll_lock_indicator_color|layer_1_indicator_color|layer_2_indicator_color|layer_3_indicator_color|...]

  * change position, color and birghtness of the USB LED indicators
        HSV: H=0-360, S=0-100, V=0-100 (will be ignored, use the 'brightness' command instead)

* key layout:
    * see: https://github.com/maker99/zeal60/blob/KB104_and_2x4/keymaps/zeal104keymap_2.sh

    * commands: keymap_reset, keymap|set_keymap|keymap_set, get_keymap|keymap_get

    * the keys on all 4 layers can be changed, they will be stored in eeprom
    * additional on top of all qmk keycodes: 
    
        * backlight: https://github.com/maker99/qmk_firmware/blob/M104/keyboards/M/M104/rgb_backlight_keycodes.h

        * macros: https://github.com/maker99/qmk_firmware/blob/M104/keyboards/M/M104/zeal60_keycodes.h

* macros
    * examples: https://github.com/maker99/zeal60/blob/KB104_and_2x4/keymaps/zeal104macros_default.sh
    * commands: macro_buffer_reset|macros_reset, get_macro_buffer|get_macros|macros_get, set_macro_buffer|set_macros|macros_set
    * 16 macros can be programmed, keycodes: MACRO00 - MACRO15 (https://github.com/maker99/qmk_firmware/blob/M104/keyboards/M/M104/zeal60_keycodes.h)
    * macros can use the codes for string_send (see https://github.com/maker99/qmk_firmware/blob/master/quantum/send_string_keycodes.h)

* debugging:
    * set COMMAND_ENABLE = yes in rules.mk (see https://beta.docs.qmk.fm/newbs/newbs_testing_debugging#debugging )

    * use hid_listen from prj to show the debug info