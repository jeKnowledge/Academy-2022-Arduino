// Os homens que fizeram esta linguagem, para ser mais fácil de ler disseram que o pino // 13 seria sempre igual a LED_BUILTIN nos vamos usar mesmo 13 para ser mais facil
// perceber

// the setup function runs once when you press reset or power the board
void setup()
{
  // Define o pino 13 como OUTPUT (vai sair corrente não entrar)
  pinMode(13, OUTPUT);
  
  // Escreve no pino 13 que é um pino Digital, HIGH, ou seja, 1 ou "ON".
  digitalWrite(13, HIGH);
}

// the loop function runs over and over again forever
void loop()
{
  //não vou fazer mais nada, logo não tenho que escrever nada no loop
  
  
}
