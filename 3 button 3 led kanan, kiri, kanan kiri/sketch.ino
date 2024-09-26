const int buttonPin1 = 10;
const int buttonPin2 = 9;
const int buttonPin3 = 8;
const int blueLedPin = 13;
const int redLedPin = 12;
const int yellowLedPin = 11;

bool button1Pressed = false;
bool button2Pressed = false;
bool button3Pressed = false;

void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(blueLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
}

void loop() {
  if(digitalRead(buttonPin1) == HIGH && !button1Pressed) {
    button1Pressed = true;
    ledSequence(blueLedPin, redLedPin, yellowLedPin);
  }
  else if (digitalRead(buttonPin2) == HIGH && !button2Pressed) {
    button2Pressed = true;
    ledSequence(yellowLedPin, redLedPin, blueLedPin);
  }
  else if (digitalRead(buttonPin3) == HIGH && !button3Pressed) {
    button3Pressed = true;
    ledSequence(blueLedPin, redLedPin, yellowLedPin);
    ledSequence(yellowLedPin, redLedPin, blueLedPin);
  }
  else {
    digitalWrite(blueLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
  }

  resetFlags();
}

void ledSequence(int led1, int led2, int led3) {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(500);
  digitalWrite(led3, LOW);
}

void resetFlags() {
if (digitalRead(buttonPin1) == LOW) button1Pressed = false;
if (digitalRead(buttonPin2) == LOW) button2Pressed = false;
if (digitalRead(buttonPin3) == LOW) button3Pressed = false;

}