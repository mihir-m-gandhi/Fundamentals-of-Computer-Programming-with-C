#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
   outtextxy(240, 50, "Mihir B1 1611077");
   setfillstyle(1,YELLOW);
   circle(300,200,150);
   floodfill(300,200,WHITE);
   setcolor(BLACK);
   setfillstyle(1,BLACK);
   fillellipse(375,150,7,25);
   fillellipse(225,150,7,25);
   setfillstyle(1,RED);
   fillellipse(300,275,100,10);
   getch();
   closegraph();
   return 0;
}
 
