 /*************************************************************************
 **                                                                      **
 **    Descripició del programa                                          **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
const int ledPin[] = {9, 10, 11, 12, 13};
int temps = 100;

 //******  Setup  *********************************************************
 void setup () {
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  pinMode(ledPin[4], OUTPUT);
 }


 //******  Loop  **********************************************************
 void loop () {
  for (int ledNum=0; ledNum<4; ledNum++)
  {
   digitalWrite(ledPin[ledNum], HIGH);
   delay(temps);
   digitalWrite(ledPin[ledNum], LOW);
    
  }
  for (int ledNum=4; ledNum>0; ledNum--)
  {
   digitalWrite(ledPin[ledNum], HIGH);
   delay(temps);
   digitalWrite(ledPin[ledNum], LOW);
   
 }
}
