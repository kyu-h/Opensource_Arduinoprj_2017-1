int pin_SW[4] = {2,3,4,5}; // pin_SW에 배열 4개 넣기 
int pin_LED[4] = {8,9,10,11}; // pin_LED에 배열 4개 넣기 
int k; // 변수 선언

void setup() {
   for(k=0; k<4; k++) {
    pinMode(pin_SW[k], INPUT); // pin_SW[0-3]사이 배열에 있는 값 입력 
    pinMode(pin_LED[k], OUTPUT); // pin_LED[0-3]사이 배열에 있는 값 출력
   }
}

void　loop() {
   if(digitalRead(pin_SW[0])==1){ // pin_SW[0]번 핀이 눌리면 작동 하는 if문
    for(k=0; k<4; k++) { // pin_LED[0-3] 4개의 LED 모두 On
      digitalWrite(pin_LED[k], HIGH);
    }
    delay(1000); // 1초간 대기
    for(k=0; k<4; k++) { // pin_LED[0-3] 4개의 LED 모두 Off
      digitalWrIte(pin_LED[k], LOW);
    }
    delay(1000); // 1초간 대기
   }

   else if(digitalRead(pin_SW[1])==1){// pin_SW[1]번 핀이 눌리면 작동 하는 else if 문
    for(k=0; k<4; k++) { 
     digitalWrite(pin_LED[k], HIGH); // LED를 켜주는 구문
     delay(1000); // 1초간 대기
    } // pin_LED[0] On 하고 1초간 대기, pin_LED[1] On 하고 1초간 대기, pin_LED[2] On 하고 1초간 대기, pin_LED[3] On 하고 1초간 대기
    for(k=0; k<4; k++) {
     digitalWrite(pin_LED[k], LOW); // LED를 꺼주는 구문
     delay(1000); // 1초간 대기
    } // pin_LED[0] Off 하고 1초간 대기, pin_LED[1] Off 하고 1초간 대기, pin_LED[2] Off 하고 1초간 대기, pin_LED[3] Off 하고 1초간 대기
   }

   else if(digitalRead(pin_SW[2])==1){// pin_SW[2]번 핀이 눌리면 작동 하는 else if 문
    for(k=3; k>=0; k--) {
     digitalWrite(pin_LED[k], HIGH); // LED를 켜주는 구문
     delay(1000); // 1초간 대기
    } // pin_LED[3] On 하고 1초간 대기, pin_LED[2] On 하고 1초간 대기, pin_LED[1] On 하고 1초간 대기, pin_LED[0] On 하고 1초간 대기
    for(k=0; k<4; k++) {
     digitalWrite(pin_LED[k], LOW); // LED를 꺼주는 구문
     delay(1000); // 1초간 대기
    } // pin_LED[0] Off 하고 1초간 대기, pin_LED[1] Off 하고 1초간 대기, pin_LED[2] Off 하고 1초간 대기, pin_LED[3] Off 하고 1초간 대기
   }

   else if(digitalRead(pin_SW[3])==1){// pin_SW[3]번 핀이 눌리면 작동 하는 else if 문
    for(k=0; k<4; k++) {
     digitalWrite(pin_LED[k], HIGH); // LED를 켜주는 구문
     delay(1000); // 1초간 대기
     digitalWrite(pin_LED[k], LOW); // LED를 꺼주는 구문
     delay(1000); // 1초간 대기
    } // pin_LED[0] On -> 1초 대기 -> pin_LED[0] Off -> 1초 대기 -> pin_LED[1] On -> 1초 대기 -> pin_LED[1] Off -> 1초 대기 -> pin_LED[2] On -> 1초 대기 -> pin_LED[2] Off -> 1초 대기 -> pin_LED[3] On -> 1초 대기 -> pin_LED[3] Off -> 1초 대기
   }

   else { // 아무 핀도 눌리지 않을 때 작동 하는 else 문
    for(k=0; k<4; k++) {
     digitalWrite(pin_LED[k], LOW); // LED를 꺼주는 구문
    }
   }
}
