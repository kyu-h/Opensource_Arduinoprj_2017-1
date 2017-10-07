void setup(){
  Serial.begin(9600); // 시리얼 통신을 위한 전송속도 9600 설정
}

void loop(){
  if( Serial.available()){ // Serial 통신이 가능하다면
    char ch=Serial.read(); // 사용자가 입력한 ch변수에 Serial을 읽어와 대입하고
    Serial.println(ch); // 사용자가 입력한 문자가 뭔지 보여주기 위해 ch 출력
    Serial.print("10진수로 : "); // 문자열 출력
    Serial.println(ch,DEC); // 사용자가 입력한 ch를 10진수로 변환 했을 경우
    Serial.print("16진수로 : "); // 문자열 출력
    Serial.println(ch,HEX); // 사용자가 입력한 ch를 16진수로 변환 했을 경우
  }
}
