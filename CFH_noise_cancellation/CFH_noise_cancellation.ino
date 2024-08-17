const int micPin = A0;     // mic input pin
const int speakerPin = 9;  // speaker output (PWM)

void setup() {
  pinMode(micPin, INPUT);
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  int noise = analogRead(micPin);    // read noise level
  int invertedNoise = 512 - noise;   // simple phase inversion

  analogWrite(speakerPin, invertedNoise / 2); 
}
