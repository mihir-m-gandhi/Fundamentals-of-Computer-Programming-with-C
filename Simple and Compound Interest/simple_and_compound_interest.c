#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float P,r,t,a,b,s,c;
  clrscr();
  printf("Enter the principle amount : ");
  scanf("%f",&P);
  printf("Enter the rate of interest : ");
  scanf("%f",&r);
  printf("Enter the number of years : ");
  scanf("%f",&t);
  s=P*r*t/100;
  a=1+r/100;
  b=pow(a,t);
  c=P*b;
  printf("\nThe simple interest for %.2f years for an amount of Rs.%.2f @ %.3f percent per annum is Rs.%.2f",t,P,r,s);
  printf("\n\nThe compound interest for %.2f years for an amount of Rs.%.2f @ %.3f percent per annum is Rs.%.2f",t,P,r,c);
  printf("\n\nProgram by Mihir Gandhi B1 1611077");
  getch();
}