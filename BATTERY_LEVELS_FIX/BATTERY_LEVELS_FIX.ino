int LED = 12;
int Switch1 = 2;  // pin 2 to attach our switch to the hero

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(Switch1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(Switch1) == HIGH) {
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    digitalWrite(LED, HIGH);
    delay(100);
  } else {
    digitalWrite(LED, LOW);  // turn LED OFF
  }
}
