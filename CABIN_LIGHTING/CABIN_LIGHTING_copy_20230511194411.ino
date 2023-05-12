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
    digitalWrite(LED1, HIGH);          // turn LED ON
  } else {
    digitalWrite(LED1, LOW);  // turn LED OFF
  }

  if (digitalRead(SWITCH2) == HIGH) {  //check SWITCH #2
    digitalWrite(LED2, HIGH);          // turn LED ON
  } else {
    digitalWrite(LED2, LOW);  // turn LED OFF
  }

  if (digitalRead(SWITCH3) == HIGH) {  //check SWITCH #3
    digitalWrite(LED3, HIGH);          // turn LED ON
  } else {
    digitalWrite(LED3, LOW);  // turn LED OFF
  }
}
