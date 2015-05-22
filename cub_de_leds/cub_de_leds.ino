const int niv[3] = {12, 11, 13};
const int col[9] = {6, 7, 4, 2, 3, 5, 9, 8, 10};
const int time = 100;


//********** Setup ****************************************************************
void setup()
{
  pinMode(col[0], OUTPUT);
  pinMode(col[1], OUTPUT);
  pinMode(col[2], OUTPUT);
  pinMode(col[3], OUTPUT);
  pinMode(col[4], OUTPUT);
  pinMode(col[5], OUTPUT);
  pinMode(col[6], OUTPUT);
  pinMode(col[7], OUTPUT);
  pinMode(col[8], OUTPUT);
  pinMode(niv[0], OUTPUT);
  pinMode(niv[1], OUTPUT);
  pinMode(niv[2], OUTPUT);
}

//********** Loop *****************************************************************
void loop()
{


amunt();
amunt();
atzar();
esq();
esp();
esp();
atzar();


}

void esq()
{
digitalWrite(niv[0],HIGH);
digitalWrite(niv[1],HIGH);
digitalWrite(niv[2],HIGH);

  for (int num =0; num < 9; num++)
  {
   digitalWrite(col[num], HIGH);
   delay(time);
  }
  
  for (int num =0; num < 9; num++)
  {
   digitalWrite(col[num], LOW);
   delay(time);
  }
}

 void esp()
{
 digitalWrite(niv[0],HIGH);
 digitalWrite(niv[1],HIGH);
 digitalWrite(niv[2],HIGH);
 digitalWrite(col[0],HIGH);
  
  for (int num =1; num < 9; num++)
  {
    digitalWrite(col[num], HIGH);
    delay(time);
    digitalWrite(col[num], LOW);
 }
}

void x()
{
  digitalWrite(niv[0],HIGH);
  digitalWrite(niv[1],HIGH);
  digitalWrite(niv[2],HIGH);
  digitalWrite(col[1],HIGH);
  digitalWrite(col[3],HIGH);
  digitalWrite(col[5],HIGH);
  digitalWrite(col[7],HIGH);
  delay(time*10);
  digitalWrite(col[1],LOW);
  digitalWrite(col[3],LOW);
  digitalWrite(col[5],LOW);
  digitalWrite(col[7],LOW);
  delay(time*2);
  digitalWrite(col[0],HIGH);
  digitalWrite(col[2],HIGH);
  digitalWrite(col[4],HIGH);
  digitalWrite(col[6],HIGH);
  digitalWrite(col[8],HIGH);
  delay(time*10);
  digitalWrite(col[0],HIGH);
  digitalWrite(col[2],HIGH);
  digitalWrite(col[4],HIGH);
  digitalWrite(col[6],HIGH);
  digitalWrite(col[8],HIGH);
  delay(time*2);
  digitalWrite(col[0],LOW);
  digitalWrite(col[2],LOW);
  digitalWrite(col[4],LOW);
  digitalWrite(col[6],LOW);
  digitalWrite(col[8],LOW);
  delay(time*2);
}  

void atzar()

{
 for (int i=0; i<10; i++)
{ 
 int Randniv = random(0,3);
 int Randcol = random(0,9);
 
  digitalWrite(niv[Randniv], HIGH);
  digitalWrite(col[Randcol], HIGH);
  delay(100);
  digitalWrite(niv[Randniv], LOW);
  digitalWrite(col[Randcol], LOW);
  delay(100);
 }

}

void amunt()
  {
  digitalWrite(col[0], HIGH);
  digitalWrite(col[1], HIGH);
  digitalWrite(col[2], HIGH);
  digitalWrite(col[3], HIGH);
  digitalWrite(col[4], HIGH);
  digitalWrite(col[5], HIGH);
  digitalWrite(col[6], HIGH);
  digitalWrite(col[7], HIGH);
  digitalWrite(col[8], HIGH);

  for (int i=0; i<3; i++)
  {
  digitalWrite(niv[i], HIGH);
  delay(time*2);
 }
 for (int i=0; i<3; i++)
  {
  digitalWrite(niv[i], LOW);
  delay(time*2);
 }
 
digitalWrite(col[0], LOW);
digitalWrite(col[1], LOW);
digitalWrite(col[2], LOW);
digitalWrite(col[3], LOW);
digitalWrite(col[4], LOW);
digitalWrite(col[5], LOW);
digitalWrite(col[6], LOW);
digitalWrite(col[7], LOW);
digitalWrite(col[8], LOW); 
}
