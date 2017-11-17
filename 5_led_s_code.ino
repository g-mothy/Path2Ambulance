const int led  = 12;
const int led2 = 11;
const int led3 = 10;
const int led4 = 9;
const int led5 = 8;

void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=10;i>-6;i--)
{
 if((i<=5)&&(i>-1))
 {
  digitalWrite(8,HIGH);
  delay(200);
  } 
  else {
    digitalWrite(8,LOW);
  delay(200);
    }

     if((i<=4)&&(i>-2))
 {
  digitalWrite(9,HIGH);
  delay(200);
  } 
  else {
    digitalWrite(9,LOW);
  delay(200);
    }
    
     if((i<=3)&&(i>-3))
 {
  digitalWrite(10,HIGH);
  delay(200);
  } 
  else {
    digitalWrite(10,LOW);
  delay(200);
    }
    if((i<=2)&&(i>-4))
 {
  digitalWrite(11,HIGH);
  delay(200);
  } 
  else {
    digitalWrite(11,LOW);
  delay(200);
    }
    if((i<=1)&&(i>-5))
 {
  digitalWrite(12,HIGH);
  delay(200);
  } 
  else {
    digitalWrite(12,LOW);
  delay(200);
    }
    Serial.println(i);
  delay(1000);
  }
}
