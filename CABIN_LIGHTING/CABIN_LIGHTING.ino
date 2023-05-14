int LED1 = 10;
int LED2 = 11;
int LED3 = 12;
int SWITCH1 = 2;
int SWITCH2 = 3;
int SWITCH3 = 4;


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(SWITCH1, INPUT);
  pinMode(SWITCH2, INPUT);
  pinMode(SWITCH3, INPUT);
}

void loop() {
  if (digitalRead(SWITCH1) == HIGH) {  //check SWITCH #1
    digitalWrite(LED1, HIGH); // turn LED ON
    delay(100);
    digitalWrite(LED1, LOW);
    delay(300);
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(300);
    digitalWrite(LED1, HIGH);
  } else {
    digitalWrite(LED1, LOW);  // turn LED OFF
  }

  if (digitalRead(SWITCH2) == HIGH) {  //check SWITCH #2
    digitalWrite(LED2, HIGH); // turn LED ON
    delay(100);
    digitalWrite(LED2, LOW);
    delay(300);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(300);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
    delay(300);
    digitalWrite(LED2, HIGH);
  } else {
    digitalWrite(LED2, LOW);  // turn LED OFF
  }

  if (digitalRead(SWITCH3) == HIGH) {  //check SWITCH #3
    digitalWrite(LED3, HIGH);          // turn LED ON
    delay(2000);
    digitalWrite(LED3, LOW);
  } else {
    digitalWrite(LED3, LOW);  // turn LED OFF
  }
}
