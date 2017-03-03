#include "CurieIMU.h"
int ax, ay, az;
int gx, gy, gz;
int Front_Right = 3;
int Front_Left = 5;
int Back_Right = 6;
int Bark_Left = 9;
float yaw_rate = 0;
float pitch_rate = 0;
float roll_rate = 0;
float yaw = 0;
float pitch = 0;
float roll = 0;
float x_accel = 0;
float y_accel = 0;
float z_accel = 0;
float x_veloc = 0;
float y_veloc = 0;
float z_veloc = 0;
float x_disp = 0;
float y_disp = 0;
float z_disp = 0;
int Blue = 13;
int Red = 12;
int Green = 11; 

void setup() {
  // put your setup code here, to run once:
pinMode(Blue, OUTPUT);
pinMode(Red, OUTPUT);
pinMode(Green,OUTPUT);
CurieIMU.begin();
if(CurieIMU.begin())
{
  flash_LED(Blue, 100, 5);
}
else
{
  while(true)
  {
    flash_LED(Red, 100, 5);
  }
}
calibrate();
flash_LED(Green, 100, 5);
}

void loop() {
  // put your main code here, to run repeatedly:

}
