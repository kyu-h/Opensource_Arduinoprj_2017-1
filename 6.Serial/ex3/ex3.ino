int pin_LED[4] = {8,9,10,11}; // 배열 선언
int k; // 변수 선언

void setup(){
Serial.begin(9600); // 시리얼 통신을 위한 전송속도 9600 설정
for( k=0; k<4; k++){
  pinMode(pin_LED[k], OUTPUT); // LED[k] OUTPUT지정
  }
}
void loop(){
  Serial.println("Enter 1,2,3,4 !"); // 문자열 전송
  if(Serial.available()){ // Serial 통신이 가능하다면
    char select= Serial.read(); // 사용자가 입력한 select 변수에 Serial을 읽어와 대입하고
    Serial.print("Select Number="); // 문자열 전송
    Serial.println(select); // select(사용자가 입력한 문자) 출력
    
    switch(select){
      case '1': // 변수를 읽어드릴 때 char형으로 받았으므로 ‘’를 이용해 1을 문자로 바꿔줘야 함, case ‘1’ 일 때
      digitalWrite(pin_LED[0], HIGH);// pin_LED[0], HIGH
      break;
      case '2': // 변수를 읽어드릴 때 char형으로 받았으므로 ‘’를 이용해 2을 문자로 바꿔줘야 함, case ‘2’ 일 때
      digitalWrite(pin_LED[1], HIGH);// pin_LED[1], HIGH
      break;
      case '3': // 변수를 읽어드릴 때 char형으로 받았으므로 ‘’를 이용해 3을 문자로 바꿔줘야 함, case ‘3’ 일 때
      digitalWrite(pin_LED[2], HIGH);// pin_LED[2], HIGH
      break;
      case '4': // 변수를 읽어드릴 때 char형으로 받았으므로 ‘’를 이용해 4을 문자로 바꿔줘야 함, case ‘4’ 일 때
      digitalWrite(pin_LED[3], HIGH);// pin_LED[3], HIGH
      break;
      default: // 1~4를 제외한 다른 문자를 입력 했을 경우
      for(k=0; k<4; k++){
        digitalWrite(pin_LED[k], LOW);// pin_LED[0~4], LOW
      }
      break;
    }
  }
}
