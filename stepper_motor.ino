#define S1 4
#define S2 5
#define S3 6
#define S4 7

void setup() {
Serial.begin(9600);
  pinMode(S1,OUTPUT);
  pinMode(S2, OUTPUT);
 pinMode(S3, OUTPUT);
 pinMode(S4, OUTPUT);// put your setup code here, to run once:

}

void loop() {
 int value =digitalRead(9);
 Serial.println(value);
 if (value == 0)
{
 digitalWrite(S1,HIGH);
digitalWrite(S2,LOW);
digitalWrite(S3,LOW);
digitalWrite(S4,LOW);
delay(10);
digitalWrite(S1,LOW);
digitalWrite(S2,HIGH);
digitalWrite(S3,LOW);
digitalWrite(S4,LOW);
delay(10);
digitalWrite(S1,LOW);
digitalWrite(S2,LOW);
digitalWrite(S3,HIGH);
digitalWrite(S4,LOW);
delay(10);
digitalWrite(S1,LOW);
digitalWrite(S2,LOW);
digitalWrite(S3,LOW);
digitalWrite(S4,HIGH);
delay(10);
} // put your main code here, to run repeatedly:
 }
