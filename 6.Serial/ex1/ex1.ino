void setup(){
Serial.begin(9600); // 시리얼 통신을 위한 전송속도 9600 설정
}

void loop(){
Serial.println(“GYU JJANG!”); // 문자열 전송
delay(1000); // 1s delay
}
