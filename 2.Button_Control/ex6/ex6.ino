int pin_SW[4] = {2,3,4,5};
int pin_LED[4] = {8,9,10,11};
int k;

void setup() {
   for(k=0; k<4; k++) {
   pinMode(pin_SW[k], INPUT);
   pinMode(pin_LED[k], OUTPUT);
   }
}
void loop() {
  if(digitalRead(pin_SW[0])==1){
    digitalWrite(pin_LED[0], HIGH);
    digitalWrite(pin_LED[0], LOW);
  } else if(digitalRead(pin_SW[1])==1){
    digitalWrite(pin_LED[1], HIGH);
    digitalWrite(pin_LED[1], LOW);    
  } else if(digitalRead(pin_SW[2])==1){
    digitalWrite(pin_LED[2], HIGH);
    digitalWrite(pin_LED[2], LOW);    
  }else if(digitalRead(pin_SW[3])==1){
    digitalWrite(pin_LED[3], HIGH);
    digitalWrite(pin_LED[3], LOW);    
  }else { 
    for(k=0; k<4; k++){
    digitalWrite(pin_LED[k], LOW);
   }
 }
}
