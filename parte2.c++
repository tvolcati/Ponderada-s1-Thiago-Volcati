void setup() {  //função de setup
  pinMode(10, OUTPUT); //configurando porta 10 como output
  pinMode(LED_BUILTIN, OUTPUT); //configurando o led interno como saída de energia
}

void loop(){  //função de loop
  digitalWrite(10, HIGH); // liberando energia da porta 10
  digitalWrite(LED_BUILTIN, LOW); //desliga a saída de energia no led interno
  delay(1000); // aguardando 2 segundos (2000 milisegundos)
  digitalWrite(10, LOW); // fechando saída de energia da porta 10
  digitalWrite(LED_BUILTIN, HIGH);// abrea saída de energia do led interno
  delay(1000); // aguarda 2 segundos antes de reiniciar o loop
}