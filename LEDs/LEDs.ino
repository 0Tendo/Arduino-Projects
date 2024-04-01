//330 resistors each LED

int red = 12;
int yellow = 11;
int green = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(green,HIGH);
  digitalWrite(yellow,HIGH);
  digitalWrite(red,HIGH);
  delay(100);
  digitalWrite(green,LOW);
  delay(400);
  digitalWrite(yellow,LOW);
  delay(500);
}
