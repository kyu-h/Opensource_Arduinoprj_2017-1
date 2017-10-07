int ECHO_pin = 7; // 변수 선언
int TRIG_pin = 8; // 변수 선언
int distance; // 변수 선언

void setup() {
  pinMode(ECHO_pin, INPUT); // 입력모드 선언
  pinMode(TRIG_pin, OUTPUT); // 출력모드 선언
}

void loop() {
  digitalWrite(TRIG_pin, LOW); // trig 핀을 2microseconds 동안 LOW
  delayMicroseconds(2);
  digitalWrite(TRIG_pin, HIGH); // trig 핀을 10microseconds 동안 HIGH
  delayMicroseconds(10);
  digitalWrite(TRIG_pin, LOW); // trig 핀 LOW
  distance = pulseIn(ECHO_pin, HIGH); // 펄스 지속시간 읽기
  int val1 = distance/58; // 펄스 시간을 거리로 계산
  int val2 = map(val1, 0, 200, 0, 255); // 측정 범위를 0~2m
  analogWrite(5, val2); // PWM 신호로 출력
  delay(100); // 0.1 delay
}
