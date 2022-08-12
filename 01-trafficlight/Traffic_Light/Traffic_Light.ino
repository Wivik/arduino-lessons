void setup() {
  // put your setup code here, to run once:
  // set the LED pins as outputs
  pinMode(3, OUTPUT); // GREEN
  pinMode(4, OUTPUT); // YELLOW
  pinMode(5, OUTPUT); // RED
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // turn on the GREEN LED for 5 seconds
  // turn off the RED light BTW, FULL THROTTLE !!!!!!!
  digitalWrite(5, LOW);
  digitalWrite(3, HIGH);
  delay(5000);

  // brace for impact, the YELLOW LED is turning on and the GREEN one is turning off
  // YELLOW duration = 2 seconds
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  delay(2000);

  
  // unless you're a road maniac you should stop now, because the RED LIGHT is turning on and the YELLOW is turning off
  // RED light duration = 10 seconds
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(10000);
  // and here goes nothing

}
