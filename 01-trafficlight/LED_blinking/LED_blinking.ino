void setup() {
  // put your setup code here, to run once:
  // set the LED pins as outputs
  pinMode(3, OUTPUT); // GREEN
  pinMode(4, OUTPUT); // YELLOW
  pinMode(5, OUTPUT); // RED
}

void loop() {
  // put your main code here, to run repeatedly:
  // turn on the GREEN LED
  digitalWrite(3, HIGH);
  // turn on the YELLOW LED
  digitalWrite(4, HIGH);
  // turn on the RED LED
  digitalWrite(5, HIGH);

  delay(1000); // apply a sleep 1 sec
  
  // turn off the GREEN LED
  digitalWrite(3, LOW);
  // turn off the YELLOW LED
  digitalWrite(4, LOW);
  // turn off the RED LED
  digitalWrite(5, LOW);

  delay(1000); // sleep 1 sec

}
