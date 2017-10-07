int pin = 10;//변수 선언
volatile int state = HIGH; //변수선언

void setup() {
  pinMode(10, OUTPUT);
  attachInterrupt(0, toggle, CHANGE);//0번 인터럽트 사용 인터럽트가 호출되면 toggle함수 호출
}

void toggle() {
  state = !state; //toggle함수 호출 때 마다 state 값 반전 HIGH -> LOW, LOW -> HIGH
}

void loop() {
  digitalWrite(pin, state);
}
