#define STCP_PIN 4
#define SHCP_PIN 3
#define DS_PIN 2

void setup() {
  Serial.begin(9600);

  // Displays information
  Serial.println("74HC595 - LEDS");
  Serial.print("DS_PIN: ");
  Serial.println(DS_PIN);
  Serial.print("STCP_PIN: ");
  Serial.println(STCP_PIN);
  Serial.print("SHCP_PIN: ");
  Serial.println(SHCP_PIN);

  // Configure the pins
  pinMode(DS_PIN, OUTPUT);
  pinMode(STCP_PIN, OUTPUT);
  pinMode(SHCP_PIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i++) {
    Serial.println("[loop] Counting... current number: ");
    Serial.println(i);

    // Writes data to shift register
    digitalWrite(STCP_PIN, LOW);
    shiftOut(DS_PIN, SHCP_PIN, MSBFIRST, i);
    digitalWrite(STCP_PIN, HIGH);
    delay(200);
  }
}