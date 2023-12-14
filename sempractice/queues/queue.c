#include<stdio.h>
#include<stdlib.h>
#define size 5

int queue[size];
int front=-1;
int rear=-1;

void enqueue(int x)
{
    if(rear==size-1)
    {
        printf("queue is full\n");
    }

    else if(front==-1 &&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else{
        rear++;
        queue[rear]=x;
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");

    }

    else if (front==rear)
    {
        front=rear=-1;
    }

    else
    {
        printf("the dequeue element is %d",queue[front]);
        front++;
    }
}

void peek()
{
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("peek id %d",queue[front]);
    }
}

void display()
{
     if(front==-1 && rear==-1)
   {
    printf("queue is underflow\n");

   }

   else
   {
    int i=front;
   while (i<=rear)
   {
     printf("%d\t",queue[i]);
     i++;
   }
   }
   
}


int main()
{
    int ch,n;

    while(1)
    {

    printf("size of queue is 5\n");
    printf("1.enqueue\n");
    printf("2.dequeue\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("5.exit\n");
    printf("enter a choice\n");
        scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("enter a number to enque: ");
        scanf("%d", &n);
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

        case 5:
        exit(0);

        default:
        printf("operation not available");

    }
    }

}