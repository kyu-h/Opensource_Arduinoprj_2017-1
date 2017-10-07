
void setup() {
    pinMode(7, OUTPUT); // 7번 핀 디지털 출력모드로 지정
}

void loop(){
    for( int k=0; k<440; k++){ // 440번 반복
        digitalWrite(7, HIGH); // 7번 핀 high 모드로 출력
        delayMicroseconds(1136); // 1136㎲ delay하고, 음을 결정
        digitalWrite(7, LOW); // 7번 핀 low 모드로 출력
        delayMicroseconds(1136); // 1136㎲ delay하고, 음을 결정
    } // for문 1번 도는데 2272㎲ 걸림.
delay(1000); // delay 1초
}

