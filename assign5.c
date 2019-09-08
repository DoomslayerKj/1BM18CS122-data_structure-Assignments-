#include<stdio.h>
#include<stdlib.h>

#define q_size 3

void enqueue(int[],int,int *);
void dequeue(int[],int *,int *);
void display(int[],int *,int *);

void main()

{ int q[q_size];
  int f=0;
  int r=-1;
  int item,c;
  do{
  
  printf("\nQUEUE PROGRAM\n");
  printf("-------------\n");
  printf("\n1.Enqueue\n");
  printf("\n2.Dequeue\n");
  printf("\n3.Display\n");
  printf("\n4.exit\n");
  printf("-------------\n");

  printf("\nEnter your choice-\n");
  scanf("%d",&c);

  switch(c)

 {case 1:printf("\nEnter the item to be added in queue\n");
	 scanf("%d",&item);
	 enqueue(q,item,&r);
	 break;
  case 2:dequeue(q,&f,&r);
	 break;
  case 3:display(q,&f,&r);
	 break;
  case 4:exit(0);
	 break;
  default:printf("\nInvalid choice\n");}}while(c!=4);
   }

void enqueue(int q[],int item, int *r)

{
 if((*r)==q_size-1)
 {printf("Queue is full\n");}
 else
  {q[++(*r)]=item;}}

void dequeue(int q[],int *f,int *r)

{if((*f)>(*r))
 printf("Queue is empty\n");
 else
  {printf("THe Element deleted is %d",q[(*f)]);
   (*f)++;}}

void display(int q[], int *f, int *r)

{ int i;

 if((*f)>(*r))
 printf("Nothing to display\n");

 for(i=(*f);i<=(*r);i++)
 printf("%d ",q[i]);



}
