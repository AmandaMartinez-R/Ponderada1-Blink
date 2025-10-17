void setup() {
  // Define que a saída será o led embutido
  pinMode(LED_BUILTIN, OUTPUT);
}

// define a função de loop do led
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(1000);                      
  digitalWrite(LED_BUILTIN, LOW);   
  delay(1000);                      
}