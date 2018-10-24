int rm1=6,rm2=7,lm1=4,lm2=5,s1=8,s2=9,s3=10,s4=11,s5=12,vleft=10,vright=11;
float v1=128,v2=128,pos=2; 
void setup() {
  //SETTING PINMODES
pinMode(s1,INPUT);
pinMode(s2,INPUT);
pinMode(s3,INPUT);
pinMode(s4,INPUT);
pinMode(s5,INPUT); 
pinMode(lm1,OUTPUT);
pinMode(lm2,OUTPUT);
pinMode(rm1,OUTPUT);
pinMode(rm2,OUTPUT);

pinMode(vleft,OUTPUT);
pinMode(vright,OUTPUT);


analogWrite(vleft,v1);
analogWrite(vright,v2);
Serial.begin(9600);
}
void loop(){
for(int i=0;i<5;i++){
  if(analogRead(i+6)==true){
   pos=i;
   switch(i){
    case 0:
      digitalWrite(lm1,LOW);
      digitalWrite(lm2,HIGH);
      digitalWrite(rm1,HIGH);
      digitalWrite(rm2,LOW);
      break;
   case 1:
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,HIGH);
      digitalWrite(rm2,LOW);
      break;
   case 2:
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,HIGH);
      digitalWrite(rm2,LOW);
      break;
   case 3:
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,LOW);
      digitalWrite(rm2,HIGH);
      break;
   case 4:
      digitalWrite(lm1,HIGH);
      digitalWrite(lm2,LOW);
      digitalWrite(rm1,LOW);
      digitalWrite(rm2,HIGH);
      break;
   
   }
  }
}
}
