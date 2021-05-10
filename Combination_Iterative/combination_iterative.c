#include<stdio.h>
#include<conio.h>
float nCr(int n,int r);
int fact(int a);
void main()
{
int n,r;
float c;
clrscr();
printf("Enter n : ");
scanf("%d",&n);
printf("Enter r : ");
scanf("%d",&r);
c=nCr(n,r);
printf("%dC%d is %f",n,r,c);
getch();
}
float nCr(int n,int r)
{
int b=n-r;
int p=fact(n);
int q=fact(r);
int w=fact(b);
float z=p/(q*w);
return z;
}
int fact(int a)
{
int f;
f=1;
while(a>=1)
{
 f=f*a;
 a=a-1;
}
return f;
}