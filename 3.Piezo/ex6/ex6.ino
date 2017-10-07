const int piezo=7; // 변수 선언
unsigned int freq[] = {262, 294, 330, 349, 392, 440, 494, 524}; // 배열 선언
char code[]= {'C', 'D', 'E', 'F', 'G', 'A', 'B', 'O'}; // 배열 선언
char mData[]="GpEEGECpDpEDCEGpOGOGOGEpGpDFEDCp"; // 배열 선언
const byte mSize=sizeof(mData); // 길이 값 입력

void setup() {
pinMode(piezo,OUTPUT); // piezo =7번 핀 디지털 출력모드로 지정
}

void loop() {
for(int m=0; m<mSize; m++) { 
  int playT=400; // 변수 선언
  for(int k=0; k<8; k++) {
  if(mData[m]==code[k]){
    tone(piezo, freq[k], playT);} //p번 핀으로 freq[k] 번째 주파수 playT=200 밀리초 출력
  }
  delay(playT);
}
noTone(piezo); // piezo번 핀 멈추기
delay(2000); // 2s delay
}
