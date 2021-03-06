/*
  http://www.bajdi.com
  L9110 motor driver controlling 2 small DC motors
*/

const int AIA = 9;  // (pwm) pin 9 connected to pin A-IA
const int AIB = 5;  // (pwm) pin 5 connected to pin A-IB
const int BIA = 10; // (pwm) pin 10 connected to pin B-IA
const int BIB = 6;  // (pwm) pin 6 connected to pin B-IB

byte speed = 155;  // change this (0-255) to control the speed of the motors
byte slowSpeed = 85;


void setup() {
  pinMode(AIA, OUTPUT); // set pins to output
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);
}

void loop() {
  forward();
  delay(500);
  stop();
  delay(500);
  //  backward();
  //  delay(1000);
  //  left();
  //  delay(1000);
  //  right();
  //  delay(1000);
}

/*
void backward()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
  analogWrite(BIA, 0);
  analogWrite(BIB, speed);
}
*/

void forward()
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
}

void left()
{
  analogWrite(AIA, slowSpeed);
  analogWrite(AIB, 0);
  analogWrite(BIA, 0);
  analogWrite(BIB, slowSpeed);
}

void right()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, slowSpeed);
  analogWrite(BIA, slowSpeed);
  analogWrite(BIB, 0);
}

void stop()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, 0);
  analogWrite(BIA, 0);
  analogWrite(BIB, 0);
}
