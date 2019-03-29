// Turn On and Off LED Based on our Customization.

 int ledPIN = 2;
 
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(ledPIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);                       // wait for a second
  digitalWrite(ledPIN, LOW);    // turn the LED off by making the voltage LOW
  delay(5000);                       // wait for a second
}
