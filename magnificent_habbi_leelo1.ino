// Semáforo

const int VERMELHO = 12;
const int AMARELO  = 11;
const int VERDE    = 10;

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  digitalWrite(VERDE, HIGH);
  delay(4000);
  digitalWrite(VERDE, LOW);

  digitalWrite(AMARELO, HIGH);
  delay(2000);
  digitalWrite(AMARELO, LOW);

  digitalWrite(VERMELHO, HIGH);
  delay(5000);
  digitalWrite(VERMELHO, LOW);
}