#include <Servo.h>

Servo myservo;  // 변수 선언
int pos = 0;  // 변수 선언

void setup() {
  myservo.attach(9); // 9번 핀을 myservo에 지정
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // 0~180도 까지 1도씩 증가
    myservo.write(pos); // 서보모터 이동 각도 출력
    delay(15); // 0.015 delay
  }
  for (pos = 180; pos >= 0; pos -= 1) { // 0~180도 ᄁᆞ지 1도씩 감소
    myservo.write(pos); // 서브모터 이동 각도 출력
    delay(15); // 0.015 delay
  }
}
