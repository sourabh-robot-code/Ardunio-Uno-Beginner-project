# Ardunio Uno Project no.3 Distance detection Using sensor. 
int trigPin = 12;
int echoPin = 9;

int ledPin = 2;   // LED connected to pin 2

long duration;
float distance;

void setup() {
  Serial.begin(9600);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {

  // Trigger pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read echo
  duration = pulseIn(echoPin, HIGH);

  // Convert to distance (cm)
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // LED condition
  if (distance < 10) {
    digitalWrite(ledPin, HIGH);   // LED ON
  } else {
    digitalWrite(ledPin, LOW);    // LED OFF
  }

  delay(300);
}
