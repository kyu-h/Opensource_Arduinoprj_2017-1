int pin_SW[4] = {2,3,4,5}; // pin_SW에 배열 4개 넣기 
int pin_LED[4] = {8,9,10,11}; // pin_LED에 배열 4개 넣기
int k;

void setup() {
  for (i=0; i<4; i++){
    pinMode(pin_SW[k], INPUT); // pin_SW[0-3]사이 배열에 있는 값 입력
    pinMode(pin_LED[k], OUTPUT); // pin_LED[0-3]사이 배열에 있는 값 출력
  }
}
void loop(){
  if(digitalRead(pin_SW[0]==1){ // pin_SW[0] 이 1일 경우 pin_LED[0] 켜기
     digitalWrite(pin_LED[0], HIGH);
  }
  else if(digitalRead(pin_SW[1]==1){ // pin_SW[1] 이 1일 경우 pin_LED[1] 켜기
     digitalWrite(pin_LED[1], HIGH);
  }
  else if(digitalRead(pin_SW[2]==1){ // pin_SW[2] 이 1일 경우 pin_LED[2] 켜기
     digitalWrite(pin_LED[2], HIGH);
  }
  else if(digitalRead(pin_SW[3]==1){ // pin_SW[3] 이 1일 경우 pin_LED[3] 켜기
     digitalWrite(pin_LED[3], HIGH);
  }
  else{ // pin_SW[0-3] LED 모두 끄기
     for(k=0; k<4; k++) {
     digitalWrite(pin_LED[k], LOW);
     }
  }
}
