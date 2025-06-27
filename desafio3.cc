long numeroSecreto; 
const int MIN_NUMERO = 1;
const int MAX_NUMERO = 100;

void setup() {
  Serial.begin(9600); 

  randomSeed(analogRead(A0));

  numeroSecreto = random(MIN_NUMERO, MAX_NUMERO); 

  Serial.println("--- Jogo de Adivinhacao ---");
  Serial.print("Pensei em um numero entre 1 e 99. Tente adivinhar!");
  Serial.println(""); 
}

void loop() {
  if (Serial.available() > 0) {
    String entradaUsuario = Serial.readStringUntil('\n');
    
    int palpite = entradaUsuario.toInt();

    Serial.print("Seu palpite: ");
    Serial.println(palpite);

    if (palpite < numeroSecreto) {
      Serial.println("Errado! O numero secreto e MAIOR!");
    } else if (palpite > numeroSecreto) {
      Serial.println("Errado! O numero secreto e MENOR!");
    } else {
      Serial.println("PARABENS! Voce acertou!");
      Serial.println("Vamos jogar de novo. Pensei em um novo numero.");
      Serial.println(""); 
      numeroSecreto = random(MIN_NUMERO, MAX_NUMERO);
    }
  }
}