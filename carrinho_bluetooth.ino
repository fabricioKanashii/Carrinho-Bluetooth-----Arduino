// Motor A
#define IN1 2
#define IN2 3

// Motor B
#define IN3 4
#define IN4 5

char comando;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Bluetooth
  Serial.begin(9600);

  parar();
}

void loop() {

  if (Serial.available() > 0) {

    comando = Serial.read();

    switch (comando) {

      case 'F':
      case 'f':
        frente();
        break;

      case 'B':
      case 'b':
        tras();
        break;

      case 'L':
      case 'l':
        esquerda();
        break;

      case 'R':
      case 'r':
        direita();
        break;

      case 'S':
      case 's':
        parar();
        break;
    }
  }
}

// ==========================================
// MOVIMENTOS
// ==========================================

void frente() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void tras() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void esquerda() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void direita() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void parar() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}
