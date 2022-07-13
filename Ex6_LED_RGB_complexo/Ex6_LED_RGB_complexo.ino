//definir os PINS corretos para cada OUTPUT!
int red_light_pin= 12;
int blue_light_pin = 10;
int green_light_pin = 9;

void setup() {
  // defino todos os pins como OUTPUT
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);
}
void loop() {
  RGB_color(255, 0, 0); // Red
  delay(1000); // espera 1 segundo
  RGB_color(0, 255, 0); // Green
  delay(1000); // espera 1 segundo
  RGB_color(0, 0, 255); // Blue
  delay(1000); // espera 1 segundo
  RGB_color(255, 255, 125); // Raspberry? Isto é uma cor?
  delay(1000); // espera 1 segundo
  RGB_color(0, 255, 255); // Cyan
  delay(1000); // espera 1 segundo
  RGB_color(255, 0, 255); // Magenta
  delay(1000); // espera 1 segundo
  RGB_color(255, 255, 0); // Yellow
  delay(1000); // espera 1 segundo
  RGB_color(255, 255, 255); // White
  delay(1000); // espera 1 segundo
}

// criei uma função em que passo o valor que quero em cada tipo de cor
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  //e escrevo esse valor no respetivo PIN da LED
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}
