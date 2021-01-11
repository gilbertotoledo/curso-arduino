
void setup(){
   pinMode(12,OUTPUT); //LED 1
   pinMode(11,OUTPUT); //LED 2
   pinMode(10,OUTPUT); //LED 3
   pinMode(9,OUTPUT);  //BUZZER
}

void loop(){
   int valor;
   valor = analogRead(5);
   
   if(valor==0){
     digitalWrite(12,LOW);
     digitalWrite(11,LOW);
     digitalWrite(10,LOW);
     digitalWrite(9,LOW);
   }else if(valor<50){
     digitalWrite(12,HIGH);
     digitalWrite(11,LOW);
     digitalWrite(10,LOW);
     digitalWrite(9,LOW);
   }else if(valor>=50 && valor<100){
     digitalWrite(12,HIGH);
     digitalWrite(11,HIGH);
     digitalWrite(10,LOW);
     digitalWrite(9,LOW);
   }else if(valor>=100 && valor<200){
     digitalWrite(12,HIGH);
     digitalWrite(11,HIGH);
     digitalWrite(10,HIGH);
     digitalWrite(9,LOW);
   }else{
     digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
   }
}

