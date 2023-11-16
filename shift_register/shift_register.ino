int data_pin = 2; 
int clock_pin = 3;
int latch_pin = 4;

void setup()
{

  pinMode(data_pin, OUTPUT);
  pinMode(clock_pin, OUTPUT);  
  pinMode(latch_pin, OUTPUT);
}


void loop()
{

  randomLED();

}


void shiftWrite(int desiredPin, boolean desiredState)

  byte data = 0;

  bitWrite(data,desiredPin,desiredState);
  
  shiftOut(data_pin, clock_pin, MSBFIRST, data);

  digitalWrite(latch_pin, HIGH);  // latch data 
  digitalWrite(latch_pin, LOW);   // prepare for next data
}


void randomLED()
{
  int index;
  int delay_time = 100;
  
  index = random(8);	
  
  shiftWrite(index, HIGH);	
  delay(delay_time);		
  shiftWrite(index, LOW);	
}

