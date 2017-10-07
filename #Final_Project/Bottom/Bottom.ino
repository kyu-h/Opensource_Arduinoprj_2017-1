#include <Servo.h>
#include <MsTimer2.h>
 
#define RED 9
#define GREEN 10
#define BLUE 11
 
int ECHO_pin = 7; // 초음파 센서 변수 선언
int TRIG_pin = 8; // 초음파 센서 변수 선언
int distance; // 초음파 센서 변수 선언
int count = 0; // app inventor로 보낼 변수 선언
int led = 12; // 변수 선언
 
int i; //servo motor 값 조절하기 위한 변수 선언
 
Servo myservo;
 
void flash() { //인터럽트 함수 선언, 평상시에도 직류모터가 돌아가게 하기 위해
  static boolean output = LOW;
  static boolean outputt = HIGH;
 
  digitalWrite(4, output); //직류모터 회전
  digitalWrite(13, outputt); //직류모터 회전
  analogWrite(5, 255); //직류모터 최대 값 출력
  delay(3000);
 
  output = !output;
  outputt = !outputt; // output, outputt을 LOW에서 HIGH, HIGH에서 LOW로 바꿔주면서 프로펠러 회전 
}
 
void goingin() { //기부 했을 경우
  for (i = 90; i >= 0; i--) { //90 -> 0으로 만들면서 뚜껑 닫기
    myservo.write(i);
  }
 
  digitalWrite(4, HIGH); //시계방향으로 직류모터 회전
  digitalWrite(13, LOW); //시계방향으로 직류모터 회전
  analogWrite(5, 255); //직류모터 최대 값 출력
  
  analogWrite(RED, 255); //코에 위치한 3색 led red off
 
  for (i = 0; i < 255; i++) { //코에 위치한 3색 led green on
    analogWrite(GREEN, i);
  }
  count = count + 100; //얼마 기부 됐는지 보여줌
  Serial.print(count); //앱으로 count 값 전송
 
  delay(2500);
 
}
 
void goingout() { //평상시
  digitalWrite(4, LOW); //반시계방향으로 직류모터 회전
  digitalWrite(13, HIGH); //반시계방향으로 직류모터 회전
  analogWrite(5, 0); //직류모터 off
 
  for (i = 0; i < 90; i++) { //0 -> 90으로 만들면서 뚜껑 닫기
    myservo.write(i);
  }
  
  analogWrite(GREEN, 255); //코에 위치한 3색 led green off
  for (int i = 0; i < 255; i++) { //코에 위치한 3색 led red on
    analogWrite(RED, i);
  }
}
 
void setup() {
  pinMode(ECHO_pin, INPUT); // echo pin input
  pinMode(TRIG_pin, OUTPUT); // trig pin output
  myservo.attach(6);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(13, OUTPUT);
 
 
  MsTimer2::set(2000, flash); //타이머 인터럽트 
  MsTimer2::start();
 
  Serial.begin(9600); 
}
void loop() {
  byte r_data;
 
  digitalWrite(TRIG_pin, LOW); // trig 핀을 2microseconds동안 LOW
  delayMicroseconds(2);
  digitalWrite(TRIG_pin, HIGH);// trig 핀을 10microseconds동안 HIGH
  delayMicroseconds(10);
  digitalWrite(TRIG_pin, LOW);// trig 핀 LOW
 
  distance = pulseIn(ECHO_pin, HIGH); //펄스 지속시간 읽기
  int val1 = distance / 58; //펄스 시간을 거리로 계산
  int val2 = map(val1, 0, 100, 0, 255); //측정 범위를 0~200으로 선언
 
  if (val2 > 0) {
    if (val2 < 25) {
      goingin();
    } else {
      goingout();
    }
    delay(500); // 0.5 delay
  }
}
