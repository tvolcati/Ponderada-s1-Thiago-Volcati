void setup() { //função de setup
  pinMode(10, OUTPUT); //configurando porta 10 como output
}

void loop(){  //função de loop
  digitalWrite(10, HIGH); // liberando energia da porta 10
  delay(2000); // aguardando 2 segundos (2000 milisegundos)
  digitalWrite(10, LOW); // fechando saída de energia da porta 10
  delay(2000); // aguarda 2 segundos antes de reiniciar o loop
}