void setup() {
  pinMode(LED_BUILTIN, OUTPUT); //setando o led do arduino como saída

}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); //acendendo o led
  delay(1000); //aguardando 1 segundo
  digitalWrite(LED_BUILTIN, LOW); //apagando o led
  delay(1000); //aguardando 1 segundo
}