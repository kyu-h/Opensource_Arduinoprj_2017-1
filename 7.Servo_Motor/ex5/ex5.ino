int val;// 변수선언

void setup() {
  Serial.begin(9600);
  pinMode(3,OUTPUT);// 3번핀 출력모드 선언
  pinMode(4,OUTPUT);// 4번핀 출력모드 선언
}

void loop() {
  val=analogRead(2); // 가변저항 값 읽기
  val=map(val,0,1023,0,255);// 0~1023을 0~255로 변환

  Serial.print("PWMPower = "); // 문자열 출력
  Serial.println(val); // 시리얼 모니터 출력

  digitalWrite(3,LOW); // 모터 회전
  digitalWrite(4,HIGH);
  analogWrite(5,val); 
  
}
