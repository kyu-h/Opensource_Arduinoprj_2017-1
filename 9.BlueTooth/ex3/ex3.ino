int ledPin=5;
int val1,val2,val3;
void setup(){
  Serial.begin(9600);
}
void loop(){
  char select=Serial.read();
  if(select==1){
    val1=analogRead(2);
    val2=map(val1,0,1023,0,100);
    Serial.write(val2);
    delay(20);
    val3=map(val1,0,1023,0,255);
    analogWrite(5,val3);
    delay(20);
  }
  if(select==2){
    analogWrite(5,0);
    delay(20);
  }
}
