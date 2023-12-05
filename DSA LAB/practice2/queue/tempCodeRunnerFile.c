#include<stdio.h>
#define size 5;
int queue[size];
int front=-1;
int rear=-1;


void enqueue(int x)
{
    if(rear==size-1)
    {
      printf("queue is overflow\n");

    }
   else if(front==-1 && rear==-1)
   {
      front=rear=0;
      queue[rear]=x;
    
   }
   else
   {
    rear++;
    queue[rear]=x;
     
   }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
      printf("queue is underflow\n");

    }
   else if(front==rear)
   {
      front=rear=-1;
      
    
   }
   else
   {
    printf("the dequeue val is %d\n",queue[front]);
    front++;
     
   }
}

void  peek()
{
    if(front==-1)
    {
        printf("queue is underflow\n");

    }
    else
    {
        printf("peek is %d",queue[front]);
    }
}

void display()
{
   if(front==-1 && rear==-1)
   {
    printf("queue is underflow\n");

   }
   else
   while(front<rear)
   {
    int i=front;
      printf("%d\t",queue[i]);

   }
}


int main()
{
    printf("size of queue is 5\n");
    int ch,n;
    printf("1.enque\n");
    printf("2.dequeue\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("enter a choice\n");
    switch(ch)
    {
        case 1:
        printf("enter a number to enque\n");
        scanf("%d",&n);
        enqueue(n);
        break;

        case 2:
        dequeue();
        break;

        case 3:
        peek();
        break;

        case 4:
        display();
        break;

        default:
        printf("operation is not available\n");
    }
}