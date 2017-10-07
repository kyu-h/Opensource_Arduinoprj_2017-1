int pin_SW[3] = {2,4,8}; // 스위치 배열 선언
int pin_LED[4] = {5,6,9,10}; // LED 배열 선언
int k;                          
int i=7; // 피에조, 스위치, LED 켤 포트 지정할 변수 선언
int freq[] = {262,330,394}; // 음 저장한 배열 선언

void setup(){
  for(k=0;k<3;k++){
    pinMode(pin_SW[k],INPUT); // pin_SW[k] 입력모드로 선언
  }
  for(k=0; k<4;k++){
  pinMode(pin_LED[k],OUTPUT);} // pin_LED[k] 출력모드 선언
  pinMode(i,OUTPUT); // 7번 출력모드 선언
}

void loop(){
  if(digitalRead(pin_SW[0]) ==1) //pin_SW[0]이 눌렸을 때
  {
    for(k=0;k<4;k++){
      analogWrite(pin_LED[k], 50); //50의 밝기로 4개의 LED on
    }
    tone(i,freq[0],200); //도(262) 200밀리초 출력
  }
  else if(digitalRead(pin_SW[1]) ==1)//pin_SW[1]이 눌렸을 때
  {
    for(k=0;k<4;k++){
      analogWrite(pin_LED[k], 100); //100의 밝기로 4개의 LED on
    }
    tone(i,freq[1],200); //미(330) 200밀리초 출력
  }
  else if(digitalRead(pin_SW[2]) ==1)//pin_SW[2]이 눌렸을 때
  {
    for(k=0;k<4;k++){
      analogWrite(pin_LED[k], 200); //200의 밝기로 4개의 LED on
    }
    tone(i,freq[2],200); //솔(394) 200밀리초 출력
  }
  else{ //아무것도 안 눌렸을 때
    for(k=0; k<4; k++){
      analogWrite(pin_LED[k] ,0); //LED 모두 off
    }
    noTone(i);} // 소리 끄기
}
