#include "src/ATM0130Lib/ATM0130.h"
#include <avr/pgmspace.h>
#include "src/PixelWithColorPaletteLib/gyarados80x80.h"

// ピクセルサイズとオフセット
const uint8_t pixelSize = 3;
const uint8_t offsetX = 0; // 左上原点
const uint8_t offsetY = 0; // 左上原点

//ピンの割り当て (D/C , /RES)
const uint8_t DC = 9;
const uint8_t RES = 8;

ATM0130 myATM0130 = ATM0130(DC, RES);

void setup()
{
  myATM0130.begin();
  myATM0130.setFigColor(0, 0, 0);
  myATM0130.drawRectangle(0, 0, 240, 240);
}

void loop()
{
  drawPicture();
}

void drawPicture()
{
  for (uint8_t y = 0; y < yLen; y++)
  {
    for (uint8_t x = 0; x < xLen; x++)
    {
      uint8_t indexOnColorPalette = pgm_read_byte(&(imageFormedInColorPalette[y][x]));
      uint8_t r = pgm_read_byte(&(colorPalette[indexOnColorPalette][1]));
      uint8_t g = pgm_read_byte(&(colorPalette[indexOnColorPalette][3]));
      uint8_t b = pgm_read_byte(&(colorPalette[indexOnColorPalette][2]));
      myATM0130.setFigColor(r, g, b);
      myATM0130.drawRectangle(x * pixelSize + offsetX, y * pixelSize + offsetY, pixelSize, pixelSize);
    }
  }
}
