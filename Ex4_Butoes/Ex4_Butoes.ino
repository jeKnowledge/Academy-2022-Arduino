// variavel que vai controlar o estado do butão
int BUTTONstate = 0;

// PIN do butão para o numero 8 de modo a ser mais facil de ler o código
const int BUTTONpin = 5;
// PIN da LED para o numero 12 para ser mais fácil de ler/reescrever o código
const int LEDpin = 6;

//setup corre uma vez
void setup()
{
  //definir o PIN da LED como OUTPUT, como fazemos sempre....
  pinMode(LEDpin, OUTPUT);

  // AQUI JÁ DEFINIMOS O PIN DO BUTÃO COMO INPUT!!!! em vez de output
  pinMode(BUTTONpin, INPUT); //Porque vai entrar corrente!
}

//loop está sempre a correr
void loop()
{
  // leio o estado do botão
  BUTTONstate = digitalRead(BUTTONpin);
  Serial.println(BUTTONstate);

  // se o estado do botão for HIGH
  if (BUTTONstate == HIGH)
  {
    // está a passar corrente para o pino 8, ou seja, está HIGH
    // e portanto está a ser primido

    // como está a ser primido ligo a LED
    digitalWrite(LEDpin, HIGH);
  } 
  else{
    // NÃO está a passar corrente para o pino 8, ou seja, está LOW
    // e portanto não está a ser primido

    //como não está a ser primido desligo a LED
    digitalWrite(LEDpin, LOW);
  }
}
