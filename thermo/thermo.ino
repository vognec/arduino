const int temperaturePin = 0;
const int sensorPin = 1;
const int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  float voltage, degreesC, degreesF, sensorValue;
  int thermoStat;

  voltage = getVoltage(temperaturePin);
  degreesC = (voltage - 0.5) * 100.0;
  degreesF = degreesC * (9.0/5.0) + 32.0;

  sensorValue = analogRead(sensorPin);
  thermoStat = map(sensorValue, 0, 1023, 30, 100);

  if (thermoStat > degreesF){
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
  
  Serial.print("voltage: ");
  Serial.print(voltage);
  Serial.print("  deg F: ");
  Serial.print(degreesF);
  Serial.print("  thermoStat: ");
  Serial.println(thermoStat);
   
  delay(1000); 
}


float getVoltage(int pin)
{
  return (analogRead(pin) * 0.004882814);   // analog reading * (reference voltage / max digital value)
}

