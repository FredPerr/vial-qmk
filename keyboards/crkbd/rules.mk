# RP2040-specific CRKBD build settings

# Hardware specification
MCU = RP2040
BOOTLOADER = rp2040

# Communication drivers
SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor

# Features
SPLIT_KEYBOARD = yes
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812

# Build options
LTO_ENABLE = yes
BOOTMAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes
EXTRAKEY_ENABLE = yes
NKRO_ENABLE = yes

# Layout
LAYOUTS = split_3x6_3
