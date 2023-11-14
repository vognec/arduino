const int motorPin = 9;

void setup()
{
 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
     serialSpeed();
}

void serialSpeed()
{
  int speed;
  Serial.println("Enter 0-255");

  while(true)  
  {
    while (Serial.available() > 0)
    {
      
      speed = Serial.parseInt();

      speed = constrain(speed, 0, 255);
      
      Serial.print("Setting speed to ");
      Serial.println(speed);
  
      analogWrite(motorPin, speed);
      delay(1000);
      
    }
  }
}



