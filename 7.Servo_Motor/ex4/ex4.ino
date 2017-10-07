int val;// 변수선언

void setup() {
  pinMode(3,OUTPUT);// 3번핀 출력모드 선언
  pinMode(4,OUTPUT);// 4번핀 출력모드 선언
}

void loop() {
  digitalWrite(3, LOW);// 3번 LOW
  digitalWrite(4, HIGH);// 4번 HIGH

  for(val=50; val<256; val++){ // 모터 회전 속도 50~255까지 50ms 간격으로 가속
    analogWrite(5, val);
    delay(50); // 0.05s delay
  }
  
  digitalWrite(5, LOW); // 모터 회전 정지
  delay(1000); // 1s delay
  
}
