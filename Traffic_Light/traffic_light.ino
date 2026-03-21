
int red= 2;
int yellow=4;
int green=6;
void setup() {
  // put your setup code here, to run once:
    pinMode(red,OUTPUT);
    pinMode(yellow,OUTPUT);
    pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(red, HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(green , LOW);
    delay(2000);
    digitalWrite(red, LOW);
    digitalWrite(yellow,HIGH);
    digitalWrite(green , LOW);
    delay(2000);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
    digitalWrite(green ,HIGH);
    delay(2000);
    digitalWrite(green, LOW);
}
