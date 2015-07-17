int led = 9;
int diaper = 10;
int buzzer = 5;
bool flag = 0;

void playMelody() {
  tone(buzzer, 392, 100);
  delay(200);
  tone(buzzer, 440, 100);
  delay(200);
  tone(buzzer, 494, 100);
  delay(200);
  tone(buzzer, 440, 100);
  delay(300);
  tone(buzzer, 494, 100);
  delay(200);
  tone(buzzer, 392, 100);
  delay(500);
  tone(buzzer, 784, 150);
  delay(500);
}

void setup() {
  pinMode(led, OUTPUT);
  pinMode(diaper, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if (digitalRead(diaper) == 0) {
    delay(1000);
    if (digitalRead(diaper) == 0) {
      digitalWrite(led, 1);
      if (flag == 0) {
        flag = 1;
        playMelody();
      }
    }
  }
  else {
    delay(1000);
    if (digitalRead(diaper) == 1) {
      flag = 0;
      digitalWrite(led, 0);
    }
  }
}

