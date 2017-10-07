int pin_SW[4] = {2,3,4,5}; // pin_SW에 배열 4개 넣기 
int pin_LED[4] = {8,9,10,11}; // pin_LED에 배열 4개 넣기 
int k; // 변수 선언

void setup() {
   for(k=0; k<4; k++) {
   pinMode(pin_SW[k], INPUT); // pin_SW[0-3]사이 배열에 있는 값 입력
   pinMode(pin_LED[k], OUTPUT); // pin_LED[0-3]사이 배열에 있는 값 출력
   }
}
void loop() {
   if(digitalRead(pin_SW[0])==1){ // pin_SW[0]번 핀이 눌리면 작동 하는 if문
   digitalWrite(pin_LED[0], HIGH); // pin_LED[0] ON
   delay(1000); // 1초간 delay
   digitalWrite(pin_LED[0], LOW);// pin_LED[0] OFF
   delay(1000);// 1초간 delay
   }
   else if(digitalRead(pin_SW[1])==1){ // pin_SW[1]번 핀이 눌리면 작동 하는 else if문
   digitalWrite(pin_LED[1], HIGH);// pin_LED[1] ON
   delay(500);// 0.5초간 delay
   digitalWrite(pin_LED[1], LOW);// pin_LED[1] OFF
   delay(500);// 0.5초간 delay
   }
   else if(digitalRead(pin_SW[2])==1){ // pin_SW[2]번 핀이 눌리면 작동 하는 else if문
   digitalWrite(pin_LED[2], HIGH);// pin_LED[2] ON
   delay(250);// 0.25초간 delay
   digitalWrite(pin_LED[2], LOW);// pin_LED[2] OFF
   delay(250);// 0.25초간 delay
   }
   else if(digitalRead(pin_SW[3])==1){// pin_SW[3]번 핀이 눌리면 작동 하는 else if문
   digitalWrite(pin_LED[3], HIGH);// pin_LED[3] ON
   delay(125);// 0.125초간 delay
   digitalWrite(pin_LED[3], LOW);// pin_LED[3] OFF
   delay(125);// 0.125초간 delay
   }
   else { // 아무 핀도 작동하지 않을 때 작동하는 else 문
    for(k=0; k<4; k++){
    digitalWrite(pin_LED[k], LOW); // pin_LED[0-3] OFF
    }
   }
}
