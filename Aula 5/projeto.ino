int pinR = 12;
int pinG = 10;
int pinB = 8;

void setup(){
  pinMode(pinR,OUTPUT);
  pinMode(pinG,OUTPUT);
  pinMode(pinB,OUTPUT);
}

void loop(){
  int vR, vG, vB;
  int cor = analogRead(0);
  int tempo = analogRead(1);
  if(cor<25){
    vR = 1;
    vG = 0;
    vB = 0;  
  }
  else if(cor>=25 && cor<50){
    vR = 0;
    vG = 1;
    vB = 0;
  }
  else if(cor>=50 && cor<75){
    vR = 0;
    vG = 0;
    vB = 1;
  }
  else if(cor>=75 && cor<100){
    vR = 1;
    vG = 1;
    vB = 0;
  }
  else if(cor>=125 && cor<150){
    vR = 0;
    vG = 1;
    vB = 1;
  }
  else if(cor>=150 && cor<175){
    vR = 1;
    vG = 0;
    vB = 1;
  }

  else{
    vR = 1;
    vG = 1;
    vB = 1;  
  }
  
  
  digitalWrite(pinR,0);
  digitalWrite(pinG,0);
  digitalWrite(pinB,0);
  
  delay(tempo);
  
  digitalWrite(pinR,vR);
  digitalWrite(pinG,vG);
  digitalWrite(pinB,vB);
  
  delay(tempo);
}
  
