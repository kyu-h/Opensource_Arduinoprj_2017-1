const int piezo=7;
unsigned int freq[] = {554,588 ,493 ,440 ,658 ,622 ,998 ,1108 ,1172, 784 ,880, 740, 523, 466, 415, 392 ,370,349 ,329}; //freq배열에 주파수를 넣음.
char code[]= {'A', 'B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S'}; //주파수에 알맞은 코드들을 code배열에 넣음
char mData[] = "BACDCABACDCABACDCABACDp EBACABEBACABEBACABABFEp GHIJKGKGHLJKJKGELJLJKBELEFBAMCNDOPQRS";  //악보의 코드를 mData배열에 넣음.
const byte mSize=sizeof(mData); //mData의 크기를 mSize에 넣음.

void setup() {
pinMode(piezo,OUTPUT); //피에조를 출력으로 설정.
}

void loop() {        //loop문 시작.
  for(int m=0; m<mSize; m++) { //mSize만큼 반복.
  int playT=200;
  for(int k=0; k<19; k++) {
    if(mData[m]==code[k]){
      tone(piezo, freq[k], playT);
    }
  }
  //mData[m]가 code[k]와 같으면 피에조로 playT밀리초 동안 freq[k]음을 출력한다.
  delay(playT);  //playT밀리초 동안 간격을 줌.
  }
  noTone(piezo); //피에조 출력을 끔.
  delay(2000);  //2초 동안 간격을 줌.
}
