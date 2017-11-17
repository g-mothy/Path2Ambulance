const int trigPin = 2;
const int echoPin = 4;

const int led = 12;
const int led2 = 10;
const int led3 = 8;

void setup() {
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(13,OUTPUT);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}

void loop()
{
  
  long duration, cm;

 
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);

 
  
  duration = pulseIn(echoPin, HIGH);

 
  cm = microsecondsToCentimeters(duration);
  
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
 
  
  if(cm<=50){
    
    digitalWrite(led,HIGH);
    delay(100);
  }
  else {
    
    digitalWrite(led,LOW);
    delay(100);
  }

  if(cm<=50){

    digitalWrite(led2,HIGH);
    delay(100);
  }
  else {
   
    digitalWrite(led2,LOW);
    delay(100);
  }

 if(cm<=50){
    
    digitalWrite(led3,HIGH);
    delay(100);
  }
  else {
   
    digitalWrite(led3,LOW);
    delay(100);
  }

  delay(600);
  
}



long microsecondsToCentimeters(long microseconds)
{
 
  return microseconds / 29 / 2;
}
