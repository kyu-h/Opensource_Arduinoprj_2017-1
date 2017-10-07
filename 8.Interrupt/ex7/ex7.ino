#include <MsTimer2.h>
int segPins[8]={3,4,5,6,7,8,9,10};  // FND 세그먼트에 사용할 입출력 핀 저장
int degData[5][8]={{0,0,0,0,0,0,1,1},
                   {1,0,0,1,1,1,1,1},
                   {0,0,1,0,0,1,0,1},
                   {0,0,0,0,1,1,0,1},
                   {1,0,0,1,1,0,0,1}}; // 숫자"0"~"4"을 표시하기 위한 데이터 배열
int piezo=13;
int i, k;
unsigned int freq[] = 
{262, 294, 330, 349, 392, 440, 494}; 
//freq배열에 주파수를 넣음.
char code[]= {'C', 'D', 'E', 'F', 'G', 'A', 'B'};
//주파수에 알맞은 코드들을 code배열에 넣음
char mData[]=
"CCGGAAGpFFEEDCCpGGFFEEDpGGFFEEDpCCGGAAGpFFEEDDCp"; 
//악보의 코드를 mData배열에 넣음.
const byte mSize=sizeof(mData);
//mData의 크기를 mSize에 넣음.

volatile int state =HIGH;
void setup() {
  for(int i=0; i<8; i++){
    pinMode(segPins[i], OUTPUT);  // 핀을 출력모드로 설정
  }
  pinMode(piezo, OUTPUT); 
  MsTimer2::set(500, flash); // 500ms period
  MsTimer2::start();
}

void disFND(int k){
  for(int i=0; i<8; i++){ // FND 세그먼트
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
void loop() {         //loop문 시작.
for(int m=0; m<mSize; m++) { //mSize만큼 반복.
int playT=200;
for(int k=0; k<7; k++) {
if(mData[m]==code[k]){
tone(piezo, freq[k], playT);}
}
//mData[m]가 code[k]와 같으면 피에조로 playT밀리초 동안 freq[k]음을 출력한다.
delay(playT*3);  //playT밀리초 동안 간격을 줌.
}
noTone(piezo); //피에조 출력을 끔.
delay(2000);  //2초 동안 간격을 줌.
}
