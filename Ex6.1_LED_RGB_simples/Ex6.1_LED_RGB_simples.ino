int red_light_pin= 12;   // Pin da luz vermelha
int blue_light_pin = 10; // Pin da luz azul
int green_light_pin = 9; // Pin da luz verde

void setup() {
  pinMode(red_light_pin, OUTPUT);   // Pin da luz vermelha como OUTPUT
  pinMode(green_light_pin, OUTPUT); // Pin da luz azul como OUTPUT
  pinMode(blue_light_pin, OUTPUT);  // Pin da luz verde como OUTPUT

  analogWrite(red_light_pin, 0);     // Não quero meter nenhum vermelho
  analogWrite(green_light_pin, 255); // Quero meter o máximo verde
  analogWrite(blue_light_pin, 0);    // Não quero meter nenhum azul
}
void loop() {
  
}
