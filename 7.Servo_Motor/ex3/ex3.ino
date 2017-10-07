void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT); // 3번핀 출력모드 선언
  pinMode(4,OUTPUT); // 4번핀 출력모드 선언
  pinMode(5,OUTPUT); // 5번핀 출력모드 선언
}

void loop() {
  digitalWrite(3, LOW); // 3번 LOW
  digitalWrite(4, HIGH); // 4번 HIGH
  digitalWrite(5, HIGH); // 5번 HIGH
  delay(1000); // 1s delay

  digitalWrite(5, LOW); // 5번 LOW
  delay(1000);// 1s delay

  digitalWrite(3, HIGH); // 3번 HIGH
  digitalWrite(4, LOW); // 4번 LOW
  digitalWrite(5, HIGH); // 5번 HIGH
  delay(1000);// 1s delay

  digitalWrite(5, LOW); // 5번 LOW
  delay(1000);// 1s delay
  
}
