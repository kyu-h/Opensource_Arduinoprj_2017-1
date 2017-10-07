#include <Servo.h>

Servo myservo;  
int potpin = 5; // 변수 선언
int val=0;    // 변수 선언

void setup() {
  myservo.attach(9); // 9번 핀을 myservo에 지정
}

void loop() {
  val = analogRead(potpin); // 아날로그 핀으로 가변저항 값을 읽어 저장
  val = map(val, 0, 1023, 0, 180); // 0~1023 의 범위를 0~180의 범위로 변환하여 저장
  myservo.write(val); // 서브 모터 회전
  delay(15); // 0.015 delay
}
