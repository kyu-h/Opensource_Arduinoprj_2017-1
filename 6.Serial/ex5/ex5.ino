int val1, val2, val3; // 변수 선언

void setup(){
Serial.begin(9600);// 시리얼 통신을 위한 전송속도 9600 설정
pinMode(5,OUTPUT); // 5번 핀 OUTPUT 설정
}

void loop(){
  val1 = analogRead(2); // 아날로그2핀의 값을 val1에 대입
  Serial.print("VR value = "); //문자열 출력
  Serial.print(val1); // val1 출력
  Serial.print("......"); //문자열 출력
  val2 = map(val1, 0, 1023, 0, 100); // val1 값을 0~1023을 0~100사이 값으로 변환 후 val2에 대입
  Serial.print("VR % value = "); // %값으로 변환
  Serial.println(val2); // val2 출력
  val3 = map(val1, 0, 1023, 0, 255); // val1 값을 0~1023을 0~255사이 값으로 변환 후 val2에 대입
  analogWrite(5,val3); // pwm 신호로 출력
  delay(20); // 0.02s delay
}
