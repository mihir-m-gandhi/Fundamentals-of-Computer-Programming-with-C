#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a,b,r=0;
 clrscr();
 printf("Enter a number : ");
 scanf("%d",&n);
 a=n;
 while(n>=1)
 {
  b=n%10;
  r=(r*10)+b;
  n=n/10;
 }
 printf("The reverse of %d is %d\n",a,r);
 if(r==a)
 {
  printf("%d is a palindrome\n",a);
 }
 else
 {
  printf("%d is not a palindrome\n",a);
 }
 printf("\nProgram by Mihir Gandhi B1 1611077");
 getch();
}