#include<stdio.h>
#include<conio.h>
void main()
{
 char *str1,c;
 int i,j;
 clrscr();
 printf("Enter a sentence : ");
 gets(str1);
 printf("\n%s",str1);
 for(i=0;i<101;i++)
 {
  if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u')
  {
   for(j=i+1;j<101;j++)
    {
     c=str1[j-1];
     str1[j-1]=str1[j];
     str1[j]=c;
    }
  }
 }
   printf("\n%s",str1);
   printf("\n\nProgram by Mihir Gandhi B1 1611077");
   getch();
}