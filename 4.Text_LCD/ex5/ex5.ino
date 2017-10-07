#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte xFace[8] = {B00000,B00000,B11000,B00100,B10010,B01001,B00101,B11111};
byte cFace[8] = {B00000,B00000,B00000,B00000,B00000,B00000,B11111,B11111};
byte fFace[8] = {B00000,B00000,B00000,B10000,B11000,B11100,B11110,B11111};
// 배열 선언
byte gFace[8] = {B11111,B00101,B01001,B10010,B00100,B11000,B00000,B00000};
byte iFace[8] = {B11111,B11111,B00000,B00000,B00000,B00000,B00000,B00000};
byte lFace[8] = {B11111,B11110,B11100,B11000,B10000,B00000,B00000,B00000};
// 배열 선언


void setup() {
  
  lcd.createChar(2, cFace);// 2번 문자에 정의된 문자 지정
  lcd.createChar(5, fFace);// 5번 문자에 정의된 문자 지정

  lcd.createChar(6, gFace);// 6번 문자에 정의된 문자 지정
  lcd.createChar(8, iFace);// 8번 문자에 정의된 문자 지정
  lcd.createChar(11, lFace);// 11번 문자에 정의된 문자 지정
  lcd.createChar(1, xFace);// 11번 문자에 정의된 문자 지정
  
  lcd.begin(16, 2); // 16칸 2줄 LCD 초기화

  lcd.write(byte(1)); // 0번 문자 출력
  lcd.setCursor(1,0); // (1,0) 으로 커서 이동
  lcd.write(byte(1)); // 0번 문자 출력
  
  lcd.setCursor(2,0); // (2,0) 으로 커서 이동
  lcd.write(byte(2)); // 2번 문자 출력
  lcd.setCursor(3,0); // (3,0) 으로 커서 이동
  lcd.write(byte(2));// 2번 문자 출력
  lcd.setCursor(4,0); // (4,0) 으로 커서 이동
  lcd.write(byte(2));// 2번 문자 출력
  lcd.setCursor(5,0); // (5,0) 으로 커서 이동
  lcd.write(byte(5));// 5번 문자 출력

  lcd.setCursor(0,1); // (0,1) 으로 커서 이동
  lcd.write(byte(6));// 6번 문자 출력
  lcd.setCursor(1,1); // (1,1) 으로 커서 이동
  lcd.write(byte(6));// 6번 문자 출력
  lcd.setCursor(2,1); // (2,1) 으로 커서 이동
  lcd.write(byte(8));// 8번 문자 출력
  lcd.setCursor(3,1); // (3,1) 으로 커서 이동
  lcd.write(byte(8));// 8번 문자 출력
  lcd.setCursor(4,1); // (4,1) 으로 커서 이동
  lcd.write(byte(8));// 8번 문자 출력
  lcd.setCursor(5,1); // (5,1) 으로 커서 이동
  lcd.write(byte(11));// 11번 문자 출력
}

void loop() {
  for(int k=0; k<16; k++){  // 1초마다 오른쪽으로 이동
  lcd.scrollDisplayRight();
  delay(1000);
}
  lcd.clear();  // LCD clear
}
