int ledPin = 8;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
void loop() {
  byte r_data;
  if (Serial.available() > 0) {
    r_data = Serial.read();
    if (r_data == 1) {
      digitalWrite(ledPin, HIGH);
    }
    if (r_data == 2) {
      digitalWrite(ledPin, LOW);
    }
  }
}

1.2
int ledPin=8;
void setup(){
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}
void loop(){
  byte r_data;
  if(Serial.available()>0){
    r_data = Serial.read();
    switch(r_data){
    case 1:
    digitalWrite(ledPin,HIGH);
    break;
    case 2:
    digitalWrite(ledPin,LOW);
    break;
   }
  }
}
