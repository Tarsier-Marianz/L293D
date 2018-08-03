
#define MIN_ABS_SPEED 20

//MOTOR CONTROLLER
int ENA = 5;
int IN1 = 6;
int IN2 = 7;
int IN3 = 8;
int IN4 = 9;
int ENB = 10;

int vertDegree = 0;
int horzDegree = 0;
int motorSpeed = 40;
void setup()
{ 
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
}


void loop()
{
  for(vertDegree = 0; vertDegree < 180; vertDegree++) {  // going left to right.
    setVerticalSteps(true);
  }
  for(vertDegree = 180; vertDegree > 0; vertDegree--) {  // going right to left
    setVerticalSteps(false);
  }
  for(horzDegree = 0; horzDegree < 360; horzDegree++) {  // going left to right.
    setHorizontalSteps(true);
  }
  for(horzDegree = 360; horzDegree > 0; horzDegree--) {  // going right to left
    setHorizontalSteps(false);
  }
}

void setVerticalSteps(boolean up){
   digitalWrite(IN1, up);
   digitalWrite(IN2, !up);
   delay(14);
}
void setHorizontalSteps(boolean right){
   digitalWrite(IN4, right);
   digitalWrite(IN3, !right);
   delay(14);
}
