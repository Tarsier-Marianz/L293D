
int HORZ_POTPIN	= A0;
int VERT_POTPIN	= A1;

int L293D_ENA1	= 5;
int L293D_PIN1	= 6;
int L293D_PIN2	= 7;

int L293D_ENA2	= 10;
int L293D_PIN3	= 8;
int L293D_PIN4	= 9;

void setup() { 
    pinMode(L293D_ENA1, OUTPUT);
    pinMode(L293D_ENA2, OUTPUT);
 
    pinMode(L293D_PIN1, OUTPUT);
    pinMode(L293D_PIN2, OUTPUT);
    pinMode(L293D_PIN3, OUTPUT);
    pinMode(L293D_PIN4, OUTPUT);
}
 
void loop() {
	float horzValue =  map(analogRead(HORZ_POTPIN), 0, 1023, 0, 255);
	float vertValue =  map(analogRead(VERT_POTPIN), 0, 1023, 0, 255);
	
    analogWrite(L293D_ENA1, horzValue); 
    digitalWrite(L293D_PIN1, HIGH);
    digitalWrite(L293D_PIN2, LOW);
	
    analogWrite(L293D_ENA2, vertValue);	
    digitalWrite(L293D_PIN3, HIGH);
    digitalWrite(L293D_PIN4, LOW); 
}
