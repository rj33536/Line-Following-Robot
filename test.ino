int rm1=6,rm2=7,lm1=4,lm2=5   ,s1=8,s2=9,s3=10,s4=11,s5=12,vleft=10,vright=11;
float integral=0,difference=0,error=0,kp=60,ki=0.01,kd=5,lastError=0,v1=128,v2=128,MaxIntegral=50; 
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

Serial.begin(9600);
}
void loop(){
if(v1>0 && v2>0){
  digitalWrite(lm1,HIGH);
digitalWrite(lm2,LOW);
digitalWrite(rm1,HIGH);
digitalWrite(rm2,LOW);
}

if(v1<0 && v2<0){
  digitalWrite(lm1,LOW);
digitalWrite(lm2,HIGH);
digitalWrite(rm1,LOW);
digitalWrite(rm2,HIGH);
}

if(v1>0 && v2<0){
  digitalWrite(lm1,HIGH);
digitalWrite(lm2,LOW);
digitalWrite(rm1,LOW);
digitalWrite(rm2,HIGH);
}
if(v1<0 && v2>0){
  digitalWrite(lm1,LOW);
digitalWrite(lm2,HIGH);
digitalWrite(rm1,HIGH);
digitalWrite(rm2,LOW);
}

  
for(int i=0;i<5;i++){
  if(analogRead(i+6)==true){
    switch(i){
      case 0:
      error=-2;
      break;
      case 1:
      error=-1;
      break;
      case 2:
      error=-0;
      break;
      case 3:
      error=1;
      break;
      case 4:
      error = 2;
      break;
    }
  }
}


//pid stuff
difference = error-lastError;
integral+=error;
lastError=error;
if(integral>MaxIntegral)
  integral=40;
v1=128+(kp*error+ki*integral+kd*difference);
v2=128-(kp*error+ki*integral+kd*difference);
//pid stuff ends
analogWrite(vleft,v1);
analogWrite(vright,v2);
}
