int ldrpin = A0 ; // LDR connected to analog pin A0
int ledpin = 9; // LED connected to digital pin 9
int lightthreshold = 500; // Adjust based on ambient conditions


void setup() {
    pinMode(ledpin,OUTPUT);
    Serial.begin(9600);

}

void loop() {
    int ldr_value = analogRead(ldrpin);
    Serial.println(ldr_value);
    if(ldr_value< lightthreshold){
        digitalWrite(ledpin,HIGH); // Turn on light
    }
    else {
        digitalWrite(ledpin, LOW); // Turn off light
    }
  delay(500);
}