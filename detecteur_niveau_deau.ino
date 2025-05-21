const int waterSensor = A0;
const int led = 8;
const int buzzer = 9;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int waterLevel = analogRead(waterSensor);
  Serial.println(waterLevel);

  if (waterLevel > 300) {  // Le seuil peut être ajuster en fonction de votre matériell
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);

  }
  else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }

  delay(500);
}
