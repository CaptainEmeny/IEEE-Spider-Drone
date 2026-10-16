
# IEEE Spider Drone

## Setup

### *Downloading Boards*

Open the Arduino IDE and go to **Preferences** and add the following board to '**Additional boards manager URLs**':

```
https://raw.githubusercontent.com/pdcook/nRFMicro-Arduino-Core/main/package_nRFMicro_index.json
https://files.seeedstudio.com/arduino/package_seeeduino_boards_index.json](https://raw.githubusercontent.com/pdcook/nRFMicro-Arduino-Core/3dab6477754d9b28053fe36b06c718cde6e93d3f/package_nRFMicro_index.json
```

Next, install those boards:  
Tools > Board Manager > Search and install 'nRFMicro-like-Boards'
Tools > Board Manager > Search and install ''

Once installed, select the board by navigating to:  
Tools > Board > 'nRFMicro-Style Boards' > 'SuperMini nRF52840'


### ***ONLY DO THIS ONCE PER BOARD SET-UP***

If using a new board, navigate to:  
Tools > Programmer > 'Bootloader DFU for Bluefruit nRF52'

To update the bootloader, you must go to:  
Tools > Burn Bootloader


###  *Running the SuperMini nRF52840*
At the top of the .ino file, make sure you include the following library:
```
#include <Adafruit_TinyUSB.h>
```
Once all that is done, all you have to do is press the upload button in the top left of the IDE and the code should be uploaded onto the board!

### Setup References

- [Connecting and testing ProMicro nRF52840 clones](https://www.beachyuk.com/blog/connecting-and-testing-promicro-nrf52840-clones)
- [Arduino IDE Setup Docs](https://github.com/pdcook/nRFMicro-Arduino-Core/blob/main/README.md)

### Troubleshooting
- [Package doesn't work with IDE 2.3.4 via Boards Manager](https://github.com/pdcook/nRFMicro-Arduino-Core/issues/1)
