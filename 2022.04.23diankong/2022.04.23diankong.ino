void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(2)==false) //按钮
{
  digitalWrite(3,HIGH); //任意器件
  digitalWrite(4,HIGH);
  delay(1000);
  }else
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    delay(1000);
    }
}
