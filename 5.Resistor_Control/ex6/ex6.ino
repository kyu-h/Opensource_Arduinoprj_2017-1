int pin_LED[4] = {5,6,9,10};  // 배열 선언

void setup() {
for(int i=0; i<4; i++){
  pinMode(pin_LED[i],OUTPUT);  // LED 4개 OUTPUT 지정
}
}

void loop(){
int val1 = analogRead(2); // 0~1023 범위가 들어옴

if(val1<204) { //~204 범위는 LED 전부 off
  for(int i=0; i<4; i++){
  analogWrite(pin_LED[i], 0);  
  }
}else if(val1<408) { //~408 범위는 LED[0,1] on
  analogWrite(pin_LED[0], 255);
}else if(val1<612) {
  for(int i=0; i<2; i++){
  analogWrite(pin_LED[i], 255);
  }
}else if(val1< 819){ //~819 범위는 LED[0,1,2] on
  for(int i=0; i<3; i++){
  analogWrite(pin_LED[i], 255);
  }
}else { //~1023 범위는 LED 전부 on
  for(int i=0; i<4; i++){
  analogWrite(pin_LED[i], 255);
  }
}
}
