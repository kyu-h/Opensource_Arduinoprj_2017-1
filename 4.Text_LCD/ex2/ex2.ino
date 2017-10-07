#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2); // 16칸 2줄 초기화
}

void loop(){
  lcd.print(“Cursor ON- Blink”); // 문자열 출력
  lcd.cursor(); // 커서보이기
  lcd.blink(); // 깜빡이기
  delay(2000); // 2s delay
  lcd.clear(); // LCD화면 지우기
  lcd.print(“Cursor OFF”); // 문자열 출력
  lcd.noBlink(); // 깜빡임 정지
  lcd.noCursor(); // 커서 지우기
  delay(1000); // 1s delay
  lcd.clear(); // LCD 화면 지우기
  lcd.print(“Count Up”); // 문자열 출력
  for (int k=0; k<=10; k++) {
  lcd.home(); // 0,0 으로 위치 이동
  lcd.print(“No : ”); // 문자열 출력
  lcd.print(k); // 0-10까지 숫자 출력
  delay(200); // 0.2s delay
}
  lcd.clear(); // LCD화면 지우기
  lcd.print(“Hello!”); // 문자열 출력
  for (int k=0; k<3; k++) {// LCD에 표시된 글자 1초간격 깜박임
  lcd.noDisplay(); 
  delay(1000);
  lcd.display();
  delay(1000);
}
  lcd.setCursor(6,0); // 커서 위치 6,0으로 이동
  lcd.print(“Hello!”); // 문자열 출력
  for(int k=0; k<3; k++){
  lcd.scrollDisplayRight(); //LCD에 표시된 글자를 3번 오른쪽으로 이동
  delay(500); //0.5s delay
}
  lcd.clear(); // LCD 화면 지우기
  lcd.setCursor(6,0); // 6,0 으로 이동 
  lcd.print(“Hello!”); // 문자열 출력
  for (int k=0; k<3; k++){
  lcd.scrollDisplayLeft(); // LCD 모듈에 표시된 글자를 3번 왼쪽으로 이동
  delay(500); // 0.5s delay
}
  lcd.clear(); // LCD화면 지우기
}
