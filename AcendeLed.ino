
int  ledvermelho = 7;
int  ledamarelo = 6;
int  ledverde = 5;
int  pledvermelho = 4;
int  pledverde = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledvermelho, OUTPUT);
  pinMode(ledamarelo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(pledvermelho, OUTPUT);
  pinMode(pledverde, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(ledvermelho == HIGH)
  {
    delay(3000);
     digitalWrite(ledamarelo, LOW);
      digitalWrite(ledverde, LOW);
       digitalWrite(pledvermelho, LOW);
        digitalWrite(pledverde, HIGH);
  }
  if(ledamarelo == HIGH)
  {
      delay(2000);
     digitalWrite(ledvermelho, LOW);
      digitalWrite(ledverde, LOW);
       digitalWrite(pledvermelho, LOW);
        digitalWrite(pledverde, LOW);  
  }
  if(ledverde == HIGH)
  {
    delay(3000);
     digitalWrite(ledamarelo, LOW);
      digitalWrite(ledvermelho, LOW);
       digitalWrite(pledvermelho, HIGH);
        digitalWrite(pledverde, LOW);
  }
  
}
