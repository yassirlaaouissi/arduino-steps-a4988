#include <Stepper.h> 
#define STEPS 11
// Define stepper motor connections and motor interface type. Motor interface type must be set to 1 when using a driver
Stepper stepper(STEPS, 2, 3); // Pin 2 connected to DIRECTION & Pin 3 connected to STEP Pin of Driver
#define motorInterfaceType 1
int Pval = 0;
int potVal = 0;

void setup() {
  // Set the maximum speed in steps per second:
  stepper.setSpeed(2000);
  Serial.begin(9600);
}

void loop() {
  potVal = map(analogRead(A0),0,1024,0,11);
  if (potVal>Pval) {
      stepper.step(10);
      Pval = potVal;
      Serial.println(Pval);
      Serial.println(potVal);
  }else if (potVal<Pval) {
      stepper.step(-10);
      Pval = potVal;
      Serial.println(Pval);
      Serial.println(potVal);
  }else if ((potVal+1) == Pval || (potVal-1) == Pval) {
      stepper.step(0);
      Pval = potVal;
      Serial.println(Pval);
      Serial.println(potVal);
  }

}
