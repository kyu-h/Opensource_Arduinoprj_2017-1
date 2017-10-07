
#include <MsTimer2.h>
int segPins[8]={3,4,5,6,7,8,9,10};  // FND 세그먼트에 사용할 입출력 핀 저장
int degData[5][8]={{0,0,0,0,0,0,1,1},
                   {1,0,0,1,1,1,1,1},
                   {0,0,1,0,0,1,0,1},
                   {0,0,0,0,1,1,0,1},
                   {1,0,0,1,1,0,0,1}}; // 숫자"0"~"4"을 표시하기 위한 데이터 배열
int ledPin=13;
int i, k;
volatile int state =HIGH;
void setup() {
  for(int i=0; i<8; i++){
    pinMode(segPins[i], OUTPUT);  // 핀을 출력모드로 설정
  }
  pinMode(ledPin, OUTPUT); 
  MsTimer2::set(500, flash); //0.5s 간격으로 flash함수 호출
  MsTimer2::start();
  attachInterrupt(0, toggle, RISING);
}

void disFND(int k){ // FND 세그먼트
  for(int i=0; i<8; i++){
    digitalWrite(segPins[i], degData[k][i]);
  }
}

void flash() {
  static int num=0;
  disFND(num);
  if(state) {
     num=(num+1)%5; //5로 나눈 나머지 값을 num에 대입
  } 
}

void toggle() {
  state = !state;//toggle함수 호출 때 마다 state 값 반전 HIGH -> LOW, LOW -> HIGH
  digitalWrite(ledPin, state);
}

void loop() {


}

