void setup() {
    pinMode(7, OUTPUT); // 7번 핀 디지털 출력모드로 지정
}
void sounds(float x) { // 함수 선언
    float t = (1/x * 1000000)/2;
    for (int k=0; k<x; k++) {
        digitalWrite(7, HIGH); // 7번 핀 high 모드로 출력
        delayMicroseconds(t); // t ㎲ delay
        digitalWrite(7, LOW); // 7번 핀 low 모드로 출력
        delayMicroseconds(t); // t ㎲ delay
    }
   delay(1000); // 1s delay
}

void loop(){
    sounds(262); //도 (주파수 262Hz)
    sounds(294); //레 (주파수 294Hz)
    sounds(330); //미 (주파수 330Hz)
    sounds(349); //파 (주파수 349Hz)
    sounds(392); //솔 (주파수 392Hz)
    sounds(440); //라 (주파수 440Hz)
    sounds(494); //시 (주파수 494Hz)
}
