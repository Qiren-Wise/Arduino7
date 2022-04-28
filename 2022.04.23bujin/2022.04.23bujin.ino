
#include <Stepper.h>

Stepper mystepper(100,3,4,5,6);

void setup(){
  pinMode(7, INPUT);
  mystepper.setSpeed(10);
}

void loop(){
  if (digitalRead(7) == false)   //声控/热敏/循迹/触摸/红外/倾斜等  0真  1假
  {
    mystepper.step(10);

  } else {
    mystepper.step(0);

  }

}
/*
# include <Stepper.h>

Stepper mystepper(100,3,4,5,6);

void setup (){
  pinMode(7,INPUT);
  mystepper.setSpeed(10);
  }

  void loop(){
    if(digitalRead(7)==false)
    {
      mystepper.step(10);
      }else{
        mystepper.step(0);
        }
    }
    */
