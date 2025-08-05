# Fred Perron Corne v3 MX split keyboard

## Getting started:

```bash
qmk setup fredperr/vial-qmk
```

### Dependencies

- [DFU Util](https://dfu-util.sourceforge.net/)

### Compile this keyboard
Place the keyboard project here `~/vial-qmk/keyboards/crkbd_fredperr`

In the `~/vial-qmk/` folder, run the following command
```bash
qmk compile -kb crkbd_fredperr -km vial
```

### Flash the keyboard

```bash
qmk flash -kb crkbd_fredperr -km vial
```

When you entered the bootloader once, you can simply double tab the reset button and the flash will begin.

### OLED customization

Use this website to visualize and customize the OLEDs.
https://joric.github.io/qle/

