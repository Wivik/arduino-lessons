void setup() {
  // put your setup code here, to run once:
  // set the LED pins as outputs
  pinMode(3, OUTPUT); // GREEN
  pinMode(4, OUTPUT); // YELLOW
  pinMode(5, OUTPUT); // RED
  pinMode(12, OUTPUT); // BLUE = piedestrian
  pinMode(2, INPUT); // the switch
}

void loop() {
  // put your main code here, to run repeatedly:
  // if the button is pushed, we stop the traffic

  if (digitalRead(2) == LOW) {
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
    delay(5000);    
  }
  if (digitalRead(2) == HIGH) {
    // warn the traffic a pedestrian wants to cross
    // turn off the GREEN and RED because we don't know the state yet, and turn on the YELLOW for 2 seconds
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    delay(2000);
    // now we stop the YELLOW and starts the BLUE and RED
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    // BLUE will blink for 5 sec
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    delay(500);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    // then stop for 1sec and quit the loop
    delay(1000);
  }

  // and here goes nothing

}
