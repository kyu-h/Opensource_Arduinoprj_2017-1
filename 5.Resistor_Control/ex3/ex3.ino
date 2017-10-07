void setup() {
  pinMode(5, OUTPUT);// 5번 핀 output 지정
}

void loop() {
  int val1 = analogRead(2); // 아날로그 입력 2번을 통하여 입력된 전압값을 0~1023 범위의 값으로 읽어 val1에 저장
  int val2 = map(val1, 0, 1203, 0, 255); // 0~1023범위 의 val값을 0~255 범위로 변환

  analogWrite(5, val2); // PWM 신호로 출력
  delay(20);// 0.02 delay
}
