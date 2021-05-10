 #include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int f,i;
  char file1[100],file2[100];
  FILE *f1,*f2;
  clrscr();
  printf("Enter input file name : ");
  gets(file1);
  printf("Enter output file name : ");
  gets(file2);
  f1=fopen(file1,"r");
  f2=fopen(file2,"w");
  if(f1==NULL)
  {
   printf("Such file does not exist");
   exit(-1);
  }
  else
  {
    printf("\nCopying contents to file 2\n");
    fseek(f1,0,2);
    f=ftell(f1);
    for(i=f-1;i>=0;i--)
    {
      fseek(f1,i,0);
      fputc(getc(f1),f2);
    }
  }
  printf("Contents of file 1 have been reversed and saved in file2");
  printf("\n\nProgram by Mihir Gandhi B1 1611077");
  fcloseall();
  getch();
}
