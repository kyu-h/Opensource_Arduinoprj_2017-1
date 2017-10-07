int ledPin[4]={8,9,10,11};
int k,num;
byte phoneData;
void setup(){
  Serial.begin(9600);
  for(k=0;k<4;k++){
    pinMode(ledPin[k],OUTPUT);
  }
}
void serialEvent(){
phoneData=Serial.read();
num=phoneData-1;
}
void loop(){
  switch(phoneData){
    case 1:
    digitalWrite(ledPin[num],HIGH);
    break;
    case 2:
    digitalWrite(ledPin[num],HIGH);
    break;
    case 3:
    digitalWrite(ledPin[num],HIGH);
    break;
    case 4:
    digitalWrite(ledPin[num],HIGH);
    break;
    case 0:
    for(k=0;k<4;k++){
      pinMode(ledPin[k],LOW);
    }
    break;
  }
}
