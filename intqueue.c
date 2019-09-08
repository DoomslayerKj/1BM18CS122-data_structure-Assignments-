#include<stdio.h>
#include<stdlib.h>
#define size 5

void enq(int q[],int *);
void deq(int q[],int *,int *);
void display(int q[],int *,int *);


void main()
 {
  int ch,queue[size],f=0,r=-1;
  do
    {
   f:
     printf("\n Press 1. Enqueue 2.Dequeue 3.Display 4.EXit \n");
     scanf("%d",&ch);
     
      switch(ch)
      { 
       case 1:enq(queue,&r);
              break;
       case 2:deq(queue,&f,&r);
              break;
       case 3:display(queue,&f,&r);
              break;
       case 4:exit(0);printf("\n Exiting ... \n");break;
       default:
		
             printf(" \n Invalid Choice \n");goto f;
		
		}//switch end
       }while(ch>=1&&ch<=4);//do-while end
 }//main ends here

void enq(int q[], int *r)
 {
        int num;
	if(*r == (size-1))
		{printf("\n QUEUE is FULL \n");}
	else
         {
		printf("\n Enter the number to push \n");
		scanf("%d", &num);
		q[++(*r)] = num;
		printf("\n PUSH SUCCESFUL \n");
	 }

}//enq

void deq(int q[], int *f, int *r){
	
	if(*f > *r)
		printf("\n QUEUE EMPTY\n");
	else{
		printf("%d\n", q[(*f)++]);
	}

}


void display(int q[], int *f, int *r){

	int i;
	
	if(*f >*r){
		printf("\n QUEUE EMPTY \n");
	}
	
	else{
		for(i = *f; i<=*r; i++){
			printf("\n %d \n", q[i]);
		}
	}
	
}
       
