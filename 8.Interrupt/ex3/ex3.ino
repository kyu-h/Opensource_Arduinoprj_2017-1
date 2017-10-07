#include <MsTimer2.h>
int TimerLED = 13; //변수 선언
int InterruptLED = 8; //변수 선언
int LoopLED = 4; //변수 선언

volatile int state =LOW; //변수 선언

void flash() {
  static boolean output = HIGH;  
  digitalWrite(TimerLED, output);
  output = !output; //flash 함수가 호출 될 때 마다 output상태 반전, HIGH->LOW LOW->HIGH
}

void toggle() {
  state = !state; //toggle함수 호출 때 마다 state 값 반전 HIGH -> LOW, LOW -> HIGH
  digitalWrite(InterruptLED, state);
}

void setup() {
  pinMode(TimerLED, OUTPUT);
  pinMode(InterruptLED, OUTPUT);
  pinMode(LoopLED, OUTPUT);

  attachInterrupt(0, toggle, CHANGE);
  MsTimer2::set(500, flash); //0.5s 간격으로 flash함수 호출
  MsTimer2::start();
}

void loop() { //기본 루프에서 LED 제어
    digitalWrite(LoopLED, HIGH); 
    delay(4000);
    digitalWrite(LoopLED, LOW);
    delay(4000);    
}
