  int ses=A0;
  int led1=2;
  int led2=3;
  int led3=4;
  int led4=5;
  int led5=6;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);

}

void loop() {
  long sayac=0;
  for(int i=0;i<100;i++){
    sayac+=analogRead(ses);
  }

  sayac=sayac/100;
 
  if(sayac>=100) digitalWrite(led1,HIGH); else; digitalWrite(led1,LOW);
  if(sayac>=200) digitalWrite(led2,HIGH); else; digitalWrite(led2,LOW);
  if(sayac>=300) digitalWrite(led3,HIGH); else; digitalWrite(led3,LOW);
  if(sayac>=400) digitalWrite(led4,HIGH); else; digitalWrite(led4,LOW);
  if(sayac>=500) digitalWrite(led5,HIGH); else; digitalWrite(led5,LOW);

  delay(10);
  Serial.println(sayac);
}
