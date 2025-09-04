int ledRojo = 13;
int ledAmarillo = 12;
int ledVerde = 11;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Rojo
  digitalWrite(ledRojo, HIGH);
  delay(5000);
  digitalWrite(ledRojo, LOW);

  // Verde
  digitalWrite(ledVerde, HIGH);
  delay(5000);
  digitalWrite(ledVerde, LOW);

  // Amarillo
  digitalWrite(ledAmarillo, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo, LOW);
}
