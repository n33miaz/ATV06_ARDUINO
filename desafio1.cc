#include <math.h> 

double anguloAtual = 0.0;            
const double incrementoAngulo = 0.1; 
const double raio = 50.0;            

void setup() {
  Serial.begin(9600);
  Serial.println("Simulando movimento circular...");
}

void loop() {
  double coordX = raio * cos(anguloAtual);
  double coordY = raio * sin(anguloAtual);

  Serial.print("Angulo: ");
  Serial.print(anguloAtual); 
  Serial.print(" -> X: ");
  Serial.print(coordX);
  Serial.print(", Y: ");
  Serial.println(coordY); 

  anguloAtual = anguloAtual + incrementoAngulo;

  if (anguloAtual >= (2 * M_PI)) {
    anguloAtual = 0;
  }

  delay(100);
}