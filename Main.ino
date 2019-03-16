#include <Arduino.h>

// Functions
void handleSerial();

void setup()
{
    Serial.begin(115200);
    Serial.println("Ready!");
}

void loop()
{
    handleSerial();
    
}

byte serialData;
void handleSerial()
{
    if (Serial.available())
    {
        serialData = Serial.read();

        Serial.write(serialData);
    }
}