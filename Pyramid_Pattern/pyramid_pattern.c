#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k,l;
 clrscr();
 printf("Enter the no. of rows : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
  {
   printf(" ");
  }
  for(k=n-i+1;k<n+1;k++)
  {
   printf("%d",i+k-j);
  }
  for(l=n+1;l<n+i;l++)
  {
  printf("%d",k+2*i-l-2);
  }
 printf("\n");
 }
 printf("\nProgram by Mihir Gandhi B1 1611077"); 
 getch();
}