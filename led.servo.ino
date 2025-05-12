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
