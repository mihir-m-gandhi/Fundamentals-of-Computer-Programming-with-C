#include<stdio.h>
#include<conio.h>
void main()
{
 int m,y;
 clrscr();
 printf("\nEnter the year : ");
 scanf("%d",&y);
 printf("Enter the month number : ");
 scanf("%d",&m);
 switch(m)
 {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
  {
   printf("No. of days is 31");
   break;
  }
  case 4:
  case 6:
  case 9:
  case 11:
  {
   printf("No. of days is 30");
   break;
  }
  case 2:
  {
   if(y%100==0)
   {
    if(y%400==0)
    {
     printf("No. of days is 29");
    }
    else
    {
     printf("No. of days is 28");
    }
   }
   else
   {
    if(y%4==0)
    {
     printf("No. of days is 29");\
    }
    else
    {
    printf("No. of days is 28");
    }
   }
  }
 }
  printf("\n\nProgram by Mihir Gandhi B1 1611077");
  getch();
}
