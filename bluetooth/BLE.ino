#include <SoftwareSerial.h>
int led = 2;
SoftwareSerial Bluetooth(7, 8);

void setup() {  
  Serial.begin(9600);
  Bluetooth.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {  
  int input;
  
  if (Bluetooth.available()) {
    input = Bluetooth.read();  
    Serial.print("Input received: ");
    Serial.println(input);
    if (input == 1)
    {
      Serial.println("LED ON");
      digitalWrite(led, HIGH);
    }
    else if (input == 2)
    {
      Serial.println("LED OFF");
      digitalWrite(led, LOW);
    }  
  }
}