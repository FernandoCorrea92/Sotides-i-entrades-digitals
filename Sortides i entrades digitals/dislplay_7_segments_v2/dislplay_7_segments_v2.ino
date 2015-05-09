 /*************************************************************************
 **                                                                      **
 **    Display 7 segments mostra número que introdueixis per pantalla    **
 **   del 0 al 9                                                         **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
int Num;
const int ledPin[] = {6, 7, 8, 9, 10, 11, 12, 13};


 //******  Setup  *********************************************************
 void setup ()
 {
  pinMode(ledPin[0], OUTPUT);
  pinMode(ledPin[1], OUTPUT);
  pinMode(ledPin[2], OUTPUT);
  pinMode(ledPin[3], OUTPUT);
  pinMode(ledPin[4], OUTPUT);
  pinMode(ledPin[5], OUTPUT);
  pinMode(ledPin[6], OUTPUT);
  pinMode(ledPin[7], OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Entra un numero del 0 al 9");

 }


 //******  Loop  **********************************************************
 void loop () 
 {
  {
  while (Serial.available() > 0) {  
  Num = Serial.parseInt(); 
  Serial.println(Num);
    switch (Num)
    {
    case 0:
      {
      Num0();
      break;
      }
    
    case 1:
      {
      Num1();
      break;
      }
    
    case 2:
      {  
      Num2();
      break;
      }
    
    case 3:
      {
      Num3();
      break;
      }
    
    case 4:
      {
      Num4();
      break;
      }
    
    case 5:
      {
      Num5();
      break;
      }
    
    case 6:
      {
      Num6();
      break;
      }
    
    case 7:
      {
      Num7();
      break;
      }
    
    case 8:
      {
      Num8();
      break;
      }
    
    case 9:
      {
      Num9();
      break;
      }
    default:
      {
      defecte();
      break;
      }
    }
    Serial.read() == '\n';
    Serial.println("");
    Serial.println("Entrar un numero del 0 al 9");
  }
  }
}
void Num0()
{
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], HIGH);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], HIGH);
 digitalWrite(ledPin[5], HIGH);
 digitalWrite(ledPin[6], LOW);
 digitalWrite(ledPin[7], HIGH);
}

 void Num1() 
 {
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], HIGH);
 digitalWrite(ledPin[3], LOW);
 digitalWrite(ledPin[4], LOW);
 digitalWrite(ledPin[5], LOW);
 digitalWrite(ledPin[6], LOW);
 digitalWrite(ledPin[7], LOW);
 
 }

 void Num2()
 {
 digitalWrite(ledPin[0], LOW);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], HIGH);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], HIGH);
 digitalWrite(ledPin[5], HIGH);
 digitalWrite(ledPin[6], HIGH);
 digitalWrite(ledPin[7], LOW);
 }

 void Num3()
 {
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], HIGH);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], HIGH);
 digitalWrite(ledPin[5], LOW);
 digitalWrite(ledPin[6], HIGH);
 digitalWrite(ledPin[7], LOW);
 }

 void Num4()
 {
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], HIGH);
 digitalWrite(ledPin[3], LOW);
 digitalWrite(ledPin[4], LOW);
 digitalWrite(ledPin[5], LOW);
 digitalWrite(ledPin[6], HIGH);
 digitalWrite(ledPin[7], HIGH);
 }

 void Num5()
 {
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], LOW);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], HIGH);
 digitalWrite(ledPin[5], LOW);
 digitalWrite(ledPin[6], HIGH);
 digitalWrite(ledPin[7], HIGH);
 }

 void Num6()
 {
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], LOW);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], HIGH);
 digitalWrite(ledPin[5], HIGH);
 digitalWrite(ledPin[6], HIGH);
 digitalWrite(ledPin[7], HIGH);
 }

 void Num7()
 {
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], HIGH);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], LOW);
 digitalWrite(ledPin[5], LOW);
 digitalWrite(ledPin[6], LOW);
 digitalWrite(ledPin[7], LOW);
 }

 void Num8()
 {
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], HIGH);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], HIGH);
 digitalWrite(ledPin[5], HIGH);
 digitalWrite(ledPin[6], HIGH);
 digitalWrite(ledPin[7], HIGH);
 }

 void Num9()
 {
 digitalWrite(ledPin[0], HIGH);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], HIGH);
 digitalWrite(ledPin[3], HIGH);
 digitalWrite(ledPin[4], HIGH);
 digitalWrite(ledPin[5], LOW);
 digitalWrite(ledPin[6], HIGH);
 digitalWrite(ledPin[7], HIGH);
 }

 void defecte()
 {
 digitalWrite(ledPin[0], LOW);
 digitalWrite(ledPin[1], HIGH);
 digitalWrite(ledPin[2], LOW);
 digitalWrite(ledPin[3], LOW);
 digitalWrite(ledPin[4], LOW);
 digitalWrite(ledPin[5], LOW);
 digitalWrite(ledPin[6], LOW);
 digitalWrite(ledPin[7], LOW);
 }
