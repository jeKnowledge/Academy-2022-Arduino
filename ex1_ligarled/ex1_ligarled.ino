// setup corre uma vez
void setup() {
  // definir o modo dos pinos
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
}

// o loop corre para sempre
void loop() {
    digitalWrite(8, HIGH); //liga a LED 8
    digitalWrite(10, LOW); //desliga a LED 10
    delay(1000);
    digitalWrite(10, HIGH); //liga a LED 10
    digitalWrite(8, LOW);   //desliga a LED 8

  delay(1000); // espera 1 segundo
}
