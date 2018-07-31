#include <Servo.h>
Servo soldc;
Servo solde;
Servo genunchi;
Servo talpa1;
Servo talpa2;
Servo soldsc;
Servo soldse;
Servo genunchis;
Servo talpa1s;
Servo talpa2s;
Servo manas;
Servo manad;
Servo cap;
int x = 0;
int y = 40;
int z = 132;
float d = 30;
float talp = 10;
int pos=0;
int q=0;
//--------------
int a = 10;
int b = 134;
float c = 0;
float other = 50;
int pasi = 0;
void setup()
{
  soldc.attach(3);
  solde.attach(2);
  genunchi.attach(7);
  soldsc.attach(4);
  soldse.attach(5);
  genunchis.attach(6);
  manas.attach(8);
  manad.attach(9);
  cap.attach(10);
  //------------------------------------------------------------------------------
 genunchi.write(180);
 soldc.write(132);
  solde.write(40);
  genunchis.write(10);
  soldsc.write(134);
  soldse.write(10);
  talpa1s.write(50);
 publi();
  delay(4500);
}
void loop()
{
  if (pasi < 10) {
    while (x < 91) { 
      x++;
      y++;+
      z--;
      d = d + 1.64;
      talp -= 0.45;
      genunchi.write(d);
      delay(8);
      soldc.write(z);
      solde.write(y);
      delay(3);
    }
        while (x > -35) {
      x--;
      y--;
      z++;
      d = d - 1.64;
      talp += 0.45;
      genunchi.write(d);
      delay(8);
      soldc.write(z);
      solde.write(y);
      delay(3);
    }
    while (pos < 141) {
        genunchis.write(a);
        pos++;
        a++;
        b--;
        c = c + 2.5;
        other -= 0.25;
        delay(8);
        soldsc.write(b);
        soldse.write(a);
        delay(3);
      }
       while (pos > 0) {
          genunchis.write(a);
          pos--;
          a--;
          b++;
          c = c - 2.4;
          other += 0.25;
          delay(8);
          soldsc.write(b);        
          soldse.write(a);
          delay(3);        
        }
     pasi++;
  }
  else {
  genunchi.write(180);
  soldc.write(132);
  solde.write(40);
  talpa1.write(70);
  genunchis.write(10);
  soldsc.write(134);
  soldse.write(10);
  talpa1s.write(50);
  }
  
}
void publi(){
for(int r=0;r<=2;r++){ 
  while(q<100) 
  {  
    q++;
    manas.write(180-q); 
    manad.write(q);
    cap.write(q);
    delay(15);           
  } 
  while(q>0) 
  {     
    q--;                           
    manas.write(180-q); 
    manad.write(q);
    cap.write(q);
    delay(15);                  
  } 
  }
}
