# Compaq MX 11800 - QMK and VIA support
![compaq-mx-11800](https://github.com/vuckale/compaq-mx-11800-qmk-via/blob/main/overview.png?raw=true)

Compaq MX 11800 AKA Cherry G80 11800, a mechanical keyboard with cherry MX brown switches with trackball. Due to it's compact layout it was commonly used as a server/rack mount keyboard. Although there was a variant with windows keys, the model I used is winkeyless.

I replaced Motorola XC409410P MCU in it with a Teensy++ 2.0, allowing me to flash QMK and VIA firmware.

# Features

* USB mini B
* 4 programmable layers
* 16 macro keys
* bootmagic on esc key
* trackball
* speaker

# PCB Wiring
&ast; The PCB is upside down. You can orientate yourself by looking at LP4 and LP5 pins on the PCB.
![compaq-mx-11800](https://github.com/vuckale/compaq-mx-11800-qmk-via/blob/main/docs/col-row-wiring.png?raw=true)
![compaq-mx-11800](https://github.com/vuckale/compaq-mx-11800-qmk-via/blob/main/docs/wiring-photo.png?raw=true)

# Trackball Wiring
![compaq-mx-11800](https://github.com/vuckale/compaq-mx-11800-qmk-via/blob/main/docs/trackball-wiring.png?raw=true)

# Speaker Wiring 
![compaq-mx-11800](https://github.com/vuckale/compaq-mx-11800-qmk-via/blob/main/docs/speaker-wiring.png?raw=true)


<!-- * Keyboard Maintainer: [vuckale](https://github.com/yourusername)
Hardware Supported: *The PCBs, controllers supported*
Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make compaq-mx-11800:default

Flashing example for this keyboard:i

    make compaq-mx-11800:default:flash

or for VIA support:
    
    make compaq-mx-11800:via:flash -->

<!--See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).-->
