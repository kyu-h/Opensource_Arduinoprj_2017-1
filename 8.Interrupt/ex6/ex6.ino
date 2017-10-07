#include <MsTimer2.h>
int segPins[8]={3,4,5,6,7,8,9,10};  // FND 세그먼트에 사용할 입출력 핀 저장
int degData[10][8]={{0,0,0,0,0,0,1,1},
                   {1,0,0,1,1,1,1,1},
                   {0,0,1,0,0,1,0,1},
                   {0,0,0,0,1,1,0,1},
                   {1,0,0,1,1,0,0,1},
                   {0,1,0,0,1,0,0,1},
                   {0,1,0,0,0,0,0,1},
                   {0,0,0,1,1,0,1,1},
                   {0,0,0,0,0,0,0,1},
                   {0,0,0,1,1,0,0,1}}; // 숫자"0"~"9"을 표시하기 위한 데이터 배열
int i, k;
volatile int state =HIGH;

void setup() {
  for(int i=0; i<8; i++){
    pinMode(segPins[i], OUTPUT);  // 핀을 출력모드로 설정
  }
  MsTimer2::set(500, flash); // 500ms period
  MsTimer2::start();
  attachInterrupt(0, toggle, RISING);
}

void disFND(int k){// FND 세그먼트
  for(int i=0; i<8; i++){
    digitalWrite(segPins[i], degData[k][i]);
  }
}

void flash() {
  static int num=0;
  disFND(num);
  if(state) {
     num=(num+1)%10;//10로 나눈 나머지 값을 num에 대입
  }
}
void toggle() {//toggle함수 호출 때 마다 state 값 반전 HIGH -> LOW, LOW -> HIGH
  state = !state;
  digitalWrite(flash, state);
}
void loop() {

}
