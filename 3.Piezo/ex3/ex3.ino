
void setup() {
    pinMode(7, OUTPUT);// 7번 핀 디지털 출력모드로 지정
}

void loop() { // tone() 함수는 tone(pin, frequency) or tone(pin. frequecy, duration) 이 두 가지 형태로 매개변수를 선언하는데 이번 실험에서는 후자의 경우로, ()안에 3개의 매개변수를 선언하는데 pin : 파형을 출력할 핀 번호, frequency : 출력할 파형의 주파수 (Hz단위), duration : 출력시간(밀리초 단위) -> 지정하지 않 을시 noTone() 함수가 호출 될 때까지 출력 됨. 
noTone() -> 파형 출력을 중단할 핀 번호
    tone(7, 262, 1000);//7번 핀으로 도(주파수 262Hz) 1000밀리초 출력
    delay(1000); // 1s delay
    tone(7, 294, 1000);//7번 핀으로 레(주파수 294Hz) 1000밀리초 출력
    delay(1000); // 1s delay
    tone(7, 330, 1000);//7번 핀으로 미(주파수 330Hz) 1000밀리초 출력
    delay(1000); // 1s delay
    tone(7, 349, 1000);//7번 핀으로 파(주파수 349Hz) 1000밀리초 출력
    delay(1000); // 1s delay
    tone(7, 392, 1000);//7번 핀으로 솔(주파수 392Hz) 1000밀리초 출력
    delay(1000); // 1s delay
    tone(7, 440, 1000);//7번 핀으로 라(주파수 440Hz) 1000밀리초 출력
    delay(1000); // 1s delay
    tone(7, 494, 1000);//7번 핀으로 시(주파수 494Hz) 1000밀리초 출력
    delay(1000); // 1s delay
}

