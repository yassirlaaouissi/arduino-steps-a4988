# arduino-steps-a4988
Code for controlling stepper motor 42byghw811 with a4988 controller. Note I set then steps to 20 degrees:
```
#define STEPS 11
```
Each step is approx 0.55 degrees. So 0.55 x 20 = 11 steps.
Used arduino uno and this schematic.
![image](https://user-images.githubusercontent.com/59022605/216776515-3f50ee40-9374-4105-a81b-fc479b816cd0.png)
For optimal results use 12 volts and 0.2 ampere.
Full wiring guide here:
https://circuitdigest.com/microcontroller-projects/controlling-nema-17-stepper-motor-with-arduino-and-a4988-stepper-driver-module

Code was editted from this tutorial.
