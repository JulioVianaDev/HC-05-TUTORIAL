#include <SoftwareSerial.h>

SoftwareSerial bt(0,1);

char t;


void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    
    t = Serial.read();

    if (t == 'F'){
     Serial.println("frente");
    }
    else if (t == 'B'){
     Serial.println("tras");
    }
  }
}
