int pin_SW[4] = {2,3,4,5}; // pin_SW에 배열 4개 넣기 
int pin_LED[4] = {8,9,10,11}; // pin_LED에 배열 4개 넣기 
int k;

void setup() {
  for (k=0; k<4; k++){
    pinMode(pin_SW[k], INPUT); // pin_SW[0-3]사이 배열에 있는 값 입력
    pinMode(pin_LED[k], OUTPUT);// pin_LED[0-3]사이 배열에 있는 값 출력
  }
}

void loop(){
  for(k=0; k<4; k++){
    val=digitalRead(pin_SW[k]); // val에 data 값 넣기
    bitWrite(select, k ,val); // select 데이터의 k번째 비트에 val 값 (0 or 1)을 입력 
  }
  switch(select) {
    case 1: // pin_SW[0]이 눌리면 pin_LED[0] 켜기
      digitalWrite(pin_LED[0], HIGH);
    break;
    case 2: // pin_SW[1]이 눌리면 pin_LED[1] 켜기
      digitalWrite(pin_LED[1], HIGH);
    break;
    case 4: // pin_SW[2]이 눌리면 pin_LED[2] 켜기
      digitalWrite(pin_LED[2], HIGH);
    break;
    case 8: // pin_SW[3]이 눌리면 pin_LED[3] 켜기
      digitalWrite(pin_LED[3], HIGH);
    break;
    default: // 초기 값으로 스위치가 눌리지 않는다면 모두 OFF 상태
      for(k=0; k<4; k++) {
         digitalWrite(pin_LED[k], LOW);
      }
   break;
   }         
}
