#define RELAY1 7

void setup() {
  Serial.begin(9600);
  pinMode(RELAY1, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    char data = Serial.read();

    if (data == '1') {
      digitalWrite(RELAY1, HIGH);
    }
    else if (data == '0') {
      digitalWrite(RELAY1, LOW);
    }
  }
}
