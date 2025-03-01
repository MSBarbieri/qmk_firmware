# Build Options
#   change yes to no to disable
#

BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
AUDIO_ENABLE = no           # Audio output
COMBO_ENABLE = yes

SERIAL_DRIVER = vendor
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pmw3360
LEADER_ENABLE = yes
CAPS_WORD_ENABLE = yes
TAP_DANCE_ENABLE=yes

SRC += features/custom_shift_keys.c
SRC += config/config.c

# print QMK_KEYBOARD_H
