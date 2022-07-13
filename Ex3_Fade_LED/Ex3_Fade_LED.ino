// para definir uma variavel eu faço
// <TIPO DE VARIAVEL> <nome dela> = <valor>

// em python não é preciso dizer qual é que é o tipo da variavel
// ele escolhe por si automaticamente.

int led = 9;          // dizer qual é o PIN onde a LED está
int luminosidade = 0; // controlar a luminosidade (começa no 0)
int diferenca = 5;

// setup corre uma vez
void setup()
{
  // não te esqueças de dizer que a LED está no PINO 9
  pinMode(led, OUTPUT);
}

// o loop corre para sempre
void loop()
{
  // quando o loop começa,
  // diz que a led se vai acender o valor da luminosidade
  analogWrite(led, luminosidade); // aqui já não é digitalWrite!
  // É analogWrite porque eu quero que ela acenda um valor especifico

  // aumentar a luminosidade pelo valor da diferença, da primeira vez é 5.
  luminosidade = luminosidade + diferenca;

  // se a luminosidade passar o valor máximo que o PIN suporta (255) ou do valor minimo (0)
  // em C ou é representado como duas barras verticais (||)
  if (luminosidade <= 0 || luminosidade >= 255)
  {
    // inverte o valor da diferença
    diferenca = -diferenca;

    // Quando a luminosidade chegar 255, a diferença passa a ser -5.
    // ou seja, fico a tirar luminosidade.

    // Quandoa luminosidade chegar 0, a diferença passa a ser 5.
    // ou seja, passo a acrescentar luminosidade.
  }

  // espera 30 millisegundos para ter um tempo entre diferenças para ser mais precéptivel
  delay(30);
}
