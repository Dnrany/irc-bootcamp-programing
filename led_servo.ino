//LED
void setup() {
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  pinMode(21, OUTPUT); 
}

void loop() {
  digitalWrite(21, HIGH);       
  Serial.println("LED ON");
  delay(1000);                  

  digitalWrite(21, LOW);        
  Serial.println("LED OFF");
  delay(1000);                  
}


//link wokwi
https://wokwi.com/projects/430751788344279041

//180
#include <ESP32Servo.h>  

Servo servo;  
int angle = 0;  
const int servoPin = 16;  

void setup() {
  Serial.begin(115200);  
  Serial.println("Hello, ESP32!");

  servo.attach(servoPin);
}

void loop() {
  for (angle = 0; angle <= 180; angle++) {
    servo.write(angle);  
    delay(15); 
    Serial.print("Servo angle: ");
    Serial.println(angle);  
  }

  for (angle = 180; angle >= 0; angle--) {
    servo.write(angle); 
    delay(15); 
    Serial.print("Servo angle: ");
    Serial.println(angle); 
  }

  delay(1000);  
}

//link 180
https://wokwi.com/projects/430754869109416961 
