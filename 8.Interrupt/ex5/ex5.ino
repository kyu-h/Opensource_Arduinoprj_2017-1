#include <MsTimer2.h>

int interrupt = 2; //변수 선언
int piezo=5;
int LoopLED = 13;

volatile int state =LOW;

void toggle() {//toggle함수 호출 때 마다 state 값 반전 HIGH -> LOW, LOW -> HIGH
  state = !state;
  digitalWrite(interrupt, state);
  tone(piezo, 262, 1000); //toggle 함수 실행시 piezo에서 소리나게 하기 위함
}

void setup() {
  pinMode(piezo, OUTPUT);
  pinMode(interrupt, OUTPUT);
  pinMode(LoopLED, OUTPUT);

  attachInterrupt(0, toggle, CHANGE);
  
}

void loop() { //인터럽트와 상관 없이 실행되는 LED
    digitalWrite(LoopLED, HIGH);
    delay(1000);
    digitalWrite(LoopLED, LOW);
    delay(1000);    
}
