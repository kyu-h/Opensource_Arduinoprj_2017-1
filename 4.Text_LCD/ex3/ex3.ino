#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte mFace[8] = {B01110,B10001,B00000,B01010,B00000,B00100,B10001,B01110}; // 배열 선언

void setup() {
  lcd.createChar(0, mFace); // 0번 문자에 정의된 문자 지정
  lcd.begin(16, 2); // 16칸 2줄 LCD초기화
  lcd.write(byte(0)); 0번 문자 출력
}

void loop() {
}
