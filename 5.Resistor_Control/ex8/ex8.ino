#include "LiquidCrystal.h"

int ECHO_pin = 7; // 변수 선언
int TRIG_pin = 8; // 변수 선언
int distance; // 변수 선언


LiquidCrystal lcd(12,11,5,4,3,2); // lcd 모니터 쓰기 위한 선언

void setup(){
pinMode(ECHO_pin, INPUT); // echo pin input
pinMode(TRIG_pin, OUTPUT); // trig pin output

lcd.begin(16,2); // lcd 초기화
}
void loop(){
digitalWrite(TRIG_pin, LOW); // trig 핀을 2microseconds동안 LOW
delayMicroseconds(2);
digitalWrite(TRIG_pin, HIGH);// trig 핀을 10microseconds동안 HIGH
delayMicroseconds(10);
digitalWrite(TRIG_pin, LOW);// trig 핀 LOW

distance = pulseIn(ECHO_pin, HIGH); //펄스 지속시간 읽기
int val1 = distance/58;//펄스 시간을 거리로 계산

int val2 = map(val1, 0, 200, 0, 255); //측정 범위를 0~200으로 선언

lcd.print(val2); //LCD에 val2 출력
delay(500); // 0.5 delay
lcd.clear();//lcd clear
}
