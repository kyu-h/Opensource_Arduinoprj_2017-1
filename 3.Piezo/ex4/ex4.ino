const int p = 7; // const를 이용해 값을 변경할 수 없는 상수 값 선언
char code[] = {‘C’, ‘D’, ‘E’, ‘F’, ‘G’, ‘A’, ‘B’}; // 배열에 넣기
unsigned int freq[] = {262, 294, 330, 349, 392, 440, 494}; // unsigned를 이용해 양의 수만 배열에 넣기
char m[] = “CCGGAAGpFFEEDCCpGGFFEEDpGGFFEEDpCCGGAAGpFFEEDDCp ”; // 배열에 넣기
const byte mSize = sizeof(m); // m[]의 사이즈를 구해서 byte(8개씩) 끊어서 대입
void setup() {
    pinMode(p, OUTPUT); // p=7번 핀 디지털 출력모드로 지정
}
void loop() {
    for(int z=0; z<mSize; z++) {
        int playT=200; // 변수 선언
        for(int k=0; k<7; k++) {
          if(m[z]==code[k]){ 
            tone(p, freq[k], playT); //p번 핀으로 freq[k] 번째 주파수 playT=200 밀리초 출력
          }
          delay(playT); // 0.2s delay
        }
    }
    noTone(p); // p번 핀 멈추기
    delay(2000); // 2s delay
}
