/*
This example instead using 2 ouput pin to control direction of the motor,
we used a one only ouput pin and save another one
*/
//MOTOR CONTROLLER
int ENA = 5;
int DIRECTION_PIN = 4;

int vertDegree = 0;
int horzDegree = 0;
int motorSpeed = 40;
void setup()
{ 
  Serial.begin(9600);
  pinMode(DIRECTION_PIN, OUTPUT);
  pinMode(ENA, OUTPUT);
}


void loop()
{
  for(vertDegree = 0; vertDegree < 180; vertDegree++) {  // going forward.
    setDirection(true);
  }
  for(vertDegree = 180; vertDegree > 0; vertDegree--) {  // going backward
    setDirection(false);
  } 
}

void setDirection(boolean forward){
   digitalWrite(DIRECTION_PIN, up);
   delay(14);
}
