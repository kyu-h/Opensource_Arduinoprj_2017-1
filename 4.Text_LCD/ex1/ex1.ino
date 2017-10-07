#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
lcd.begin(16, 2); // 16칸 2줄 LCD 초기화
lcd.print(“Hello, World!”); // 문자열 출력
}

void loop() {
}
