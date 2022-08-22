#include<Arduino.h>
//Declaring all variables as integers
int Z,Y,X,W;

//Code released under GNU GPL.  Free to use for anything.
void disp_7447(int D, int C, int B, int A)
{
  digitalWrite(2, A); //LSB
  digitalWrite(3, B); 
  digitalWrite(4, C); 
  digitalWrite(5, D); //MSB

}
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, INPUT);  
    pinMode(7, INPUT);
    pinMode(8, INPUT);
    pinMode(9, INPUT);
    
}

// the loop function runs over and over again forever
void loop() {
  
W = digitalRead(0);//LSB  
X = digitalRead(1);  
Y = digitalRead(0);  
Z = digitalRead(1);//MSB  
  
disp_7447(0,0,0,0);
delay(2500);
disp_7447(0,0,0,1);
delay(2500);
disp_7447(0,0,1,0);
delay(2500);
disp_7447(0,0,1,1);
delay(2500);
disp_7447(0,1,0,0);
delay(2500);
disp_7447(0,1,0,1);
delay(2500);
disp_7447(0,1,1,1);
delay(2500);
disp_7447(1,0,0,0);
delay(2500);
disp_7447(1,0,0,1);
delay(2500);
disp_7447(1,0,1,0);
delay(2500);  
}
