# arduino-pokemon-lcd

## Hardware
- Arduino Uno
- AE-ATM0130

## 画像データを変換してArduinoで利用する

以下のコマンドを実行し、画像データをCのheaderファイルに変換する。

```zsh
# first of all, you put image file on /resources
cd path-to-project
python3 python/image2header.py charizard80x80.png
```

得られたheaderファイルをArduinoの依存ファイルに含める

```zsh
mv python/image2header/dist/charizard80x80.h arduino/arduino-pokemon-lcd/src/PixelWithColorPaletteLib/
```

`arduino-pokemon-lcd.ino` でheaderファイルをincludeする。

```arduino-pokemon-lcd.ino
#include "src/ATM0130Lib/ATM0130.h"
#include <avr/pgmspace.h>
+ #include "src/PixelWithColorPaletteLib/charizard80x80.h"
```


## 参考
https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32_datasheet_en.pdf

PROGMEM  
https://garretlab.web.fc2.com/arduino/introduction/memory/

ポケモン素材
http://hikochans.com/pixelart/pokemon/094