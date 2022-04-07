/*
 * AET Yomotsu Hirasaka Enclosure
 * (Entrance to the land of the dead AKA Spooky Cave)
 * Team Name: Slaygamis
 * Team Members: Mihir Kolte and Paige Mockler
 * Description: Bumper and Servo program
 */

 //Servo code library
 #include<Servo.h>;

 //VARIABLES
 Servo myServo;
 const int buttonPin =7;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //if button is pressed, swivel servo 180 degress
  if(digitalRead(buttonPin)==HIGH){

  myServo.write(180);
  }
  else{
    myServo.write(0);
  }
}
