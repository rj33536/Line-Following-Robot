#define ls A2

#define rs A5

int rm2=3,rm1=2,lm2=5,lm1=4,v =132  ;

void setup() 
{

pinMode(lm1,OUTPUT);

pinMode(lm2,OUTPUT);

pinMode(rm1,OUTPUT);

pinMode(rm2,OUTPUT);
  
pinMode(A0,OUTPUT);

pinMode(A1,OUTPUT);

pinMode(ls,INPUT);

pinMode(A3,OUTPUT);

pinMode(A4,OUTPUT);

pinMode(rs,INPUT);

pinMode(10,INPUT);

pinMode(9,OUTPUT);

digitalWrite(A1,LOW);

digitalWrite(A0,HIGH);

digitalWrite(A4,LOW);

digitalWrite(A3,HIGH);

Serial.begin(9600);

}
  
void loop()
 {

int left=analogRead(ls);

int right=analogRead(rs);

  if((left<=500)&&(right>=500))
{

digitalWrite(lm1,HIGH);

digitalWrite(lm2,LOW);

digitalWrite(rm1,LOW);

digitalWrite(rm2,HIGH);

analogWrite(9,v);

analogWrite(10,v);

}
 
else
 if((left>=500)&&(right<=500))

{

digitalWrite(lm1,LOW);

digitalWrite(lm2,HIGH);

digitalWrite(rm1,HIGH);

digitalWrite(rm2,LOW);

analogWrite(9,v);

analogWrite(10,v);

}
 
 else
  if((left>=500)&&(right>=500))

{

digitalWrite(lm1,LOW);

digitalWrite(lm2,HIGH);

digitalWrite(rm1,HIGH);

digitalWrite(rm2,LOW);

analogWrite(9,v);

analogWrite(10,v);

}

else

{

digitalWrite(lm1,HIGH);

digitalWrite(lm2,LOW);

digitalWrite(rm1,HIGH);

digitalWrite(rm2,LOW);

analogWrite(9,v);

analogWrite(10,v);

}

}

