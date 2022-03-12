// カラーパレット
const int colorPaletteLen = 16;
const int colorsLen = 4;
const PROGMEM uint8_t colorPalette[colorPaletteLen][colorsLen] = {
    {0, 0, 0, 0},
    {1, 131, 0, 49},
    {2, 16, 16, 16},
    {3, 57, 41, 139},
    {4, 222, 41, 189},
    {5, 189, 49, 106},
    {6, 222, 65, 65},
    {7, 16, 65, 82},
    {8, 106, 74, 189},
    {9, 255, 82, 238},
    {10, 255, 115, 131},
    {11, 32, 115, 139},
    {12, 148, 148, 238},
    {13, 82, 172, 205},
    {14, 131, 222, 238},
    {15, 255, 255, 255},
};
// キャラクタ画像
const int xLen = 80;
const int yLen = 80;
const PROGMEM uint8_t imageFormedInColorPalette[yLen][xLen] = {
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 6, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 9, 9, 9, 10, 10, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 6, 10, 9, 9, 10, 10, 10, 10, 6, 6, 0, 0, 0, 0, 0, 0, 0, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 6, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 6, 6, 6, 6, 1, 0, 2, 1, 6, 6, 1, 6, 6, 6, 10, 10, 10, 10, 9, 9, 9, 5, 5, 1, 1, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 5, 5, 5, 1, 1, 1, 5, 5, 10, 9, 4, 6, 6, 6, 1, 2, 6, 1, 9, 2, 6, 1, 4, 2, 1, 2, 6, 6, 6, 1, 1, 1, 5, 10, 10, 10, 10, 9, 9, 9, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 5, 5, 10, 9, 9, 9, 10, 10, 10, 5, 6, 6, 1, 2, 1, 4, 4, 4, 4, 5, 5, 5, 5, 4, 4, 4, 1, 2, 6, 6, 6, 6, 4, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 6, 1, 9, 1, 4, 2, 5, 1, 1, 2, 1, 5, 4, 1, 4, 2, 6, 6, 6, 6, 4, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 10, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 6, 1, 9, 9, 1, 9, 2, 2, 2, 9, 2, 2, 2, 4, 4, 2, 6, 6, 6, 6, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 1, 6, 6, 10, 9, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 10, 6, 6, 6, 6, 4, 9, 5, 9, 9, 1, 9, 4, 4, 1, 5, 4, 4, 1, 2, 2, 1, 1, 1, 1, 6, 6, 6, 10, 10, 10, 10, 10, 10, 10, 6, 4, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 1, 6, 10, 9, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 6, 6, 6, 1, 1, 1, 4, 4, 9, 4, 5, 4, 4, 4, 4, 4, 4, 1, 1, 6, 6, 6, 6, 6, 6, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 6, 4, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 1, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 1, 1, 6, 10, 10, 10, 10, 10, 10, 6, 6, 6, 6, 6, 6, 6, 2, 6, 6, 6, 6, 10, 10, 10, 10, 9, 9, 9, 9, 9, 10, 10, 10, 10, 6, 1, 1, 6, 6, 6, 6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 2, 6, 1, 10, 10, 10, 10, 10, 10, 10, 6, 1, 1, 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 6, 6, 1, 2, 2, 1, 6, 6, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 1, 6, 6, 6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 2, 6, 1, 6, 10, 10, 10, 6, 1, 2, 2, 1, 10, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 9, 10, 10, 6, 2, 2, 1, 1, 2, 2, 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 9, 10, 1, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 6, 6, 6, 6, 1, 0, 0, 0, 1, 9, 9, 9, 10, 10, 10, 10, 10, 9, 9, 9, 9, 9, 10, 6, 2, 1, 1, 1, 1, 1, 1, 2, 1, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 9, 9, 9, 4, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 6, 6, 6, 1, 0, 0, 0, 1, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 3, 3, 3, 6, 2, 1, 1, 1, 2, 1, 2, 1, 2, 0, 0, 2, 6, 10, 10, 10, 9, 9, 10, 10, 10, 10, 10, 10, 9, 4, 4, 4, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 6, 1, 0, 0, 0, 1, 10, 10, 10, 10, 9, 9, 10, 10, 3, 2, 2, 2, 8, 12, 12, 2, 2, 2, 2, 2, 1, 2, 1, 2, 2, 0, 0, 0, 1, 6, 10, 10, 9, 9, 9, 9, 10, 10, 10, 6, 6, 6, 6, 6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 6, 6, 10, 9, 9, 9, 9, 10, 3, 12, 12, 8, 2, 12, 12, 12, 2, 12, 12, 8, 2, 2, 2, 1, 1, 2, 0, 0, 0, 0, 1, 6, 6, 10, 9, 9, 9, 10, 6, 6, 6, 6, 1, 6, 6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 2, 2, 0, 0, 0, 0, 0, 1, 6, 6, 6, 4, 4, 9, 9, 10, 2, 12, 12, 12, 3, 12, 12, 12, 3, 12, 12, 12, 2, 12, 12, 2, 1, 2, 0, 0, 0, 0, 0, 1, 6, 6, 6, 6, 6, 1, 6, 6, 6, 6, 6, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 3, 3, 2, 2, 12, 12, 2, 0, 2, 2, 0, 1, 6, 6, 6, 6, 6, 6, 6, 2, 2, 3, 12, 12, 12, 12, 12, 12, 3, 12, 12, 2, 8, 12, 12, 12, 2, 2, 2, 0, 0, 0, 0, 1, 6, 6, 6, 6, 6, 1, 6, 6, 6, 6, 6, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 3, 8, 12, 2, 12, 12, 12, 2, 12, 12, 2, 1, 6, 6, 6, 1, 6, 6, 6, 2, 12, 2, 12, 12, 12, 8, 12, 8, 12, 12, 3, 12, 12, 12, 12, 2, 12, 8, 3, 0, 0, 0, 0, 2, 6, 6, 6, 6, 6, 6, 1, 6, 6, 6, 6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 3, 3, 3, 3, 12, 12, 3, 12, 12, 12, 2, 12, 8, 8, 2, 2, 6, 1, 6, 6, 6, 6, 2, 12, 12, 3, 12, 8, 8, 8, 8, 8, 3, 12, 12, 12, 3, 3, 12, 12, 12, 2, 0, 0, 0, 0, 0, 1, 6, 6, 6, 6, 6, 1, 6, 6, 6, 6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 8, 12, 12, 3, 12, 12, 3, 8, 12, 12, 3, 12, 8, 8, 2, 3, 2, 1, 6, 6, 6, 6, 2, 12, 8, 8, 3, 8, 8, 3, 8, 8, 8, 8, 8, 3, 8, 8, 12, 12, 8, 2, 2, 0, 0, 0, 0, 1, 6, 6, 6, 6, 6, 2, 6, 6, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 8, 12, 12, 12, 8, 12, 12, 3, 12, 12, 3, 12, 8, 3, 2, 3, 3, 2, 6, 6, 6, 6, 3, 2, 8, 8, 8, 8, 8, 3, 8, 3, 8, 8, 8, 8, 8, 8, 12, 2, 3, 8, 8, 2, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 8, 12, 12, 12, 12, 8, 8, 8, 8, 8, 8, 8, 3, 3, 3, 3, 3, 2, 2, 6, 6, 2, 2, 2, 3, 3, 8, 8, 8, 3, 8, 3, 8, 8, 8, 3, 3, 3, 8, 8, 8, 8, 8, 2, 0, 0, 2, 2, 2, 2, 8, 8, 8, 2, 2, 2, 2, 2, 0, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 3, 3, 8, 12, 3, 12, 12, 8, 8, 8, 8, 3, 3, 2, 3, 3, 3, 2, 3, 2, 6, 2, 3, 8, 8, 8, 8, 8, 8, 3, 12, 3, 3, 8, 8, 8, 8, 8, 8, 8, 8, 8, 2, 2, 2, 2, 8, 8, 8, 8, 8, 8, 8, 2, 8, 8, 8, 8, 2, 2, 8, 8, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 8, 12, 12, 8, 8, 3, 3, 12, 12, 8, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 8, 8, 8, 8, 8, 8, 8, 2, 12, 3, 8, 8, 8, 8, 8, 8, 3, 2, 2, 3, 2, 3, 3, 8, 8, 8, 8, 3, 3, 3, 3, 8, 8, 8, 2, 8, 8, 8, 8, 2, 0, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 8, 8, 3, 3, 8, 8, 3, 2, 12, 8, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 2, 2, 2, 2, 3, 3, 8, 8, 3, 2, 8, 3, 8, 8, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 8, 2, 2, 8, 8, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 8, 8, 8, 8, 3, 3, 3, 2, 8, 8, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 2, 8, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 8, 8, 8, 8, 8, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 3, 8, 3, 3, 2, 3, 3, 3, 2, 2, 8, 8, 3, 3, 3, 7, 7, 2, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 8, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 14, 14, 14, 11, 11, 2, 2, 2, 3, 8, 8, 8, 3, 3, 3, 3, 3, 3, 8, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 3, 3, 2, 3, 3, 3, 3, 3, 3, 2, 2, 3, 3, 2, 14, 14, 14, 2, 2, 2, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3, 3, 2, 2, 2, 13, 14, 14, 14, 14, 14, 1, 1, 11, 2, 3, 3, 3, 2, 2, 3, 3, 8, 8, 3, 3, 3, 2, 8, 8, 8, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 2, 3, 3, 3, 2, 3, 3, 3, 11, 8, 8, 2, 6, 13, 14, 14, 14, 14, 2, 2, 14, 14, 14, 13, 13, 13, 11, 11, 11, 11, 11, 11, 2, 2, 11, 11, 11, 13, 14, 14, 14, 1, 1, 6, 6, 11, 2, 3, 3, 3, 3, 3, 3, 3, 2, 3, 8, 3, 3, 8, 8, 8, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 2, 3, 3, 2, 3, 3, 3, 11, 2, 6, 11, 14, 14, 14, 11, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 11, 11, 11, 13, 13, 13, 13, 13, 1, 1, 1, 6, 10, 11, 2, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 2, 2, 2, 3, 3, 2, 3, 2, 7, 6, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 1, 1, 1, 6, 10, 11, 2, 3, 2, 3, 3, 3, 3, 2, 3, 3, 3, 2, 3, 3, 3, 8, 8, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 3, 2, 3, 3, 11, 7, 13, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 14, 14, 13, 13, 7, 11, 11, 1, 1, 10, 11, 2, 2, 3, 2, 3, 3, 3, 2, 2, 3, 3, 3, 2, 3, 3, 2, 3, 3, 2, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 3, 3, 2, 7, 7, 14, 14, 11, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 14, 14, 14, 14, 13, 11, 7, 11, 11, 11, 1, 11, 7, 7, 2, 2, 2, 2, 2, 0, 0, 2, 3, 3, 2, 3, 3, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 2, 2, 2, 11, 15, 11, 14, 13, 11, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 14, 14, 14, 11, 13, 14, 7, 13, 11, 11, 11, 11, 7, 7, 11, 2, 2, 0, 0, 0, 0, 0, 2, 2, 0, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 11, 11, 11, 11, 11, 7, 15, 15, 11, 13, 11, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 14, 13, 11, 15, 15, 15, 11, 13, 13, 11, 11, 11, 11, 2, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 11, 11, 11, 11, 11, 11, 11, 2, 15, 10, 6, 13, 11, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 7, 6, 10, 15, 15, 15, 11, 13, 13, 13, 11, 11, 11, 11, 7, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 11, 11, 11, 11, 11, 11, 11, 11, 7, 15, 6, 15, 7, 13, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 1, 15, 1, 15, 15, 11, 13, 13, 13, 13, 11, 11, 11, 11, 2, 11, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 11, 11, 11, 11, 11, 11, 11, 11, 7, 13, 11, 15, 1, 6, 13, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 7, 7, 11, 11, 13, 13, 13, 13, 13, 13, 11, 11, 11, 11, 7, 11, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 11, 11, 11, 11, 11, 11, 11, 11, 7, 13, 14, 11, 11, 13, 14, 7, 14, 14, 13, 13, 11, 7, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 11, 11, 11, 2, 11, 11, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 13, 11, 11, 11, 11, 11, 11, 11, 11, 14, 13, 14, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 11, 11, 11, 11, 7, 11, 11, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 2, 13, 11, 11, 11, 11, 11, 11, 11, 7, 14, 14, 14, 14, 14, 11, 7, 7, 7, 13, 13, 13, 13, 11, 7, 7, 7, 7, 7, 7, 11, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 11, 11, 11, 11, 7, 11, 11, 11, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 13, 13, 11, 11, 11, 11, 11, 7, 11, 7, 14, 14, 11, 7, 7, 1, 1, 1, 1, 7, 7, 7, 7, 7, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 7, 7, 11, 13, 13, 13, 13, 13, 13, 13, 11, 11, 11, 11, 11, 7, 11, 11, 11, 11, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 13, 13, 13, 11, 11, 11, 11, 2, 11, 13, 11, 7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 7, 7, 11, 11, 11, 13, 11, 11, 11, 11, 11, 11, 11, 11, 7, 11, 11, 11, 11, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 11, 13, 13, 13, 13, 11, 11, 11, 11, 2, 11, 13, 13, 7, 15, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 14, 15, 7, 7, 7, 11, 11, 11, 11, 11, 11, 11, 11, 11, 7, 11, 11, 11, 11, 11, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 7, 13, 13, 13, 13, 13, 13, 11, 11, 11, 2, 13, 13, 7, 15, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 15, 2, 1, 1, 7, 7, 11, 11, 11, 11, 11, 11, 11, 7, 11, 11, 11, 11, 7, 11, 7, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 7, 11, 13, 11, 13, 13, 13, 13, 13, 7, 13, 13, 13, 13, 7, 7, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 1, 1, 6, 6, 6, 6, 1, 1, 1, 2, 1, 1, 1, 1, 1, 7, 7, 7, 11, 11, 11, 11, 7, 11, 11, 11, 11, 7, 7, 11, 11, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 7, 13, 11, 11, 13, 13, 13, 13, 7, 13, 13, 13, 13, 13, 13, 13, 7, 1, 1, 1, 1, 1, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 1, 1, 1, 1, 1, 1, 1, 7, 11, 7, 11, 11, 7, 11, 11, 11, 11, 11, 11, 11, 11, 13, 13, 11, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 13, 13, 13, 13, 13, 13, 7, 11, 13, 13, 13, 13, 13, 13, 13, 7, 1, 1, 1, 6, 6, 6, 6, 10, 10, 10, 10, 10, 6, 6, 10, 10, 10, 10, 10, 6, 6, 6, 6, 1, 1, 1, 1, 1, 11, 11, 11, 11, 11, 7, 11, 11, 11, 11, 11, 11, 11, 13, 13, 13, 13, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 11, 13, 13, 13, 13, 11, 13, 7, 13, 13, 13, 13, 13, 13, 13, 7, 1, 1, 1, 6, 6, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 6, 6, 1, 1, 1, 7, 11, 11, 11, 11, 7, 11, 11, 11, 11, 11, 13, 11, 13, 13, 13, 13, 13, 13, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 11, 13, 13, 13, 13, 11, 11, 14, 14, 14, 13, 13, 13, 13, 7, 1, 1, 1, 6, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 6, 6, 1, 1, 7, 11, 11, 11, 7, 11, 11, 11, 11, 11, 11, 13, 11, 13, 13, 13, 13, 13, 13, 13, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 11, 13, 11, 7, 14, 14, 14, 14, 14, 13, 13, 11, 13, 15, 1, 1, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 1, 6, 6, 1, 1, 7, 11, 11, 11, 2, 7, 11, 11, 11, 11, 11, 11, 11, 13, 13, 13, 13, 13, 13, 13, 11, 13, 2, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 11, 11, 15, 7, 14, 14, 14, 14, 14, 14, 13, 11, 13, 14, 1, 15, 1, 1, 6, 6, 6, 6, 10, 10, 10, 10, 10, 10, 10, 10, 10, 1, 15, 1, 15, 7, 1, 7, 7, 11, 11, 11, 2, 7, 11, 11, 11, 11, 11, 11, 11, 11, 13, 13, 13, 13, 13, 13, 13, 11, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 7, 2, 2, 2, 15, 15, 11, 14, 14, 13, 14, 14, 14, 13, 13, 11, 13, 7, 15, 15, 1, 1, 1, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 15, 15, 7, 14, 7, 7, 11, 11, 11, 11, 7, 7, 7, 11, 11, 11, 11, 11, 11, 7, 11, 13, 11, 13, 13, 13, 13, 13, 13, 13, 2, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 11, 13, 14, 11, 13, 14, 14, 14, 14, 13, 7, 11, 13, 11, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 11, 11, 7, 7, 11, 11, 11, 11, 7, 2, 7, 7, 11, 11, 2, 2, 11, 11, 11, 11, 11, 11, 13, 13, 13, 13, 13, 13, 13, 13, 13, 2, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 13, 14, 14, 14, 14, 14, 14, 14, 13, 13, 7, 11, 13, 13, 13, 13, 11, 1, 1, 1, 1, 1, 1, 1, 1, 1, 11, 11, 13, 11, 11, 11, 11, 11, 7, 2, 7, 7, 7, 7, 7, 2, 0, 0, 2, 2, 11, 11, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 2, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 7, 7, 11, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 11, 11, 11, 11, 11, 7, 2, 7, 7, 7, 7, 7, 2, 0, 0, 0, 0, 0, 0, 2, 11, 11, 13, 13, 13, 13, 13, 11, 13, 13, 13, 11, 2, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 13, 14, 14, 14, 14, 14, 14, 14, 13, 13, 13, 11, 7, 7, 7, 11, 13, 13, 13, 13, 13, 13, 13, 13, 11, 11, 11, 7, 2, 2, 2, 7, 7, 7, 7, 7, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 2, 11, 13, 13, 13, 13, 11, 15, 11, 13, 11, 14, 14, 7, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 13, 14, 14, 13, 14, 13, 14, 14, 13, 13, 13, 13, 11, 11, 7, 7, 7, 11, 7, 2, 2, 2, 2, 2, 2, 2, 7, 7, 7, 7, 7, 7, 7, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 11, 13, 13, 11, 15, 15, 11, 11, 14, 15, 15, 7, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 14, 14, 14, 11, 13, 14, 14, 13, 13, 13, 13, 11, 11, 7, 2, 2, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 14, 15, 2, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 13, 14, 14, 14, 14, 14, 14, 13, 13, 13, 13, 11, 11, 2, 0, 0, 2, 2, 2, 2, 7, 7, 7, 7, 7, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 13, 14, 14, 14, 14, 14, 13, 13, 13, 13, 11, 11, 7, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 13, 14, 14, 13, 13, 13, 13, 13, 13, 11, 11, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 13, 13, 13, 14, 13, 13, 13, 11, 11, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 13, 15, 11, 13, 11, 15, 7, 11, 11, 15, 7, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 15, 15, 7, 11, 14, 15, 11, 7, 7, 14, 15, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 15, 15, 11, 7, 7, 2, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 2, 2, 2, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
};
