int led = 9;
int diaper = 10;
int buzzer = 5;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(diaper, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  digitalWrite(buzzer, 1);
  delay(500);
  digitalWrite(buzzer, 0);
  delay(500);
  if (digitalRead(diaper) == 0) {
    digitalWrite(led, 1);
  }
  else {
    digitalWrite(led, 0);
  }
}
