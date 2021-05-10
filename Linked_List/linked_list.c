#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node
{
 int val;
 struct node *next;
}node_t;
void main()
{
 node_t *head=NULL,*current;
 clrscr();
 head=malloc(sizeof(node_t));
 head->val=1;
 head->next=malloc(sizeof(node_t));
 head->next->val=2;
 head->next->next=NULL;
 head->next->next=malloc(sizeof(node_t));
 head->next->next->val=3;
 head->next->next->next=NULL;
 current=head;
 while(current!=NULL)
 {
  printf("%d ",current->val);
  current=current->next;
 }
 getch();
}