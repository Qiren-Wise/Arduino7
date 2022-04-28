void setup(){
  pinMode(4, INPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop(){
  if (digitalRead(4) == false) {
    digitalWrite(6,HIGH); //任意器件
    tone(5,659);  //歌曲 beep
    delay(5000);

  } else {
    noTone(5);
    digitalWrite(6,LOW);

  }

}
/*
void setup()
{
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  PINMode(6,OUTPUT);
  }

  void loop ()
  {
    if (digitalRead(4) == false)
       {
        digitalWrite(6,HIGH);
        tone(5,569);
        delay(5000);
         }else{
          noTone(5);
          digitalWrite(6,LOW);
          }
         
    }
    */
    
