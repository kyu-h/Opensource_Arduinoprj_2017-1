void setup() {
    pinMode(2, INPUT);     // 2번 핀 디지털 입력모드로 지정
    pinMode(10, OUTPUT); // 10번 핀 디지털 출력모드로 지정
}

void loop(){
  int sw_in=digitalRead(2); // 2번 핀으로부터 값을 읽어 sw_in에 대입
    if(sw_in==1) { // sw_in이 1일 경우 10번 핀 LED 켜기 
       digitalWrite(10, HIGH);
  }
  else { // sw_in이 1이 아닐 경우 10번 핀 LED 끄기 
       digitalWrite(10, LOW);
  }
}
