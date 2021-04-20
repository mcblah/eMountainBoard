#include <Servo.h>
int potentiometer= A0;
int potval;
int curval;
int dt = 60;

Servo ESC;

void setup() {
  
  pinMode(potentiometer, INPUT);
  ESC.attach(5);    
  Serial.begin(9600);  
  curval=0;
  
}

void loop() {

  potval=analogRead(potentiometer);
  potval=map(potval,0,1023,0,180);

    ESC.write(potval);
    Serial.println(potval);
}
