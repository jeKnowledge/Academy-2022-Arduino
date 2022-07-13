// LEMBRA: o PIN de TRIG neste componente serve para o componente ir para "ranging mode" em vez de deteção só
// LEMBRA: o PIN de ECHO é que vai enviar um sinal se um objeto foi detetado

int echoPin = 2;  // define que o PIN de ECHO é o 2
int trigPin = 3;  // define que o PIN de TRIGGER é o 3

// variaveis que vamos precisar
double duracao; // variavel para a duração da onda de som ir e voltar, é esta variavel que vamos dar print
int distance; //  variavel para com a duração em cima calcular a distancia através da velocidade do som :OOOO

//double velocidadeSOM = 343; // em metros por segundo
double velocidadeSOMmicro = 0.0343; // em centimetros por microssegundos 


void setup() {
  pinMode(trigPin, OUTPUT); // O TRIG PIN vai ser OUTPUT porque vamos escrever informação nele
  pinMode(echoPin, INPUT); // O ECHO PIN vai ser INPUT porque vamos receber informação nele

  Serial.begin(9600); // Começar a comunicação monitor
  Serial.println("Posso escrever agora yayy"); // escrever algum texto no monitor de começo
  Serial.println("#### Distâncias ####");
}
void loop() {
  // dizer que o trigPIN está desligado durante 2 microssegundos para limpar o estado atual
  digitalWrite(trigPin, LOW); 
  delay(2);

  // Ativar o TRIGPIN, HIGH (ACTIVE) por 10 microsseconds
  digitalWrite(trigPin, HIGH);
  delay(10);

  //desliga-lo de novo
  digitalWrite(trigPin, LOW);

  // Ler do ECHOPIN quanto é que demorou a onda de som ir, bater no objeto e chegar outra vez.
  duracao = pulseIn(echoPin, HIGH); // Captura a duração de um pulso em microssegundos num pino (que pode ser HIGH ou LOW ).
  Serial.print("Onda de som demorou: ");
  Serial.print(duracao);
  Serial.println(" microssegundos no total");

  // Calcular a distância do objeto. Temos de ter em atenção que o tempo foi o tempo de ir e vir! 
  distance = duracao * velocidadeSOMmicro / 2; // velocidadeSOMmicro dividida por dois (go and back)
  // Apresenta a distância em centimetros
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}
