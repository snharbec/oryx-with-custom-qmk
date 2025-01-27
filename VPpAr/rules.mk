# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
CONSOLE_ENABLE = false
COMMAND_ENABLE = no
AUTO_SHIFT_ENABLE = yes
ORYX_ENABLE = yes
RGB_MATRIX_CUSTOM_KB = yes
TAP_DANCE_ENABLE = yes
SPACE_CADET_ENABLE = no
CAPS_WORD_ENABLE = yes
COMBO_ENABLE = yes
# Custom QMK rules here
KEY_OVERRIDE_ENABLE = yes
SRC += features/achordion.c
SRC += features/sentence_case.c
