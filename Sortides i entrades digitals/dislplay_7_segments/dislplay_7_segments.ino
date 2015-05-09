 /*************************************************************************
 **                                                                      **
 **    Display 7 segments                                                **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
const int ledPin[] = {6, 7, 8, 9, 10, 11, 12, 13};
int temps = 1000;

 //******  Setup  *********************************************************
 void setup () {
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  pinMode(ledPin[4], OUTPUT);
  pinMode(ledPin[5], OUTPUT);
  pinMode(ledPin[6], OUTPUT);
  pinMode(ledPin[7], OUTPUT);
 
 }


 //******  Loop  **********************************************************
 void loop () {
 
 digitalWrite(ledPin[0], LOW);
 digitalWrite(ledPin[1], LOW);
 digitalWrite(ledPin[2], LOW);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], LOW);
 digitalWrite(ledPin[5], HIGH);
 digitalWrite(ledPin[6], HIGH);
 digitalWrite(ledPin[7], HIGH);
 delay(temps);
 }
