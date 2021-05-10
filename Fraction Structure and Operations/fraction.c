#include<stdio.h>
#include<conio.h>
double sum(double a,double b,double c,double d);
double pro(double a,double b,double c,double d);
double disp(double a);
struct ratio
{
 double num;
 double deno;
}a,b;
void main()
{
 double s,p;
 clrscr();
 printf("Enter numerator of first number : ");
 scanf("%lf",&a.num);
 printf("Enter denominator of first number : ");
 scanf("%lf",&a.deno);
 printf("Enter numerator of second number : ");
 scanf("%lf",&b.num);
 printf("Enter denominator of second number : ");
 scanf("%lf",&b.deno);
 s=sum(a.num,a.deno,b.num,b.deno);
 p=pro(a.num,a.deno,b.num,b.deno);
 disp(s);
 disp(p);
 printf("Program by Mihir Gandhi B1 1611077");
 getch();
}
double sum(double a,double b,double c,double d)
{
 double x,y,z;
 x=(a*d)+(b*c);
 y=b*d;
 z=x/y;
 return z;
}
double pro(double a,double b,double c,double d)
{
 double x,y,z;
 x=a*c;
 y=b*d;
 z=x/y;
 return z;
}
double disp(double a)
{
 printf("\n%lf",a);
 return 0;
}

