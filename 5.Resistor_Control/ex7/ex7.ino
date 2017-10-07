int ECHO_pin = 7;  // 변수 선언
int TRIG_pin = 8;// 변수 선언
int distance;// 변수 선언

void setup(){
pinMode(ECHO_pin, INPUT); // echo 핀 입력모드 선언
pinMode(TRIG_pin, OUTPUT);// trig핀 출력모드 선언
Serial.begin(9600); // 9600포트에서 시리얼 볼 수 있음
pinMode(3, OUTPUT); // 3번핀 출력모드 선언
}
void loop(){
digitalWrite(TRIG_pin, LOW); // trig 핀을 2microseconds동안 LOW
delayMicroseconds(2);
digitalWrite(TRIG_pin, HIGH); //trig 핀을 10microseconds동안 HIGH
delayMicroseconds(10);
digitalWrite(TRIG_pin, LOW); // trig 핀 LOW

distance = pulseIn(ECHO_pin, HIGH); //펄스 지속시간 읽기
int val1 = distance/58; //펄스 시간을 거리로 계산

int val2 = map(val1, 0, 200, 0, 255); //측정 범위를 0~200으로 선언

Serial.print("distance=");
Serial.print(val2);
Serial.print("\n"); //거리 측정이 잘 되는지 Serial에 예시로 출력
delay(200);

if(val2<10){ //거리가 10 미만일 때 도음 출력
  tone(3, 262, 1000);
}else if(val2 <30){ //거리가 30 미만일 때 레음 출력
  tone(3, 294, 1000);
}else if(val2 <50){ //거리가 50 미만일 때 미음 출력
  tone(3, 330, 1000);
}else if(val2 <70){ //거리가 70 미만일 때 파음 출력
  tone(3, 349, 1000);
}else if(val2 <90){ //거리가 80 미만일 때 솔음 출력
  tone(3, 392, 1000);
}else if(val2 <140){ //거리가 140 미만일 때 라음 출력
  tone(3, 440, 1000);
}else { // 이외에 시음 출력
  tone(3, 494, 1000);
}
}
