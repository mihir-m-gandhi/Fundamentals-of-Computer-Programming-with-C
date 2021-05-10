#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k;
 clrscr();
 printf("Enter the no. of rows : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<i;j++)
  {
   printf(" ");
  }
  for(k=i;k<=n;k++)
  {
   printf("%d",n-k+1);
  }
 printf("\n");
 }
 printf("\nProgram by Mihir Gandhi B1 1611077"); 
 getch();
}