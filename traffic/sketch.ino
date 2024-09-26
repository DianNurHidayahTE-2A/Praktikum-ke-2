int red1LedPin = 5;
int yellow1LedPin = 6;
int green1LedPin = 7;
int red2LedPin = 10;
int yellow2LedPin = 9;
int green2LedPin = 8;
int red3LedPin = 13;
int yellow3LedPin = 12;
int green3LedPin = 11;

void setup() {
  // put your setup code here, to run once:
pinMode(red1LedPin, OUTPUT);
pinMode(yellow1LedPin, OUTPUT);
pinMode(green1LedPin, OUTPUT);
pinMode(red2LedPin, OUTPUT);
pinMode(yellow2LedPin, OUTPUT);
pinMode(green2LedPin, OUTPUT);
pinMode(red3LedPin, OUTPUT);
pinMode(yellow3LedPin, OUTPUT);
pinMode(green3LedPin, OUTPUT);
digitalWrite(red1LedPin, HIGH);
digitalWrite(red2LedPin, HIGH);
digitalWrite(red3LedPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
jalan_satu();
jalan_dua();
jalan_tiga();

}

void jalan_satu() {
  digitalWrite(red1LedPin, LOW);
  digitalWrite(green1LedPin, HIGH);
  delay(2000);
  digitalWrite(green1LedPin, LOW);
  digitalWrite(yellow1LedPin, HIGH);
  delay(2000);
  digitalWrite(yellow1LedPin, LOW);
  digitalWrite(red1LedPin, HIGH);
}

void jalan_dua() {
  digitalWrite(red2LedPin, LOW);
  digitalWrite(green2LedPin, HIGH);
  delay(2000);
  digitalWrite(green2LedPin, LOW);
  digitalWrite(yellow2LedPin, HIGH);
  delay(2000);
  digitalWrite(yellow2LedPin, LOW);
  digitalWrite(red2LedPin, HIGH);
}

void jalan_tiga() {
  digitalWrite(red3LedPin, LOW);
  digitalWrite(green3LedPin, HIGH);
  delay(2000);
  digitalWrite(green3LedPin, LOW);
  digitalWrite(yellow3LedPin, HIGH);
  delay(2000);
  digitalWrite(yellow3LedPin, LOW);
  digitalWrite(red3LedPin, HIGH);

}