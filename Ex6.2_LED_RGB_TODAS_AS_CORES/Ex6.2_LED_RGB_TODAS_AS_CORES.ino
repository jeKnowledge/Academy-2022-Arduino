int red_light_pin= 12;   // Pin da luz vermelha
int blue_light_pin = 10; // Pin da luz azul
int green_light_pin = 9; // Pin da luz verde

int valor_vermelho = 255;
int valor_verde = 0;
int valor_azul = 0;

void setup() {
  pinMode(red_light_pin, OUTPUT);   // Pin da luz vermelha como OUTPUT
  pinMode(green_light_pin, OUTPUT); // Pin da luz azul como OUTPUT
  pinMode(blue_light_pin, OUTPUT);  // Pin da luz verde como OUTPUT
}
void loop() {
  // primeiro escrevo na LED os valores de vermelho, verde e azul
  analogWrite(red_light_pin, valor_vermelho);
  analogWrite(green_light_pin, valor_verde);
  analogWrite(blue_light_pin, valor_azul);

  // fazer por esta ordem: R - G - B
  // 255 - 0 - 0 = vermelho, adiciona até ter o valor máximo 255 no verde
  // 255 - 255 - 0 = amarelo
  // 0 - 255 - 0 = verde
  // 0 - 255 - 255 = azul
  // 0 - 0 - 255 = azul
  // 255 - 0 - 255 = magenta
  // 255 - 0 - 0 = vermelho
  // e volta ao inicio
  
  int fase = 0; // 0 = vermelho, 1 = verde, 2 = azul, 3 = vermelho
  int diferenca = 5;

  if (fase == 0) {
    valor_vermelho = valor_vermelho + diferenca;
    if (valor_vermelho <= 0 || valor_vermelho >= 255) {
      diferenca = -diferenca;
      if (valor_vermelho <= 0) {
        valor_vermelho = 0;
      } else {
        valor_vermelho = 255;
      }
    }
  } else if (fase == 1) {
    valor_verde = valor_verde + diferenca;
    if (valor_verde <= 0 || valor_verde >= 255) {
      diferenca = -diferenca;
      if (valor_verde <= 0) {
        valor_verde = 0;
      } else {
        valor_verde = 255;
      }
    }
  } else if (fase == 2) {
    valor_azul = valor_azul + diferenca;
    if (valor_azul <= 0 || valor_azul >= 255) {
      diferenca = -diferenca;
      if (valor_azul <= 0) {
        valor_azul = 0;
      } else {
        valor_azul = 255;
      }
    }
  } else if (fase == 3) {
    valor_vermelho = valor_vermelho + diferenca;
    if (valor_vermelho <= 0 || valor_vermelho >= 255) {
      diferenca = -diferenca;
      if (valor_vermelho <= 0) {
        valor_vermelho = 0;
      } else {
        valor_vermelho = 255;
      }
    }
  }




  // wait for 30 milliseconds before looping again
  delay(30);
}
