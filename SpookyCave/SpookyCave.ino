/*
 * AET Yomotsu Hirasaka Enclosure
 * (Entrance to the land of the dead AKA Spooky Cave)
 * Team Name: Slaygamis
 * Team Members: Mihir Kolte and Paige Mockler
 * Description: Bumper and Servo program
 */

 //Servo code library
 #include<Servo.h>

 //VARIABLES
Servo servoswivel;
const int buttonPin =5;
int val;

Servo servosweep;
const int buttonPinsweep =9;
int pos = 0;

void setup() {
  // put your setup code here, to run once:
  //SERVOS
  
  servoswivel.attach(5);
  pinMode(buttonPin, INPUT);
  
  servosweep.attach(9);

  //LED
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //if button is pressed, swivel servo 180 degress
  if(digitalRead(buttonPin)==HIGH){
    //LED Turns on
    digitalWrite(LED_BUILTIN, HIGH); 
    
    //if button is pressed, servo swivels
//----------------------------------------------------------------------------------------------------

  val = analogRead(buttonPin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it for use with the servo (value between 0 and 180)
  servoswivel.write(val);                  // sets the servo position according to the scaled value
  delay(15);
  }
//----------------------------------------------------------------------------------------------------
  //if button is pressed, servo sweeps
  
  if(digitalRead(buttonPinsweep)==HIGH){
    for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
  }
    servosweep.write(pos); 
    delay(15);   
 }
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
      servosweep.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);
  }
}
