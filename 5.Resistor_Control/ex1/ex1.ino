int analogPin=2; // 변수 선언

void setup() {
  pinMode(10, OUTPUT); // 10번 핀 아웃풋 지정
}

void loop() {
  int val = analogRead(analogPin); // 0~1023 범위가 들어옴
  digitalWrite(10, HIGH); // 10번 핀 HIGH
  delay(val); // 0~1023 ms 범위 내에서 delay
  digitalWrite(10, LOW); // 10번 핀 LOW
  delay(val);// 0~1023 ms 범위 내에서 delay
}
