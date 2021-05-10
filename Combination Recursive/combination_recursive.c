#include<stdio.h>
#include<conio.h>
int f(int n);
int a=1;
void main()
{
 int n,r;
 float c;
 clrscr();
 printf("Enter n : ");
 scanf("%d",&n);
 printf("Enter r : ");
 scanf("%d",&r);
 c=f(n)/(f(r)*f(n-r));
 printf("%dC%d is %f",n,r,c);
 getch();
}
int f(int n)
{
 if(n>=1)
 return n*f(n-1);
 else
 return 1;
}



