
void setup(){
  Serial.begin(9600);// 시리얼 통신을 위한 전송속도 9600 설정
}

void loop(){
  if( Serial.available()){ // Serial 통신이 가능하다면
    int ch=Serial.parseInt(); // 사용자가 입력한 int형 ch변수에 Serial을 읽어와 대입하고
    Serial.println(ch); // 사용자가 입력한 문자가 뭔지 보여주기 위해 ch 출력
    int ch1=Serial.parseInt(); // 사용자가 입력한 int형 ch1변수에 Serial을 읽어와 대입하고
    Serial.println(ch1);// 사용자가 입력한 문자가 뭔지 보여주기 위해 ch 출력
    Serial.print(ch);
    Serial.print("+");
    Serial.print(ch1);
    Serial.print("="); 
    Serial.println(ch + ch1); //  + 출력
    Serial.print(ch);
    Serial.print("-");
    Serial.print(ch1);
    Serial.print("=");
    Serial.println(ch – ch1); // - 출력
  }
}

