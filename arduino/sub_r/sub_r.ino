#include <TimerOne.h>
#include <MultiFuncShield.h>

const int LED = 13;
int Count = 0;

void setup() {
  pinMode(LED, OUTPUT);
  Timer1.initialize();
  MFS.initialize(&Timer1);
}

void loop() {
  if (Count < 10) {
    Blink(100);
  }

  else if(Count > 10 || Count < 20){
    Blink(500);
  }

  else{
    digitalWrite(LED, HIGH);
  }
}

void Blink(int t){
  digitalWrite(LED, HIGH);  
  delay(t);               
  digitalWrite(LED, LOW);   
  delay(t);               
  Count ++;                 
  MFS.write(Count);       
}
