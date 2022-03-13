// カラーパレット
const int colorPaletteLen = 16;
const int colorsLen = 4;
const PROGMEM uint8_t colorPalette[colorPaletteLen][colorsLen] = {
    {0, 0, 0, 0},
    {1, 25, 25, 25},
    {2, 107, 33, 25},
    {3, 90, 33, 66},
    {4, 239, 66, 99},
    {5, 189, 99, 49},
    {6, 25, 115, 66},
    {7, 115, 123, 123},
    {8, 206, 123, 181},
    {9, 25, 148, 99},
    {10, 33, 173, 140},
    {11, 247, 173, 230},
    {12, 66, 239, 181},
    {13, 123, 239, 214},
    {14, 214, 247, 222},
    {15, 247, 247, 247},
};
// キャラクタ画像
const int xLen = 80;
const int yLen = 80;
const PROGMEM uint8_t imageFormedInColorPalette[yLen][xLen] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 14, 9, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 7, 14, 9, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 0, 0, 7, 14, 7, 7, 14, 14, 9, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 12, 12, 12, 12, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 6, 7, 7, 14, 14, 7, 14, 14, 9, 6, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 9, 6, 6, 12, 12, 12, 12, 12, 12, 12, 12, 10, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 9, 10, 6, 14, 14, 14, 14, 14, 14, 7, 9, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 12, 12, 12, 12, 1, 6, 12, 12, 12, 12, 12, 12, 12, 12, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 7, 7, 0, 0, 7, 9, 10, 10, 6, 14, 14, 14, 14, 14, 14, 9, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 7, 0, 0, 0, 0, 7, 0, 0, 10, 10, 13, 13, 13, 12, 12, 12, 12, 12, 1, 12, 12, 12, 12, 12, 12, 12, 6, 12, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 6, 14, 7, 7, 14, 14, 9, 10, 10, 6, 14, 14, 14, 14, 14, 9, 6, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 14, 0, 0, 0, 7, 14, 1, 10, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 6, 12, 12, 12, 12, 12, 12, 12, 10, 12, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 14, 14, 7, 14, 14, 14, 9, 10, 10, 6, 14, 14, 14, 14, 7, 6, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 7, 0, 7, 14, 14, 1, 13, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 6, 12, 12, 12, 12, 12, 12, 12, 6, 12, 12, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 9, 14, 14, 14, 14, 14, 9, 10, 10, 9, 6, 14, 14, 14, 14, 9, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 7, 1, 14, 14, 1, 13, 13, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12, 12, 6, 12, 11, 11, 11, 12, 12, 6, 12, 12, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 9, 14, 14, 14, 14, 14, 9, 10, 10, 6, 14, 14, 14, 14, 9, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 7, 14, 14, 1, 13, 13, 13, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 6, 11, 11, 11, 11, 11, 12, 6, 11, 12, 12, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 9, 14, 14, 14, 14, 14, 9, 10, 10, 6, 14, 14, 14, 9, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 14, 7, 14, 1, 13, 12, 12, 12, 12, 12, 12, 12, 11, 11, 12, 12, 12, 6, 11, 11, 11, 11, 11, 12, 6, 11, 11, 12, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 9, 14, 14, 14, 14, 9, 10, 10, 6, 14, 14, 14, 9, 6, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 14, 14, 14, 1, 12, 12, 12, 12, 12, 12, 11, 11, 11, 11, 11, 12, 12, 10, 6, 11, 11, 11, 12, 10, 6, 11, 11, 11, 12, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 9, 7, 14, 14, 14, 9, 10, 10, 6, 14, 7, 9, 6, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 1, 1, 7, 15, 14, 14, 14, 14, 14, 1, 10, 10, 12, 12, 11, 11, 11, 11, 11, 11, 12, 12, 10, 6, 12, 12, 12, 10, 10, 6, 11, 11, 8, 12, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 9, 6, 14, 14, 9, 10, 10, 6, 14, 7, 9, 6, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 7, 7, 14, 14, 14, 14, 14, 6, 12, 12, 10, 10, 12, 11, 11, 11, 11, 12, 12, 12, 10, 6, 10, 10, 10, 10, 10, 6, 8, 8, 10, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 7, 14, 6, 10, 9, 6, 9, 6, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 15, 15, 14, 14, 14, 14, 14, 14, 9, 12, 12, 12, 9, 1, 11, 11, 12, 12, 12, 10, 10, 6, 10, 10, 8, 8, 6, 10, 10, 10, 10, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 10, 9, 6, 9, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 1, 15, 15, 15, 15, 14, 14, 14, 14, 9, 12, 12, 12, 12, 12, 10, 1, 12, 12, 10, 10, 10, 10, 6, 8, 8, 8, 8, 6, 10, 10, 10, 10, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 9, 9, 6, 9, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 1, 15, 15, 15, 14, 14, 14, 6, 12, 12, 12, 12, 12, 12, 12, 1, 10, 10, 10, 10, 8, 3, 8, 8, 8, 8, 3, 8, 10, 10, 10, 10, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 9, 6, 1, 1, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 7, 14, 1, 0, 0, 10, 1, 14, 15, 14, 14, 6, 12, 12, 12, 12, 12, 12, 12, 12, 10, 1, 10, 8, 8, 8, 3, 8, 8, 8, 8, 3, 8, 8, 10, 10, 10, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 1, 10, 9, 1, 6, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 7, 1, 0, 0, 0, 7, 14, 14, 1, 0, 10, 12, 1, 14, 14, 14, 14, 6, 12, 12, 12, 12, 12, 12, 12, 10, 10, 1, 8, 8, 8, 8, 3, 8, 8, 8, 3, 8, 8, 8, 10, 10, 10, 6, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 9, 8, 9, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 15, 7, 1, 0, 0, 7, 14, 14, 1, 10, 12, 12, 1, 14, 14, 6, 12, 12, 12, 12, 12, 12, 12, 12, 10, 10, 10, 1, 8, 8, 3, 8, 8, 8, 3, 8, 8, 8, 8, 10, 10, 6, 8, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 10, 8, 8, 9, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 15, 15, 1, 1, 7, 14, 14, 14, 1, 12, 12, 1, 14, 14, 6, 12, 12, 12, 12, 12, 12, 12, 10, 10, 10, 10, 1, 8, 8, 3, 8, 3, 3, 8, 8, 8, 8, 8, 8, 6, 8, 8, 10, 10, 1, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 10, 8, 3, 9, 1 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 15, 15, 15, 15, 14, 1, 7, 14, 14, 14, 1, 12, 10, 9, 14, 10, 12, 12, 12, 12, 12, 12, 12, 10, 10, 10, 8, 1, 8, 3, 1, 3, 8, 8, 8, 8, 8, 8, 1, 6, 8, 8, 8, 8, 10, 1, 0, 0, 0, 0, 7, 15, 7, 0, 0, 0, 7, 0, 7, 0, 0, 0, 1, 1, 9, 9, 1, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 15, 15, 14, 7, 7, 14, 14, 6, 10, 12, 9, 10, 10, 12, 12, 12, 12, 12, 10, 10, 10, 10, 8, 8, 1, 1, 3, 3, 8, 8, 8, 8, 1, 1, 10, 10, 10, 8, 8, 8, 10, 1, 0, 0, 0, 0, 7, 15, 15, 1, 0, 7, 14, 7, 14, 7, 0, 1, 10, 10, 10, 10, 6, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 15, 15, 15, 14, 14, 14, 14, 14, 14, 6, 9, 6, 6, 6, 1, 12, 12, 12, 10, 10, 10, 10, 10, 8, 8, 1, 1, 8, 8, 3, 1, 1, 3, 8, 8, 8, 10, 10, 8, 8, 8, 10, 1, 0, 0, 0, 7, 15, 15, 15, 1, 1, 14, 14, 7, 14, 7, 6, 9, 10, 10, 10, 10, 10, 6, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 14, 14, 14, 14, 14, 14, 14, 9, 10, 12, 12, 12, 6, 1, 10, 10, 10, 10, 10, 8, 8, 3, 0, 1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 10, 10, 8, 10, 10, 1, 0, 0, 0, 7, 15, 15, 7, 1, 14, 1, 14, 14, 7, 14, 6, 10, 10, 10, 10, 10, 10, 6, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 7, 15, 14, 14, 14, 14, 14, 14, 14, 14, 9, 12, 12, 12, 12, 12, 10, 10, 1, 10, 10, 1, 1, 1, 1, 0, 0, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 10, 10, 10, 1, 0, 0, 0, 0, 7, 15, 15, 7, 14, 14, 1, 14, 14, 7, 14, 6, 10, 10, 10, 10, 10, 8, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 7, 7, 14, 14, 14, 14, 14, 14, 9, 12, 12, 12, 12, 12, 12, 12, 12, 10, 1, 1, 12, 12, 12, 10, 1, 0, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 10, 10, 1, 1, 0, 0, 0, 0, 7, 15, 15, 15, 14, 1, 14, 14, 14, 14, 14, 6, 10, 10, 10, 10, 8, 8, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 15, 15, 15, 15, 14, 14, 14, 14, 14, 9, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 10, 1, 0, 0, 1, 8, 8, 8, 8, 8, 8, 8, 8, 10, 1, 1, 8, 1, 0, 0, 0, 7, 15, 15, 15, 14, 14, 1, 7, 14, 14, 14, 14, 6, 1, 1, 1, 9, 8, 3, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 15, 15, 6, 15, 15, 14, 14, 14, 14, 7, 12, 12, 12, 12, 12, 12, 12, 10, 12, 12, 12, 12, 12, 10, 10, 1, 0, 0, 0, 3, 3, 8, 8, 8, 8, 8, 3, 3, 10, 8, 8, 8, 1, 7, 0, 7, 15, 15, 15, 14, 1, 7, 14, 1, 14, 14, 14, 6, 10, 10, 10, 6, 6, 3, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 6, 10, 6, 15, 14, 14, 14, 9, 12, 12, 12, 12, 12, 12, 12, 12, 10, 12, 12, 12, 12, 12, 10, 1, 0, 0, 0, 1, 8, 8, 3, 3, 3, 3, 3, 8, 10, 10, 10, 8, 8, 1, 15, 7, 7, 15, 15, 14, 14, 1, 14, 14, 1, 14, 14, 6, 10, 10, 10, 10, 10, 10, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 6, 7, 14, 14, 14, 9, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 10, 10, 1, 0, 0, 0, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 10, 8, 10, 10, 1, 15, 7, 15, 15, 14, 7, 14, 14, 1, 0, 6, 14, 6, 10, 10, 10, 10, 10, 10, 10, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 9, 6, 14, 14, 14, 7, 12, 12, 12, 12, 12, 12, 12, 10, 12, 12, 12, 12, 10, 10, 1, 0, 0, 0, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 10, 10, 10, 10, 1, 15, 15, 7, 14, 14, 7, 14, 14, 1, 0, 6, 6, 10, 10, 10, 10, 8, 8, 10, 10, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 9, 1, 7, 14, 14, 14, 9, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 10, 10, 6, 1, 0, 0, 0, 3, 8, 8, 8, 8, 6, 6, 8, 8, 8, 8, 8, 10, 10, 10, 10, 1, 15, 15, 15, 14, 14, 14, 14, 1, 0, 6, 6, 12, 6, 6, 10, 8, 8, 8, 10, 10, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 9, 1, 6, 6, 6, 6, 6, 12, 12, 12, 12, 12, 1, 1, 1, 12, 12, 10, 9, 10, 1, 0, 0, 0, 3, 8, 8, 6, 6, 12, 6, 8, 8, 8, 8, 8, 10, 10, 10, 10, 1, 14, 15, 14, 14, 14, 14, 14, 1, 6, 13, 13, 13, 12, 12, 6, 8, 8, 8, 10, 8, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 9, 6, 10, 10, 10, 12, 13, 6, 6, 12, 12, 6, 10, 10, 1, 12, 10, 10, 9, 10, 1, 0, 0, 0, 3, 8, 6, 12, 12, 6, 6, 8, 8, 8, 8, 8, 10, 10, 10, 1, 10, 1, 14, 14, 14, 14, 14, 7, 12, 13, 13, 13, 13, 13, 12, 12, 6, 8, 10, 10, 8, 1, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 9, 1, 10, 10, 12, 13, 13, 12, 12, 6, 1, 10, 10, 1, 10, 10, 10, 9, 10, 10, 1, 0, 0, 0, 6, 6, 12, 12, 7, 1, 8, 8, 8, 8, 8, 8, 10, 10, 10, 6, 10, 1, 14, 14, 14, 14, 14, 6, 12, 13, 13, 13, 13, 13, 12, 12, 12, 6, 10, 8, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 6, 10, 9, 1, 10, 10, 12, 13, 12, 12, 12, 1, 10, 10, 1, 10, 1, 1, 1, 9, 10, 1, 0, 0, 6, 6, 12, 12, 7, 7, 14, 1, 8, 8, 8, 8, 8, 10, 10, 10, 6, 8, 10, 10, 1, 14, 14, 14, 7, 6, 6, 6, 13, 13, 13, 12, 12, 12, 12, 6, 8, 8, 1, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 13, 6, 10, 9, 1, 10, 12, 13, 13, 12, 12, 1, 10, 10, 1, 10, 10, 10, 10, 10, 1, 6, 6, 0, 6, 12, 12, 7, 7, 14, 14, 7, 1, 8, 8, 8, 8, 8, 10, 6, 6, 8, 8, 8, 10, 1, 1, 1, 1, 7, 12, 12, 12, 6, 12, 12, 12, 11, 11, 12, 10, 1, 1, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 10, 13, 6, 10, 9, 1, 10, 12, 13, 12, 12, 1, 9, 10, 10, 1, 10, 10, 10, 1, 1, 12, 12, 10, 1, 6, 10, 7, 14, 14, 14, 14, 1, 8, 8, 8, 8, 8, 1, 1, 10, 10, 8, 8, 8, 10, 1, 12, 1, 12, 12, 12, 12, 12, 12, 6, 11, 11, 11, 11, 12, 10, 6, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 6, 10, 6, 0, 0, 0, 0, 10, 13, 1, 10, 10, 9, 9, 1, 10, 12, 12, 1, 9, 9, 9, 1, 10, 10, 10, 10, 12, 12, 12, 12, 10, 1, 12, 7, 14, 14, 14, 14, 7, 8, 3, 3, 3, 3, 3, 8, 8, 8, 10, 10, 8, 8, 1, 10, 12, 12, 1, 12, 12, 12, 12, 12, 10, 6, 11, 11, 8, 10, 10, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 6, 10, 10, 6, 0, 0, 0, 10, 13, 1, 10, 10, 9, 9, 1, 10, 10, 1, 9, 9, 9, 1, 10, 10, 10, 12, 12, 12, 12, 12, 10, 1, 12, 12, 7, 14, 14, 14, 14, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 10, 10, 1, 8, 8, 12, 1, 12, 12, 12, 12, 10, 10, 6, 11, 8, 10, 10, 10, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 10, 10, 6, 0, 0, 12, 13, 1, 10, 10, 9, 9, 1, 10, 1, 9, 9, 9, 1, 10, 10, 12, 12, 12, 12, 12, 12, 10, 10, 1, 10, 9, 14, 14, 14, 14, 14, 15, 1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 10, 6, 8, 8, 8, 10, 1, 11, 11, 8, 10, 10, 10, 6, 10, 10, 10, 8, 1, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 1, 10, 10, 10, 1, 10, 13, 13, 1, 10, 10, 9, 9, 1, 1, 9, 9, 9, 1, 10, 12, 12, 10, 12, 12, 12, 12, 10, 10, 1, 10, 10, 9, 14, 14, 14, 14, 15, 15, 1, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 6, 8, 8, 8, 8, 10, 1, 8, 8, 8, 8, 10, 10, 6, 10, 10, 8, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 10, 10, 10, 1, 1, 6, 6, 10, 10, 6, 6, 1, 9, 9, 9, 9, 1, 9, 10, 12, 10, 12, 12, 12, 12, 10, 10, 1, 10, 9, 14, 14, 14, 15, 15, 15, 15, 15, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 10, 6, 10, 8, 8, 10, 10, 1, 8, 8, 8, 8, 10, 10, 1, 10, 8, 8, 1, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 1, 10, 10, 9, 9, 9, 6, 10, 10, 10, 10, 9, 9, 9, 9, 1, 10, 14, 9, 12, 12, 10, 12, 12, 10, 1, 10, 1, 10, 9, 14, 14, 15, 15, 15, 15, 15, 15, 7, 8, 8, 8, 8, 8, 8, 8, 8, 10, 6, 10, 10, 10, 10, 10, 10, 1, 8, 8, 8, 10, 10, 10, 1, 8, 8, 1, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 9, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 1, 1, 14, 15, 9, 12, 12, 10, 12, 12, 10, 1, 1, 10, 1, 9, 14, 15, 15, 15, 15, 14, 14, 1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 6, 10, 10, 10, 10, 10, 10, 1, 10, 10, 10, 10, 10, 10, 10, 1, 8, 1, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 9, 9, 6, 10, 10, 10, 10, 6, 9, 9, 9, 1, 5, 15, 15, 14, 10, 10, 12, 12, 12, 10, 10, 10, 1, 1, 1, 14, 14, 14, 14, 14, 14, 7, 0, 1, 1, 8, 8, 8, 8, 8, 6, 6, 8, 8, 10, 10, 10, 10, 10, 1, 10, 10, 10, 10, 10, 10, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 10, 10, 10, 1, 9, 1, 10, 10, 10, 10, 6, 9, 9, 1, 5, 2, 4, 15, 14, 10, 12, 12, 12, 10, 10, 10, 10, 10, 10, 10, 1, 14, 14, 14, 14, 14, 1, 0, 1, 8, 1, 1, 1, 3, 3, 8, 8, 8, 8, 8, 8, 10, 10, 1, 10, 10, 8, 8, 8, 8, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 10, 10, 10, 10, 1, 6, 1, 10, 10, 9, 9, 6, 9, 1, 4, 1, 4, 10, 10, 12, 12, 12, 12, 9, 10, 10, 10, 10, 10, 10, 1, 14, 14, 14, 14, 14, 14, 7, 0, 1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 1, 8, 8, 8, 8, 8, 8, 8, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 6, 1, 10, 10, 9, 14, 6, 9, 9, 9, 9, 1, 1, 12, 9, 6, 6, 12, 12, 12, 12, 12, 12, 9, 10, 10, 10, 10, 1, 1, 14, 14, 14, 14, 14, 14, 14, 1, 0, 0, 3, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 1, 8, 8, 8, 8, 8, 8, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 6, 6, 6, 6, 0, 0, 0, 0, 1, 10, 10, 14, 5, 1, 9, 9, 1, 13, 13, 12, 12, 12, 12, 12, 12, 12, 12, 12, 9, 10, 10, 10, 10, 1, 14, 14, 14, 14, 14, 14, 14, 14, 15, 15, 7, 0, 0, 0, 3, 3, 8, 8, 8, 8, 8, 3, 1, 1, 8, 8, 8, 8, 8, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 6, 12, 12, 10, 10, 6, 6, 6, 0, 0, 6, 10, 9, 9, 1, 1, 1, 12, 13, 9, 10, 12, 3, 3, 3, 12, 12, 12, 12, 9, 10, 10, 10, 10, 1, 9, 9, 14, 1, 1, 1, 14, 15, 15, 15, 1, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 0, 0, 3, 3, 3, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 6, 6, 6, 10, 10, 10, 10, 6, 1, 6, 10, 10, 6, 13, 12, 10, 12, 12, 9, 3, 3, 8, 8, 8, 3, 12, 12, 12, 9, 10, 10, 10, 1, 10, 10, 10, 1, 0, 0, 0, 1, 7, 15, 15, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 7, 14, 6, 6, 6, 9, 10, 6, 10, 10, 9, 3, 6, 10, 12, 12, 3, 3, 11, 11, 11, 8, 8, 8, 1, 12, 12, 12, 9, 10, 10, 1, 1, 1, 10, 10, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 7, 14, 14, 14, 14, 6, 10, 10, 10, 3, 11, 11, 3, 3, 3, 11, 11, 11, 3, 3, 3, 3, 8, 8, 3, 3, 12, 9, 10, 10, 1, 0, 0, 1, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 7, 14, 14, 14, 6, 10, 10, 3, 8, 3, 3, 11, 11, 11, 8, 1, 1, 1, 14, 15, 1, 3, 8, 8, 3, 1, 10, 9, 10, 10, 1, 0, 0, 1, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 7, 14, 14, 14, 6, 6, 6, 3, 7, 14, 3, 3, 3, 2, 2, 2, 2, 7, 15, 1, 1, 3, 8, 8, 8, 1, 9, 10, 10, 1, 0, 0, 0, 9, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 7, 14, 14, 14, 14, 14, 14, 6, 3, 14, 15, 1, 2, 2, 2, 2, 2, 2, 7, 1, 1, 1, 1, 1, 8, 8, 8, 9, 10, 10, 1, 0, 0, 1, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 14, 14, 14, 14, 14, 14, 1, 7, 15, 1, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 8, 8, 9, 10, 1, 0, 0, 0, 9, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 15, 14, 14, 14, 14, 14, 14, 1, 7, 3, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 5, 5, 2, 1, 1, 8, 9, 1, 0, 0, 0, 0, 1, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 14, 7, 1, 1, 14, 14, 1, 1, 8, 8, 1, 2, 2, 2, 1, 1, 5, 4, 4, 4, 5, 2, 1, 8, 1, 0, 0, 0, 0, 0, 1, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 7, 0, 0, 0, 1, 14, 14, 9, 1, 1, 8, 1, 2, 2, 1, 4, 4, 4, 4, 4, 4, 5, 1, 8, 1, 0, 0, 0, 0, 0, 9, 10, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 7, 7, 0, 0, 0, 0, 7, 15, 9, 10, 10, 9, 1, 8, 2, 1, 5, 4, 4, 4, 4, 4, 4, 5, 3, 8, 1, 0, 0, 0, 0, 9, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 9, 10, 9, 0, 0, 1, 8, 2, 4, 4, 4, 4, 4, 4, 4, 5, 3, 8, 1, 0, 0, 0, 0, 1, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 9, 10, 9, 0, 0, 1, 8, 5, 4, 4, 4, 4, 4, 4, 4, 3, 8, 8, 1, 0, 0, 0, 0, 1, 13, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 9, 0, 0, 0, 1, 2, 5, 4, 4, 4, 4, 4, 5, 3, 11, 3, 0, 0, 0, 0, 0, 1, 13, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 9, 0, 0, 1, 2, 5, 4, 4, 4, 3, 3, 2, 3, 11, 1, 0, 0, 0, 0, 0, 1, 13, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 9, 0, 0, 1, 8, 2, 2, 5, 2, 15, 14, 3, 3, 11, 1, 0, 0, 0, 0, 0, 9, 13, 13, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 9, 0, 0, 7, 7, 2, 2, 5, 5, 2, 14, 3, 3, 11, 1, 0, 0, 0, 0, 0, 0, 9, 13, 9, 0, 0, 0, 0, 0, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 9, 0, 0, 1, 7, 15, 15, 2, 2, 2, 3, 2, 11, 11, 8, 1, 0, 0, 0, 0, 0, 0, 9, 13, 13, 9, 0, 0, 0, 9, 13, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 0, 0, 9, 10, 9, 0, 0, 1, 11, 7, 2, 2, 2, 8, 11, 11, 11, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 13, 13, 9, 9, 9, 13, 13, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 12, 9, 9, 12, 10, 9, 0, 0, 0, 1, 11, 11, 11, 11, 11, 1, 1, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 13, 13, 13, 13, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 12, 12, 12, 9, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};
