#include <Arduino.h>

int right_front_engine = 8;
int right_rear_engine = 9;
int left_front_engine = 10;
int left_rear_engine = 11;

int distance_sensor_1 = 12;
int distance_sensor_2 = 13;

void setup() 
{
  pinMode(right_front_engine,OUTPUT);
  pinMode(right_rear_engine,OUTPUT);
  pinMode(left_front_engine,OUTPUT);
  pinMode(left_rear_engine,OUTPUT);
}

void forward()
{
  digitalWrite(right_front_engine,LOW);
  digitalWrite(right_rear_engine,HIGH);
  digitalWrite(left_front_engine,HIGH);
  digitalWrite(left_rear_engine,LOW);
}

void Backwards()
{
  digitalWrite(right_front_engine,HIGH);
  digitalWrite(right_rear_engine,LOW);
  digitalWrite(left_front_engine,LOW);
  digitalWrite(left_rear_engine,HIGH);
}

void right()
{
  digitalWrite(right_front_engine,LOW);
  digitalWrite(right_rear_engine,HIGH);
  digitalWrite(left_front_engine,LOW);
  digitalWrite(left_rear_engine,HIGH);
}

void left()
{
  digitalWrite(right_front_engine,HIGH);
  digitalWrite(right_rear_engine,LOW);
  digitalWrite(left_front_engine,HIGH);
  digitalWrite(left_rear_engine,LOW);
}

void stop()
{
  digitalWrite(right_front_engine,LOW);
  digitalWrite(right_rear_engine,LOW);
  digitalWrite(left_front_engine,LOW);
  digitalWrite(left_rear_engine,LOW);
}

void loop() 
{

  

  if(digitalRead(distance_sensor_1) == LOW || digitalRead(distance_sensor_2) == LOW)
  {
    Backwards();
    delay(1500);
    left();
    delay(900);
    
  }
  else
  {
   forward();
  }


    
  
}


  
