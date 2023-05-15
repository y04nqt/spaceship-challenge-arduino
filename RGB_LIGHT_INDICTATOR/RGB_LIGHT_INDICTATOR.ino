int RED = 11;
int GREEN = 10;
int BLUE = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void RGB_color(int red_val, int green_val, int blue_val) {
  analogWrite(RED, red_val);
  analogWrite(GREEN, green_val);
  analogWrite(BLUE, blue_val);
}

void loop() {
  RGB_color(125, 0, 0); // Red
  delay(800);
  RGB_color(0, 125, 0); // Green
  delay(800);
  RGB_color(0, 0, 125); // Blue
  delay(800);
  RGB_color(64, 32, 0); // yellow
  delay(800);
  RGB_color(125, 0, 125); // purple
  delay(800);
  RGB_color(125, 125, 125); // white
  delay(2000);
}
