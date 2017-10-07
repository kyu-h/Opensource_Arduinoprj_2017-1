#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int pin_SW[4] = {7,8,9,10}; // 스위치 배열 선언
int k;

void setup(){
  lcd.begin(16, 2);
  for(k=0;k<3;k++){
    pinMode(pin_SW[k],INPUT); // pin_SW[k] 입력모드로 선언
  }
}

void loop(){
  if(digitalRead(pin_SW[0]) ==1) //pin_SW[0]이 눌렸을 때
  {
  lcd.print("Cursor ON- Blink");
  lcd.cursor();
  lcd.blink();
  delay(2000);
  lcd.clear();
  }
  else if(digitalRead(pin_SW[1]) ==1)//pin_SW[1]이 눌렸을 때
  {
  lcd.print("Cursor OFF");
  lcd.noBlink();
  lcd.noCursor();
  delay(1000);
  lcd.clear();
  }
  else if(digitalRead(pin_SW[2]) ==1)//pin_SW[2]이 눌렸을 때
  {
    lcd.print("Count Up");
  for (int k=0; k<10; k++) {
  lcd.home();
  lcd.print("No : ");
  lcd.print(k);
  delay(200);
  }
  lcd.clear();
  }

  else if(digitalRead(pin_SW[3]) ==1)//pin_SW[2]이 눌렸을 때
  {
  lcd.print("Hello");
  for (int k=0; k<3; k++) {
  lcd.noDisplay();
  delay(1000);
  lcd.display();
  delay(1000);
  }
  }  
  else{ //아무것도 안 눌렸을 때
  lcd.clear();  
  }
}
