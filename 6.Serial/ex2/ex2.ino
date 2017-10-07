void setup(){
Serial.begin(9600); // 시리얼 통신을 위한 전송속도 9600 설정
}

void loop(){
if( Serial.available()){ // Serial 통신이 가능하다면,
char ch=Serial.read(); // 사용자가 입력한 ch 변수에 Serial을 읽어와 대입하고
Serial.println(ch); // ch(사용자가 입력한 문자) 출력
}
}
