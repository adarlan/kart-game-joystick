
int pinLed = 2;
int pinButton = 3;
int pinPotentiometer = A0;

char TURN_ON_LED          = 'L';
char TURN_OFF_LED         = 'D';
char BUTTON_STATUS        = 'B';
char POTENTIOMETER_STATUS = 'P';

void setup() {
    pinMode(pinLed, OUTPUT);
    pinMode(pinButton, INPUT);
    pinMode(pinPotentiometer, INPUT);

    Serial.begin(9600);
}

void serialEvent() {
  
    char inputChar = (char) Serial.read();

    if (inputChar == TURN_ON_LED) {
        digitalWrite(pinLed, HIGH);

    } else if (inputChar == TURN_OFF_LED) {
        digitalWrite(pinLed, LOW);
        
    } else if (inputChar == BUTTON_STATUS) {
        Serial.println(digitalRead(pinButton));
      
    } else if (inputChar == POTENTIOMETER_STATUS) {
        Serial.println(analogRead(pinPotentiometer));
    }
}

void loop() {
  
}

