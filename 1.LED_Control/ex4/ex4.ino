int pinLED[] = {6,9,11,12}; // 따로 떨어져 있는 핀 6,9,11,12 번을 동시에 제어하기 위해 배열을 이용 pinLED[0]=6, pinLED[1]=9, pinLED[1]=11, pinLED[2]=12 번으로 지정되었음.
int x; // 변수 선언.

void setup() {
  for (x=0; x<4; x++){
    pinMode(pinLED[x], OUTPUT); // pinLED[0]=6, pinLED[1]=9, pinLED[1]=11, pinLED[2]=12 출력모드로 지정.
  }
}

void loop(){
  for(x=0; x<4; i++){
    digitalWrite(pinLED[x], HIGH); // 디지털 출력모드인 핀 pinLED[0]=6, pinLED[1]=9, pinLED[1]=11, pinLED[2]=12 HIGH 출력
  delay(1000);             // 시간지연 1초
  }
  for(x=0; x<4; i++){
    digitalWrite(pinLED[x], LOW); // 디지털 출력모드인 핀 pinLED[0]=6, pinLED[1]=9, pinLED[1]=11, pinLED[2]=12 LOW 출력
  delay(1000);             // 시간지연 1초
  }
}
