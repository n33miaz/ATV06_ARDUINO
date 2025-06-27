String statusMessage;
int temperatura = 25;
int umidade = 60;

void setup() {
  Serial.begin(9600);

  statusMessage.reserve(50); 
  
  Serial.println("Monitor de Status Iniciado.");
}

void loop() {
  temperatura = random(23, 29);
  umidade = random(63, 82);    
  
  statusMessage = "TEMPERATURA: ";
  statusMessage.concat(temperatura); 
  statusMessage.concat("C, UMIDADE: "); 
  statusMessage.concat(umidade); 
  statusMessage.concat("%"); 

  Serial.println(statusMessage);

  delay(2000);
}