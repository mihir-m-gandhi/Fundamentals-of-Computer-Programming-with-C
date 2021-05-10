#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100][100],m,n,i,j,sum;
 clrscr();
 printf("Enter the number of rows : ");
 scanf("%d",&m)
 printf("Enter the number of columns : ");
 scanf("%d",&n);
 sum=0;
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i!=j)
   sum=sum+a[i][j];
  }
 }
 printf("\nThe sum of non-diagonal elements is %d",sum);
 printf("\nProgram by Mihir Gandhi B1 1611077");
 getch();
}