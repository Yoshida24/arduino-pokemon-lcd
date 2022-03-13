// カラーパレット
const int colorPaletteLen = 15;
const int colorsLen = 4;
const PROGMEM uint8_t colorPalette[colorPaletteLen][colorsLen] = {
    {0, 0, 0, 0},
    {1, 148, 0, 8},
    {2, 156, 0, 99},
    {3, 222, 0, 173},
    {4, 255, 0, 173},
    {5, 255, 0, 222},
    {6, 16, 16, 16},
    {7, 206, 16, 66},
    {8, 255, 16, 90},
    {9, 16, 16, 148},
    {10, 66, 82, 214},
    {11, 107, 107, 107},
    {12, 156, 173, 247},
    {13, 197, 197, 197},
    {14, 255, 255, 255},
};
// キャラクタ画像
const int xLen = 80;
const int yLen = 80;
const PROGMEM uint8_t imageFormedInColorPalette[yLen][xLen] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 0, 0, 0, 0, 9, 9, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 10, 9, 6, 0, 0, 0, 0, 0, 9, 10, 10, 10, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 10, 9, 0, 0, 6, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 10, 10, 10, 6, 0, 0, 0, 0, 9, 10, 10, 10, 9, 0, 0, 0, 9, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 10, 10, 9, 0, 0, 9, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 1, 10, 10, 10, 10, 10, 9, 6, 0, 0, 0, 9, 10, 10, 10, 10, 6, 0, 9, 10, 10, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 9, 0, 0, 0, 9, 10, 10, 10, 9, 0, 6, 10, 12, 12, 9, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 1, 1, 10, 10, 10, 10, 9, 0, 0, 0, 9, 10, 10, 10, 10, 6, 0, 9, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 10, 9, 0, 9, 10, 10, 10, 9, 0, 0, 6, 12, 12, 1, 1, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 4, 8, 1, 10, 12, 10, 10, 1, 1, 9, 10, 10, 10, 10, 10, 6, 0, 9, 10, 10, 10, 6, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 9, 10, 10, 9, 0, 6, 10, 12, 10, 9, 0, 1, 1, 1, 1, 8, 4, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 4, 8, 1, 10, 10, 1, 4, 4, 1, 10, 10, 12, 10, 10, 6, 0, 9, 10, 10, 10, 6, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 10, 10, 9, 6, 10, 10, 10, 9, 1, 4, 4, 1, 8, 4, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 4, 8, 1, 12, 1, 4, 4, 1, 10, 10, 10, 10, 10, 6, 9, 10, 10, 10, 10, 6, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 6, 10, 10, 10, 9, 6, 10, 12, 12, 1, 4, 4, 4, 1, 4, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 4, 7, 1, 1, 8, 4, 8, 1, 12, 12, 10, 10, 6, 9, 10, 10, 10, 10, 6, 0, 9, 9, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 9, 9, 6, 10, 10, 10, 10, 6, 12, 12, 12, 1, 4, 4, 1, 8, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 4, 1, 1, 8, 8, 8, 1, 12, 12, 12, 1, 1, 9, 10, 12, 10, 10, 6, 9, 10, 10, 9, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 9, 10, 10, 9, 10, 12, 10, 1, 7, 12, 12, 1, 4, 4, 4, 1, 4, 4, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 7, 1, 8, 8, 8, 1, 12, 12, 1, 4, 4, 1, 10, 10, 10, 10, 9, 10, 10, 10, 6, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 9, 10, 10, 9, 10, 10, 1, 4, 4, 7, 12, 1, 4, 4, 8, 1, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 4, 8, 1, 8, 8, 1, 12, 12, 1, 4, 4, 1, 12, 10, 10, 9, 10, 10, 10, 10, 6, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 9, 10, 10, 12, 10, 6, 10, 1, 4, 4, 7, 1, 7, 8, 4, 1, 8, 4, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 8, 1, 8, 8, 8, 1, 14, 1, 4, 8, 6, 12, 12, 10, 9, 10, 10, 10, 10, 6, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 9, 10, 10, 10, 10, 6, 1, 4, 4, 4, 7, 1, 8, 8, 8, 1, 8, 4, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 4, 1, 8, 8, 8, 6, 1, 8, 8, 8, 6, 12, 12, 10, 9, 10, 12, 10, 6, 9, 9, 9, 0, 0 },
    { 0, 0, 0, 0, 6, 10, 12, 10, 10, 9, 1, 4, 4, 4, 7, 1, 8, 8, 8, 1, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 1, 8, 8, 8, 6, 1, 8, 8, 8, 6, 14, 12, 9, 12, 10, 10, 10, 6, 10, 10, 10, 9, 0 },
    { 0, 0, 0, 0, 6, 10, 10, 10, 10, 12, 1, 8, 4, 4, 8, 1, 8, 8, 8, 1, 4, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 1, 8, 8, 8, 1, 8, 8, 8, 8, 6, 14, 12, 12, 12, 12, 10, 9, 10, 10, 10, 10, 6, 0 },
    { 0, 9, 9, 9, 6, 10, 10, 10, 12, 12, 6, 8, 8, 4, 8, 1, 8, 8, 8, 7, 4, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 8, 8, 8, 8, 1, 8, 8, 8, 6, 14, 1, 1, 12, 12, 12, 10, 6, 10, 10, 10, 10, 6, 0 },
    { 9, 10, 10, 10, 9, 10, 10, 10, 12, 12, 6, 8, 8, 4, 8, 1, 8, 8, 8, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 8, 8, 1, 8, 8, 8, 8, 6, 1, 4, 4, 1, 12, 12, 9, 10, 10, 10, 10, 9, 0, 0 },
    { 9, 10, 10, 10, 9, 10, 10, 10, 12, 12, 12, 1, 8, 8, 8, 7, 8, 8, 8, 4, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 8, 8, 1, 8, 8, 8, 6, 1, 8, 4, 4, 1, 12, 9, 10, 10, 10, 10, 10, 6, 6, 0 },
    { 9, 10, 10, 10, 10, 9, 10, 10, 1, 1, 12, 1, 8, 8, 8, 8, 1, 8, 8, 4, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 4, 1, 8, 8, 8, 8, 6, 1, 4, 4, 8, 1, 12, 12, 10, 12, 10, 10, 6, 10, 10, 6 },
    { 6, 10, 10, 10, 10, 9, 10, 1, 4, 4, 1, 6, 8, 8, 8, 8, 1, 8, 8, 4, 4, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 4, 8, 8, 8, 8, 6, 1, 8, 4, 8, 1, 12, 12, 12, 10, 10, 10, 6, 10, 10, 10, 6 },
    { 6, 10, 10, 10, 10, 9, 10, 1, 4, 4, 1, 6, 8, 8, 8, 8, 1, 8, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 4, 4, 8, 8, 8, 6, 1, 8, 8, 8, 8, 1, 12, 12, 12, 10, 10, 9, 10, 10, 10, 10, 6 },
    { 6, 10, 10, 12, 10, 10, 9, 1, 4, 4, 8, 6, 1, 8, 8, 8, 7, 8, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 8, 8, 1, 1, 8, 8, 8, 8, 1, 12, 12, 12, 10, 9, 9, 10, 10, 10, 10, 6, 0 },
    { 0, 9, 10, 10, 10, 10, 9, 1, 4, 4, 4, 1, 6, 8, 8, 8, 7, 8, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 8, 1, 8, 8, 8, 8, 8, 8, 6, 14, 12, 12, 10, 10, 10, 10, 10, 10, 10, 6, 0 },
    { 0, 6, 10, 10, 10, 12, 10, 1, 8, 4, 4, 8, 6, 8, 8, 8, 8, 8, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 7, 8, 8, 8, 8, 8, 8, 8, 6, 14, 14, 12, 12, 12, 10, 12, 10, 10, 9, 6, 0, 0 },
    { 0, 0, 9, 10, 10, 10, 12, 12, 1, 4, 4, 8, 1, 1, 8, 8, 8, 8, 8, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 7, 8, 8, 8, 8, 8, 8, 6, 14, 1, 1, 14, 12, 12, 10, 10, 10, 6, 9, 9, 9, 0 },
    { 0, 0, 6, 10, 10, 10, 12, 12, 1, 8, 4, 8, 8, 1, 8, 8, 8, 8, 8, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 7, 8, 8, 8, 8, 8, 6, 14, 1, 4, 4, 1, 12, 10, 10, 9, 9, 9, 10, 10, 10, 9 },
    { 0, 9, 9, 6, 10, 10, 12, 12, 12, 1, 8, 4, 8, 8, 1, 8, 8, 8, 8, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 7, 8, 8, 8, 8, 6, 1, 1, 8, 4, 4, 1, 9, 9, 9, 10, 10, 10, 10, 10, 10, 9 },
    { 9, 10, 10, 9, 6, 10, 10, 12, 12, 6, 8, 8, 8, 8, 8, 8, 8, 8, 7, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 7, 8, 8, 1, 1, 1, 8, 8, 4, 4, 4, 1, 12, 10, 10, 10, 12, 10, 10, 10, 10, 9 },
    { 9, 10, 10, 10, 10, 9, 10, 12, 12, 12, 6, 8, 8, 8, 8, 8, 8, 8, 1, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 7, 8, 8, 8, 8, 8, 8, 4, 4, 8, 1, 12, 12, 12, 10, 10, 10, 10, 10, 10, 6, 0 },
    { 9, 10, 10, 12, 10, 10, 9, 9, 12, 1, 4, 6, 1, 8, 8, 8, 8, 8, 1, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 7, 8, 8, 8, 8, 8, 8, 8, 8, 6, 14, 12, 12, 12, 10, 10, 10, 6, 6, 6, 0, 0 },
    { 0, 6, 10, 10, 10, 12, 12, 12, 12, 1, 4, 4, 8, 6, 1, 8, 8, 8, 1, 8, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 8, 7, 8, 8, 8, 8, 8, 8, 8, 6, 14, 14, 12, 12, 10, 6, 6, 6, 9, 0, 0, 0, 0 },
    { 0, 0, 6, 9, 10, 10, 12, 12, 12, 1, 4, 4, 4, 8, 8, 8, 8, 8, 1, 8, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 7, 8, 8, 8, 8, 8, 8, 6, 6, 1, 1, 14, 12, 9, 9, 10, 10, 10, 10, 9, 9, 0, 0 },
    { 0, 0, 9, 6, 6, 9, 10, 12, 12, 12, 6, 4, 4, 4, 8, 8, 8, 8, 8, 7, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 4, 1, 8, 8, 8, 8, 6, 6, 1, 8, 4, 4, 1, 12, 12, 10, 10, 10, 10, 10, 10, 10, 9, 0 },
    { 0, 9, 10, 10, 10, 6, 6, 9, 12, 12, 12, 6, 6, 8, 8, 8, 8, 8, 8, 1, 8, 8, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 4, 8, 1, 8, 7, 1, 1, 8, 8, 8, 4, 4, 4, 1, 12, 12, 10, 10, 12, 10, 10, 10, 10, 6, 0 },
    { 0, 9, 10, 10, 12, 10, 10, 12, 12, 12, 12, 1, 1, 6, 1, 8, 8, 8, 8, 1, 8, 8, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 8, 1, 7, 8, 8, 8, 8, 8, 8, 4, 4, 4, 8, 1, 12, 12, 10, 10, 10, 10, 10, 9, 6, 0, 0 },
    { 0, 6, 10, 10, 10, 10, 12, 12, 12, 12, 1, 4, 4, 8, 8, 1, 7, 8, 8, 8, 1, 8, 7, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 8, 8, 1, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 1, 12, 12, 9, 9, 9, 6, 6, 6, 0, 0, 0, 0 },
    { 0, 0, 6, 9, 10, 10, 10, 12, 12, 2, 2, 6, 1, 1, 1, 8, 8, 8, 8, 8, 1, 8, 8, 7, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 1, 4, 8, 8, 1, 7, 8, 8, 8, 8, 8, 8, 8, 8, 6, 6, 12, 10, 10, 10, 10, 10, 10, 9, 9, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 6, 9, 10, 10, 2, 14, 14, 14, 6, 5, 5, 1, 8, 8, 8, 8, 8, 1, 8, 8, 7, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 1, 8, 8, 8, 8, 1, 7, 7, 8, 8, 8, 8, 8, 6, 6, 6, 14, 12, 12, 10, 10, 10, 12, 10, 10, 10, 10, 9, 0, 0, 0 },
    { 0, 0, 9, 9, 10, 10, 2, 6, 6, 6, 14, 14, 14, 6, 5, 5, 1, 7, 8, 8, 8, 8, 1, 8, 7, 7, 7, 6, 6, 0, 0, 0, 0, 1, 7, 7, 7, 1, 1, 0, 0, 0, 0, 0, 0, 0, 6, 1, 8, 8, 8, 8, 8, 1, 7, 7, 8, 8, 1, 1, 6, 6, 14, 14, 14, 12, 12, 10, 6, 10, 10, 10, 10, 10, 10, 10, 9, 0, 0, 0 },
    { 0, 0, 9, 10, 10, 2, 14, 14, 14, 14, 6, 5, 5, 6, 3, 3, 1, 8, 8, 8, 8, 8, 8, 1, 7, 7, 7, 7, 7, 6, 6, 1, 1, 4, 4, 4, 4, 8, 8, 1, 6, 0, 0, 6, 6, 1, 8, 8, 8, 8, 8, 1, 1, 7, 7, 7, 8, 8, 8, 8, 8, 8, 1, 1, 12, 12, 12, 10, 10, 6, 6, 10, 10, 10, 10, 10, 6, 0, 0, 0 },
    { 0, 0, 6, 10, 2, 14, 14, 14, 5, 5, 5, 6, 5, 6, 3, 3, 6, 8, 8, 8, 8, 8, 8, 7, 1, 7, 7, 7, 7, 7, 1, 4, 4, 4, 4, 4, 8, 8, 8, 8, 8, 6, 6, 7, 8, 8, 8, 8, 8, 6, 6, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 4, 4, 8, 6, 12, 10, 10, 10, 10, 10, 9, 6, 6, 6, 6, 0, 0, 0, 0 },
    { 0, 0, 0, 6, 2, 2, 2, 2, 5, 5, 5, 2, 5, 2, 3, 3, 6, 8, 1, 7, 8, 8, 7, 7, 7, 1, 1, 7, 1, 6, 4, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 6, 8, 8, 8, 8, 6, 6, 6, 7, 7, 7, 7, 7, 1, 1, 6, 6, 8, 8, 8, 8, 4, 4, 1, 10, 10, 10, 12, 10, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 2, 14, 14, 14, 5, 2, 6, 5, 5, 6, 5, 6, 3, 6, 1, 8, 8, 8, 7, 1, 1, 1, 7, 7, 7, 6, 9, 9, 9, 8, 8, 8, 8, 8, 8, 8, 8, 6, 8, 8, 8, 8, 6, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 1, 6, 6, 6, 6, 1, 9, 6, 10, 10, 10, 10, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 2, 14, 14, 5, 5, 5, 5, 3, 6, 5, 6, 5, 6, 3, 2, 8, 8, 8, 1, 1, 4, 4, 4, 1, 1, 6, 10, 10, 10, 9, 8, 8, 8, 8, 8, 8, 8, 8, 1, 8, 8, 8, 6, 7, 7, 7, 7, 7, 7, 7, 6, 7, 8, 8, 8, 8, 8, 8, 6, 14, 12, 12, 12, 10, 6, 6, 9, 10, 10, 10, 6, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 2, 14, 5, 5, 2, 6, 3, 5, 2, 5, 2, 5, 2, 3, 3, 6, 8, 1, 4, 4, 4, 8, 8, 8, 8, 7, 10, 10, 10, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 1, 7, 7, 7, 7, 7, 7, 7, 1, 6, 6, 8, 8, 8, 8, 4, 1, 12, 12, 12, 10, 10, 10, 9, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 2, 14, 5, 2, 3, 3, 6, 5, 5, 6, 5, 6, 3, 6, 3, 6, 1, 4, 4, 8, 8, 8, 8, 8, 8, 8, 9, 10, 10, 9, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 7, 1, 7, 7, 7, 8, 8, 1, 6, 6, 6, 6, 1, 12, 9, 10, 10, 10, 12, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 2, 14, 5, 2, 5, 3, 6, 14, 5, 2, 3, 2, 3, 2, 3, 3, 6, 3, 8, 1, 6, 6, 1, 8, 8, 8, 9, 10, 9, 8, 8, 8, 8, 8, 1, 7, 8, 8, 8, 8, 7, 7, 1, 7, 7, 7, 7, 6, 1, 8, 8, 8, 8, 8, 6, 14, 12, 12, 12, 10, 6, 10, 10, 10, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 2, 5, 5, 5, 5, 3, 2, 14, 5, 5, 6, 3, 6, 3, 6, 3, 3, 8, 8, 6, 6, 6, 6, 1, 8, 7, 9, 10, 9, 1, 6, 6, 6, 1, 7, 8, 8, 7, 8, 8, 7, 7, 6, 7, 7, 7, 7, 7, 1, 6, 6, 8, 8, 8, 6, 12, 9, 12, 12, 10, 10, 6, 9, 10, 10, 10, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 2, 5, 5, 3, 3, 2, 2, 5, 5, 2, 3, 2, 3, 3, 6, 8, 8, 8, 6, 6, 6, 6, 6, 8, 7, 9, 6, 6, 8, 8, 1, 7, 7, 8, 8, 8, 7, 8, 8, 7, 7, 7, 6, 7, 7, 7, 7, 7, 1, 14, 6, 6, 6, 12, 12, 6, 9, 10, 10, 12, 10, 6, 6, 6, 9, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 2, 2, 2, 2, 0, 2, 14, 5, 3, 6, 3, 2, 6, 3, 8, 8, 1, 6, 6, 6, 6, 6, 8, 7, 6, 8, 8, 8, 8, 1, 7, 7, 8, 8, 7, 8, 8, 8, 7, 7, 7, 7, 6, 1, 7, 7, 7, 1, 14, 12, 12, 12, 12, 10, 10, 6, 10, 10, 10, 10, 6, 14, 14, 14, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 5, 3, 6, 3, 3, 6, 8, 8, 6, 13, 14, 6, 6, 6, 7, 7, 6, 8, 8, 8, 8, 8, 1, 1, 7, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 6, 6, 1, 12, 12, 12, 9, 10, 10, 10, 10, 10, 6, 10, 10, 10, 9, 14, 14, 14, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 6, 6, 8, 8, 1, 11, 14, 14, 11, 6, 6, 7, 1, 6, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 7, 7, 7, 7, 7, 6, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 6, 6, 9, 5, 14, 14, 14, 5, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 5, 5, 5, 8, 8, 6, 14, 7, 14, 11, 6, 6, 7, 6, 4, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 4, 8, 7, 7, 7, 9, 10, 9, 10, 10, 10, 10, 9, 9, 10, 10, 10, 6, 5, 5, 14, 5, 14, 5, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 14, 5, 5, 8, 6, 8, 6, 8, 13, 6, 6, 7, 7, 6, 14, 14, 4, 4, 4, 8, 8, 8, 8, 8, 8, 8, 4, 4, 14, 14, 14, 14, 13, 13, 8, 6, 10, 10, 9, 10, 10, 10, 10, 6, 6, 6, 6, 3, 5, 5, 5, 14, 3, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 14, 14, 5, 5, 5, 6, 6, 8, 1, 6, 6, 6, 7, 6, 7, 14, 14, 14, 14, 4, 4, 8, 8, 8, 8, 8, 4, 14, 14, 14, 14, 14, 14, 14, 14, 13, 8, 6, 6, 6, 9, 10, 10, 10, 6, 3, 3, 3, 5, 5, 5, 5, 2, 2, 14, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 14, 5, 3, 2, 5, 3, 3, 6, 6, 6, 6, 7, 7, 6, 7, 14, 14, 14, 14, 14, 14, 4, 8, 8, 8, 4, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 7, 7, 6, 2, 6, 6, 6, 3, 3, 3, 5, 5, 5, 2, 2, 14, 14, 14, 14, 6, 0, 2, 2, 2, 2, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 14, 14, 2, 5, 5, 3, 3, 3, 3, 2, 6, 7, 7, 6, 9, 6, 14, 14, 14, 14, 14, 14, 14, 4, 8, 4, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 6, 2, 2, 6, 2, 3, 3, 5, 5, 5, 2, 6, 5, 14, 5, 14, 14, 6, 2, 2, 14, 14, 14, 3, 2, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 14, 14, 5, 5, 3, 3, 6, 6, 6, 6, 1, 5, 2, 6, 6, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 4, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 6, 2, 6, 2, 3, 3, 3, 2, 6, 6, 5, 5, 5, 5, 6, 6, 2, 5, 14, 14, 14, 14, 14, 14, 2, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 14, 14, 5, 5, 3, 6, 6, 1, 7, 8, 8, 7, 5, 6, 0, 0, 0, 0, 11, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 6, 6, 2, 3, 3, 2, 6, 6, 5, 5, 5, 6, 6, 2, 3, 5, 5, 14, 5, 14, 14, 14, 14, 2, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 5, 14, 5, 5, 3, 6, 0, 1, 8, 8, 8, 7, 1, 3, 6, 0, 0, 0, 0, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 6, 2, 3, 6, 2, 3, 3, 3, 3, 6, 2, 5, 5, 5, 5, 5, 5, 5, 14, 14, 2, 2, 2, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 14, 5, 5, 3, 6, 0, 1, 8, 8, 7, 1, 6, 1, 3, 6, 0, 0, 0, 0, 0, 11, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 6, 6, 6, 3, 3, 3, 6, 6, 2, 3, 3, 3, 3, 5, 5, 5, 5, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 14, 5, 3, 6, 0, 0, 1, 8, 7, 6, 6, 6, 2, 3, 6, 0, 0, 0, 0, 0, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 11, 6, 3, 3, 3, 6, 6, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 5, 5, 3, 6, 0, 0, 1, 7, 1, 6, 6, 6, 2, 3, 6, 0, 0, 0, 0, 0, 0, 11, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 6, 6, 2, 2, 3, 3, 3, 3, 3, 6, 6, 6, 6, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 6, 5, 3, 6, 0, 0, 0, 1, 1, 0, 6, 6, 6, 3, 6, 0, 0, 0, 0, 0, 0, 0, 6, 11, 14, 14, 14, 14, 13, 13, 13, 13, 14, 14, 13, 11, 13, 14, 14, 14, 13, 13, 13, 11, 6, 3, 3, 6, 6, 6, 2, 2, 3, 3, 5, 5, 5, 5, 14, 5, 14, 14, 14, 2, 2, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 3, 6, 0, 0, 0, 0, 0, 0, 6, 6, 3, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 11, 13, 14, 13, 13, 13, 13, 13, 13, 13, 11, 14, 14, 14, 14, 13, 13, 13, 13, 11, 6, 6, 2, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5, 5, 14, 5, 14, 14, 14, 14, 2, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 0, 0, 0, 0, 0, 6, 6, 2, 3, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 13, 14, 14, 14, 11, 13, 13, 13, 13, 13, 13, 11, 14, 14, 14, 13, 6, 6, 11, 13, 13, 6, 3, 3, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5, 14, 5, 14, 14, 14, 14, 14, 2, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 3, 3, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 14, 14, 14, 14, 14, 11, 13, 13, 13, 13, 11, 14, 14, 14, 13, 6, 11, 14, 14, 11, 13, 6, 6, 6, 6, 2, 2, 3, 3, 3, 5, 5, 5, 5, 5, 5, 3, 3, 3, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 11, 6, 6, 0, 0, 0, 0, 0, 0, 11, 14, 14, 14, 14, 14, 14, 13, 11, 13, 13, 13, 11, 14, 14, 13, 6, 11, 11, 13, 14, 11, 13, 6, 3, 3, 3, 3, 3, 2, 6, 6, 6, 6, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 14, 13, 6, 6, 0, 0, 0, 0, 0, 11, 14, 14, 14, 14, 14, 13, 13, 11, 13, 13, 11, 6, 6, 6, 6, 6, 11, 6, 6, 14, 6, 6, 6, 2, 2, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5, 5, 5, 14, 5, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 14, 13, 13, 11, 6, 0, 0, 0, 0, 0, 11, 14, 14, 14, 14, 13, 13, 13, 13, 6, 11, 14, 14, 11, 11, 6, 6, 11, 6, 6, 6, 11, 14, 14, 6, 3, 6, 6, 6, 2, 3, 3, 5, 5, 5, 5, 5, 5, 14, 5, 14, 14, 14, 14, 5, 2, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 6, 6, 14, 6, 6, 11, 11, 6, 0, 0, 0, 0, 0, 11, 14, 6, 6, 13, 13, 13, 11, 6, 11, 14, 13, 6, 6, 6, 6, 6, 6, 6, 11, 11, 13, 14, 6, 3, 3, 3, 5, 5, 6, 6, 2, 2, 2, 3, 5, 14, 5, 14, 14, 14, 14, 14, 2, 2, 2, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 14, 13, 11, 6, 11, 11, 6, 11, 6, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 0, 0, 11, 14, 6, 6, 3, 3, 6, 6, 6, 11, 6, 6, 6, 14, 6, 6, 2, 5, 5, 5, 5, 14, 5, 14, 14, 2, 2, 2, 2, 5, 14, 14, 14, 14, 14, 5, 2, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 14, 13, 11, 11, 11, 11, 11, 11, 11, 6, 6, 0, 0, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 11, 6, 5, 2, 3, 3, 6, 6, 6, 6, 6, 6, 3, 6, 6, 3, 6, 6, 2, 2, 5, 5, 14, 14, 14, 2, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 14, 6, 6, 6, 11, 11, 6, 6, 11, 11, 6, 6, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 2, 14, 5, 2, 5, 3, 2, 6, 6, 6, 6, 3, 2, 3, 5, 5, 5, 2, 3, 3, 3, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 11, 13, 11, 6, 0, 0, 6, 11, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 2, 14, 5, 2, 14, 5, 3, 6, 6, 11, 6, 3, 3, 5, 2, 3, 14, 5, 14, 2, 5, 5, 5, 5, 5, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 14, 13, 6, 0, 0, 0, 0, 6, 11, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 5, 14, 2, 6, 13, 11, 6, 2, 5, 5, 14, 2, 5, 14, 14, 2, 5, 5, 5, 14, 5, 14, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 14, 6, 0, 0, 0, 0, 0, 11, 14, 13, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 14, 2, 0, 11, 14, 13, 6, 2, 14, 14, 14, 2, 2, 14, 14, 2, 2, 2, 14, 5, 14, 14, 14, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 6, 0, 0, 0, 0, 11, 14, 13, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 11, 14, 6, 0, 0, 2, 14, 14, 2, 0, 2, 2, 0, 0, 0, 2, 2, 5, 14, 14, 14, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};