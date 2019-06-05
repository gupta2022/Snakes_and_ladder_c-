/*
   PROJECT ON 
   SNAKES AND LADDERS
   MADE BY 
   GAURAV GUPTA
*/
#include<iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
char a[50],e[50];
void check(int&c)
{
  if(c==21)
  c=98;

   if(c==95)
   c=22;
  if(c==99)
  c=9;
  if(c==10)
  c=55;
  if(c==51)
  c=83;
  if(c==35)
  c=38;
  if(c==7)
  c=28;
  if(c==91)
  c=54;
  if(c==71)
  c=32;
  }

void drawbox()
  {
   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;
   initgraph(&gdriver, &gmode, " ");
    /* read result of initialization */
   errorcode = graphresult();

   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
//********************BOX AND CIRCLE MAIN SCREEN**************
   line(30,30,30 ,450 );
   line(30,30,600,30);
   line(30,450,600,450);
   line(600,30,600,450);
   circle(310,240,200);
  }
//*******************GRID**************
   void grid()
  {  settextstyle( 4, HORIZ_DIR, 4);
   for(int i =30; i <=450;i+=42)
     line(0,i,420,i);
   for(int j=0;j<=420;j+=42)
     line(j,30,j,450);

//*****************FILLING GRID WITH NO. ****************
    int x=0;
    for( j =1;j<=10;j++)
   {
     itoa(j,a,10);
     outtextxy(x,410,a);
      x+=42;
   }
    x=0;
    for( j =20;j>10;j--)
   {
    itoa(j,a,10);
    outtextxy(x,368,a);
    x+=42;
   }
   x=0;
   for( j =21;j<=30;j++)
   {
    itoa(j,a,10);
    outtextxy(x,326,a);
    x+=42;
   }
   x=0;
   for( j =40;j>30;j--)
   {
    itoa(j,a,10);
    outtextxy(x,284,a);
    x+=42;
    }
     x=0;
   for( j =41;j<=50;j++)
   {
    itoa(j,a,10);
    outtextxy(x,242,a);
    x+=42;
    }
    x=0;
   for( j =60;j>50;j--)
   {
    itoa(j,a,10);
    outtextxy(x,200,a);
    x+=42;
    }
    x=0;
   for( j =61;j<=70;j++)
   {


   itoa(j,a,10);
    outtextxy(x,158,a);
    x+=42;
    }
    x=0;
   for( j =80; j>70;j--)
   {
    itoa(j,a,10);
    outtextxy(x,116,a);
    x+=42;
    }
       x=0;
   for( j =81;j<=90;j++)
   {
    itoa(j,a,10);
    outtextxy(x,74,a);
    x+=42;
    }
    j=100;
     settextstyle( 4, HORIZ_DIR, 3);
    itoa(j,a,10);
    outtextxy(1,32,a);

    x=42;
   for( j =99; j>90;j--)
   {
    itoa(j,a,10);
     settextstyle( 4, HORIZ_DIR, 4);
    outtextxy(x,32,a);                x+=42;
    }
    //**************SNAKES AND LADDER DRAWING COMM. *******
    setlinestyle(3,4,3);
    setcolor(1);        // RED FOR SNAKES
    line(10,340,94,36);
    line(400,420,230,210);
    line(230,300,310,178);
    line(400,210,106,98);
    line(274,420,320,340);
    settextstyle( 7, HORIZ_DIR, 3);
    outtextxy(421,92,"LADDERS");
    line(489,86,520,86);
    setcolor(4);      //BLUE  FOR LADDER
    line(52,40,360,420);
    line(400,40,279,210);
    line(400,135,360 ,300 );
    line(230,40,62,342);

     settextstyle( 7, HORIZ_DIR, 3);
    outtextxy(421,32,"SNAKES");
    line(489,32,520,32);
     }
//***********************************************



int main(void)
{

   int c=0,b,d=0,g;
   char n[50];
   char na[250];
   char nb[260];
   char m[50];
   randomize();
   clrscr();
   drawbox();
   setbkcolor(4);
   settextstyle(4 , HORIZ_DIR, 4);
   outtextxy(70,200,"   SNAKES AND LADDERS ");
   getch();
   cleardevice();
    settextstyle( 3, HORIZ_DIR, 2);
      outtextxy(120,200,"Enter The Name Of Player 1");
      gotoxy(60,14);
      cin>>na;
      outtextxy(120,260,"Enter The Name Of Player 2");
      gotoxy(60,18);
      cin>>nb;
      getch();
      cleardevice();
   grid();
   setbkcolor(3);
   setcolor(5);
   settextstyle( 3, HORIZ_DIR, 2);
   outtextxy(140,0,"   SNAKES AND LADDERS ");
   outtextxy(470,128,"SCORE");
   outtextxy(570,128,"DICE");
   line(470,165,535 ,165);
   line(570,165,650,165);
   outtextxy(429,170,na);
   outtextxy(429,212,nb);
   int i= 0;
   do{
   getch();

   g=i%2;
   if(g==0)
  { setcolor(3);
    b=random(6)+1;
   outtextxy(535,170,a);
    outtextxy(590,170,n);

    do{
 b=random(6)+1;
   if(c+b<=100)
   c=c+b;
   }while(b==6);
   check(c);
     setcolor(5);
   itoa(b,n,10);
   itoa(c,a,10);
   outtextxy(590,170,n);
   outtextxy(535,170,a);

   if(c==d)
   d=0;

   }
   else
   {
       setcolor(3);
      outtextxy(595,210,m);
   outtextxy(535,210,e);

   do{
    b=random(6)+1;
    if(d+b<=100)
   d=b+d;
   }while(b==6);

   check(d);
   setcolor(5);
   itoa(b,m,10);
   itoa(d,e,10);
   outtextxy(595,210,m);
   outtextxy(535,210,e);
   if(d==c)
   c=0;
   }
   i=i+1;
  }while(c!=100 && d!=100);
  settextstyle( 3, HORIZ_DIR, 3);
  if(c==100)
  outtextxy(429,256,na );
  else
  outtextxy(429,256,nb );
  outtextxy(460,298,"Win");
  getch();
  return 0;
}
