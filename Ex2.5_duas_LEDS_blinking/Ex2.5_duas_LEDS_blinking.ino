// para definir uma variavel eu faço
// <TIPO DE VARIAVEL> <nome> = <valor>

//variavel que vai ajudar a definir qual é a LED que eu ligo
bool ledaacender = false;

// setup corre uma vez
void setup() {
  // definir o modo dos pinos
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
}

// o loop corre para sempre
void loop() {

  // se a variavel "ledaacender" for verdade
  if(ledaacender == true) {
    digitalWrite(8, HIGH); //liga a LED 8
    digitalWrite(10, LOW); //desliga a LED 10
    ledaacender = false;
  } else { // se não
    digitalWrite(10, HIGH); //liga a LED 10
    digitalWrite(8, LOW);   //desliga a LED 8
    ledaacender = true;
  }
  
  // tambem podia ter invertido apenas a variavel
  // ledaacender = !ledaacender;
  // em vez de ter escrito dentro do loop os novos valores
  
  
  delay(1000); // espera 1 segundo
}
