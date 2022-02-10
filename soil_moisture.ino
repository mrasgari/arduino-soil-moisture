int sensorPin = A0; 
int sensorValue;  
int limit = 400; 

void setup() {
 Serial.begin(9600);
 pinMode (5, OUTPUT);
 pinMode (4, OUTPUT);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("Analog Value : ");
 Serial.println(sensorValue);
 
 if (sensorValue<limit) {
 digitalWrite(4, HIGH); 
 digitalWrite(5, LOW); 
 }
 else {
 digitalWrite(4, LOW);
 digitalWrite(5, HIGH); 
 }
 
 delay(1000); 
}
