void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);

}

void loop() {

 digitalWrite(2, LOW);
 Serial.println("Relay = ON");
 delay(3000);
 digitalWrite(2, HIGH);
 Serial.println("Relay = OFF");
 delay(3000);
 
}
