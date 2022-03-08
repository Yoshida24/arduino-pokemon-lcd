//AE-ATM0310B3 with Arduino UNO R3
//2020/01/12

#import <Arduino.h>
#include "ATM0130.h"

ATM0130::ATM0130(uint8_t pin_dat_cmd, uint8_t pin_reset) {
  //for Arduino UNO
  dat_cmd = pin_dat_cmd;
  reset = pin_reset;
  pinMode(dat_cmd, OUTPUT);
  pinMode(reset, OUTPUT);

  pinMode(SS, OUTPUT);
  pinMode(SCK, OUTPUT);
  pinMode(MOSI, OUTPUT);

  spi_settings = SPISettings(8000000, MSBFIRST, SPI_MODE0);

  setFigColor(0x0000);
  setCharColor(0xFFFF);
  setCharColorBG(0x00);
}

void ATM0130::begin(void) {
  digitalWrite(SS, HIGH);
  resetLCD();
  SPI.beginTransaction(spi_settings);
  digitalWrite(SS, LOW);

  writeReg(0x11);
  delay(100);

  writeReg(0x36);  //MADCTL
  writeData(0x00);
  //MY=0
  //MX=0
  //MV=0
  //ML=0
  //RGB=0
  //MH=0
  writeReg(0x3A);
  writeData(0x55); //65K color , 16bit / pixel

  ////--------------------------------ST7789V Frame rate

  writeReg(0xb2);
  writeData(0x0c);
  writeData(0x0c);
  writeData(0x00);
  writeData(0x33);
  writeData(0x33);

  delay(2);

  writeReg(0xb7);
  writeData(0x75);

  delay(2);
  ////---------------------------------ST7789V Power
  writeReg(0xc2);
  writeData(0x01);

  delay(2);

  writeReg(0xc3);
  writeData(0x10);

  delay(2);

  writeReg(0xc4);
  writeData(0x20);

  delay(2);

  writeReg(0xc6);
  writeData(0x0f);

  writeReg(0xb0);
  writeData(0x00);
  writeData(0xf0); //RRRR RGGGG GGGB BBBB

  delay(2);

  writeReg(0xD0);
  writeData(0xA4);
  writeData(0xA1);
  delay(2);

  ////--------------------------------ST7789V gamma
  writeReg(0x21);

  delay(2);

  writeReg(0xbb);
  writeData(0x3b);

  delay(2);

  writeReg(0xE0);    //Set Gamma
  writeData(0xF0);
  writeData(0x0b);
  writeData(0x11);
  writeData(0x0e);
  writeData(0x0d);
  writeData(0x19);
  writeData(0x36);
  writeData(0x33);
  writeData(0x4b);
  writeData(0x07);
  writeData(0x14);
  writeData(0x14);
  writeData(0x2c);
  writeData(0x2e);

  delay(2);

  writeReg(0xE1);    //Set Gamma
  writeData(0xF0);
  writeData(0x0d);
  writeData(0x12);
  writeData(0x0b);
  writeData(0x09);
  writeData(0x03);
  writeData(0x32);
  writeData(0x44);
  writeData(0x48);
  writeData(0x39);
  writeData(0x16);
  writeData(0x16);
  writeData(0x2d);
  writeData(0x30);

  writeReg(0x2A);
  writeData(0x00);
  writeData(0x00);
  writeData(0x00);
  writeData(0xEF);

  writeReg(0x2B);
  writeData(0x00);
  writeData(0x00);
  writeData(0x00);
  writeData(0xEF);

  writeReg(0x29);    //Display on

  delay(2);
  writeReg(0x2c);
  digitalWrite(SS, HIGH);
  SPI.endTransaction();
}

void ATM0130::setFigColor(uint8_t r, uint8_t g, uint8_t b) {
  fig_color = convRGB(r, g, b);
}

void ATM0130::setFigColor(uint16_t c) {
  fig_color = c;
}

