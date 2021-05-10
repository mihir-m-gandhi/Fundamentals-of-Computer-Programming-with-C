#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],i,j,n,b,k,s;
 clrscr();
 printf("Enter the no. of elements : ");
 scanf("%d",&n);
 printf("Enter the elements : \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("\n");
 for(s=1;s<=n;s++)
 {
 printf("Iteration %d\n",s);
 b=a[0];
 for(j=0;j<n;j++)
 {
  a[j]=a[j+1];
 }
 a[n-1]=b;
 for(k=0;k<n;k++)
 {
 printf("a[%d]=%d\n",k,a[k]);
 }
 printf("\n");
 }
 printf("\nProgram by Mihir Gandhi B1 1611077");
 getch();
}