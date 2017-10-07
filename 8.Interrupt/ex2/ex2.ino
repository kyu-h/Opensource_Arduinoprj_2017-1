#include <MsTimer2.h>

void flash() {
  static boolean output = HIGH;
  digitalWrite(13, output);
  output = !output; //flash 함수가 호출 될 때 마다 output상태 반전, HIGH->LOW LOW->HIGH
}

void setup() {
  pinMode(13, OUTPUT);

  MsTimer2::set(500, flash); //0.5s 간격으로 flash함수 호출
  MsTimer2::start();
}

void loop() {
}
