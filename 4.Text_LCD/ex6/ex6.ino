#define RED 5
#define GREEN 6
#define BLUE 9
#define RED_BUTTON 4
#define GREEN_BUTTON 7
#define BLUE_BUTTON 8
// Anode형 3색 lcd 사용
int r=255, g=255, b=255; // lcd 초기 전원 OFF
void setup(){
pinMode(RED_BUTTON, INPUT);
pinMode(GREEN_BUTTON, INPUT);
pinMode(BLUE_BUTTON, INPUT);
}
void loop(){
if(digitalRead(RED_BUTTON) == HIGH){
--r; // r 값을 감소시킨다. -> 적색 lcd 밝기 증가
if(r<0){
r=255;
}
}else {
  digitalWrite(RED_BUTTON,LOW);
}
if(digitalRead(GREEN_BUTTON) == HIGH){
--g; // g 값을 감소시킨다. -> 녹색 lcd 밝기 증가
if(g<0){
g=255;
}
}else {
  digitalWrite(GREEN_BUTTON,LOW);
}
if(digitalRead(BLUE_BUTTON) == HIGH){
--b; // b 값을 감소시킨다. -> 청색 lcd 밝기 증가
if(b<0){
b=255;
}
}else {
  digitalWrite(BLUE_BUTTON,LOW);
}
analogWrite(RED, r);
analogWrite(GREEN, g);
analogWrite(BLUE, b);
delay(10);
}
