#include <SoftwareSerial.h>
SoftwareSerial BT1(8, 9); // RX | TX
const int MESSAGE_MOVE = 0x03;
void setup()
  { 
    delay (500) ;              // Espera antes de encender el modulo
    Serial.begin(9600);
    BT1.begin(9600); 
  }
 
void loop()
  {  if (BT1.available())
           Serial.write(BT1.read());
     if (Serial.available())
        BT1.write(Serial.read());
  }
