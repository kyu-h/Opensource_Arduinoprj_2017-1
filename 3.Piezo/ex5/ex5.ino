
int p = 7; // 변수 선언
int sw[4] = {2,3,4,5}; // 배열 선언
int freq[4] = {262, 294, 330, 349}; // 배열 선언 (도, 레, 미, 파)
int val = 0; // 변수 선언
void setup() {
    pinMode(p, OUTPUT); // p=7번 핀 디지털 출력모드로 지정
    for(int k=0; k<4; k++){
      pinMode(sw[k], INPUT); // sw[k]번 핀 디지털입력모드로 지정
    }
}

void loop() {
    for(int k=0; k<4; k++) {
      val = digitalRead(sw[k]);
      if(val) { // k번째 스위치가 눌렸는지 체크
        tone(p, freq[k]); // k번째 주파수 출력
        while (digitalRead(sw[k])); // 스위치가 게속 눌리는지 체크
        noTone(p); // 소리 끄기
      }
    }
}

