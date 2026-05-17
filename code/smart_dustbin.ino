#include<Servo.h> 
#define trigPin 2 
#define echoPin 3 
 
Servo myservo; 
void setup() { 
  Serial.begin (9600); 
  pinMode(trigPin, OUTPUT); 
 
  pinMode(echoPin, INPUT); 
 myservo.attach(9); 
} 
void loop() { 
  long duration, distance; 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW); 
  duration = pulseIn(echoPin, HIGH); 
  distance = (duration / 2) / 29.1; 
  if (distance < 30) { 
 
myservo.write(120);  
  } 
  else { 
    myservo.write(0); 
  } 
  delay(500); 
}