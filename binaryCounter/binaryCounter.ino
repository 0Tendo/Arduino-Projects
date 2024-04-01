int pin4 = 12;
int pin3 = 11;
int pin2 = 10;
int pin1 = 9;
int delayo = 1000;

uint8_t zero = "LOW";
uint8_t one = "HIGH";

void setup() {
  // put your setup code here, to run once:
  pinMode(pin4,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  for(int i = 0; i < 16; i++)
  {
      digitalWrite(pin1,zero);
      digitalWrite(pin2,zero);
      digitalWrite(pin3,zero);
      digitalWrite(pin4,zero);
      delay(delayo);
      digitalWrite(pin1,one);
      digitalWrite(pin2,zero);
      digitalWrite(pin3,zero);
      digitalWrite(pin4,zero);
      delay(delayo);
      digitalWrite(pin1,zero);
      digitalWrite(pin2,one);
      digitalWrite(pin3,zero);
      digitalWrite(pin4,zero);
      delay(delayo);
      digitalWrite(pin1,one);
      digitalWrite(pin2,one);
      digitalWrite(pin3,zero);
      digitalWrite(pin4,zero);
      delay(delayo);
      digitalWrite(pin1,zero);
      digitalWrite(pin2,zero);
      digitalWrite(pin3,one);
      digitalWrite(pin4,zero);
      delay(delayo);
      digitalWrite(pin1,one);
      digitalWrite(pin2,zero);
      digitalWrite(pin3,one);
      digitalWrite(pin4,zero);
      delay(delayo);
      digitalWrite(pin1,zero);
      digitalWrite(pin2,one);
      digitalWrite(pin3,one);
      digitalWrite(pin4,zero);
      delay(delayo);
      digitalWrite(pin1,one);
      digitalWrite(pin2,one);
      digitalWrite(pin3,one);
      digitalWrite(pin4,zero);
      delay(delayo);
      digitalWrite(pin1,zero);
      digitalWrite(pin2,zero);
      digitalWrite(pin3,zero);
      digitalWrite(pin4,one);
      delay(delayo);
      digitalWrite(pin1,one);
      digitalWrite(pin2,zero);
      digitalWrite(pin3,zero);
      digitalWrite(pin4,one);
      delay(delayo);
      digitalWrite(pin1,zero);
      digitalWrite(pin2,one);
      digitalWrite(pin3,zero);
      digitalWrite(pin4,one);
      delay(delayo);
      digitalWrite(pin1,one);
      digitalWrite(pin2,one);
      digitalWrite(pin3,zero);
      digitalWrite(pin4,one);
      delay(delayo);
      digitalWrite(pin1,zero);
      digitalWrite(pin2,zero);
      digitalWrite(pin3,one);
      digitalWrite(pin4,one);
      delay(delayo);
      digitalWrite(pin1,one);
      digitalWrite(pin2,zero);
      digitalWrite(pin3,one);
      digitalWrite(pin4,one);
      delay(delayo);
      digitalWrite(pin1,zero);
      digitalWrite(pin2,one);
      digitalWrite(pin3,one);
      digitalWrite(pin4,one);
      delay(delayo);
      digitalWrite(pin1,one);
      digitalWrite(pin2,one);
      digitalWrite(pin3,one);
      digitalWrite(pin4,one);
      delay(delayo);

  }
  delay(2000);

}