void ATM0130::drawRectangle(uint8_t x, uint8_t y, uint8_t width, uint8_t height) {
  uint16_t loop = width * height;
  uint8_t colorH = fig_color >> 8;
  uint8_t colorL = fig_color & 0x00FF;

  SPI.beginTransaction(spi_settings);
  digitalWrite(SS, LOW);
  setWindow(x, y, width, height);

  digitalWrite(dat_cmd, HIGH);
  for (uint16_t i = 0; i < loop; i++) {
    SPI.transfer(colorH);
    SPI.transfer(colorL);
  }
  digitalWrite(SS, HIGH);
  SPI.endTransaction();
}

void ATM0130::setCharPlace(uint8_t x, uint8_t y) {
  char_x = x;
  char_y = y;
}

void ATM0130::setCharColor(uint8_t r, uint8_t g, uint8_t b) {
  char_color = convRGB(r, g, b);
}

void ATM0130::setCharColor(uint16_t c) {
  char_color = c;
}

void ATM0130::setCharColorBG(uint8_t r, uint8_t g, uint8_t b) {
  char_color_bg = convRGB(r, g, b);
}

void ATM0130::setCharColorBG(uint16_t c) {
  char_color_bg = c;
}

void ATM0130::print(char ch) {
  if (char_x > 235) {
    char_x = 0;
    char_y += 8;
  }
  if (char_y > 232) {
    char_x = 0;
    char_y = 0;
  }

  if (ch == '\n') {
    char_x = 0;
    char_y += 8;
  }
  else {
    setCharQueue(ch);
    SPI.beginTransaction(spi_settings);
    digitalWrite(SS, LOW);
    writeCharQueue();
    char_x += 6;
    digitalWrite(SS, HIGH);
    SPI.endTransaction();
  }
}

void ATM0130::writeReg(uint8_t data) {
  digitalWrite(dat_cmd, LOW);
  SPI.transfer(data);
}
void ATM0130::writeData(uint8_t data) {
  digitalWrite(dat_cmd, HIGH);
  SPI.transfer(data);
}
void ATM0130::resetLCD(void) {
  digitalWrite(reset, HIGH);
  delay(20);
  digitalWrite(reset, LOW);
  delay(20);
  digitalWrite(reset, HIGH);
  delay(20);
}

void ATM0130::setWindow(uint8_t x, uint8_t y, uint8_t width, uint8_t height) {
  writeReg(0x2A);
  writeData(0x00);
  writeData(x);
  writeData(0x00);
  writeData(x + width - 1);

  writeReg(0x2B);
  writeData(0x00);
  writeData(y);
  writeData(0x00);
  writeData(y + height - 1);

  writeReg(0x2c);
}

void ATM0130::putPixel(uint16_t color) {
  digitalWrite(dat_cmd, HIGH);
  SPI.transfer(color >> 8);
  SPI.transfer(color & 0xFF);
}

void ATM0130::setCharQueue(uint8_t c) {
  if ((c >= 0x20) && (c <= 0x7E)) {
    c -= 0x20;
    for (uint8_t i = 0; i < 5; i++) {
      char_queue[i] = chars[5 * c + i];
    }
  }
  else {
    for (uint8_t i = 0; i < 5; i++) {
      char_queue [i] = 0xFF;
    }
  }
}

void ATM0130::writeCharQueue() {
  setWindow(char_x, char_y, 5, 8);
  for (uint8_t i = 0; i < 5; i++) {
    for (uint8_t j = 0; j < 8; j++) {
      if ((char_queue[i] & (0x80 >> j)) > 0) {
        putPixel(char_color);
      }
      else {
        putPixel(char_color_bg);
      }
    }
  }
  setWindow(char_x + 5, char_y, 1, 8);
  for (uint8_t i = 0; i < 8; i++) {
    putPixel(char_color_bg);
  }
}

uint16_t ATM0130::convRGB(uint8_t red, uint8_t green, uint8_t blue) {
  uint16_t color = 0;
  color = blue >> 3;
  color |= ((green & 0xFC) << 3);
  color |= ((red & 0xF8) << 8);
  return color;
}
