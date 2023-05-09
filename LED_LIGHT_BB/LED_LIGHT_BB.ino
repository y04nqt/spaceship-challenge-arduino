int Light = 12; // Pin location on the board

void setup() {
  pinMode(Light, OUTPUT); // use location and set mode to macro output
  digitalWrite(Light, HIGH); // use location and set value to macro high
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Light, LOW);
  delay(50);
  digitalWrite(Light, HIGH);
  delay(50);
  digitalWrite(Light, LOW);
  delay(1000);
}
