#include<stdio.h>
#include<stdlib.h>
#define n 5

int q[n];
int front=-1;
int rear=-1;

int isempty()
{
    if(front=-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull()
{
    if(rear=n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(int x)
{
    if(isfull())
    {
        printf("queue is full");
        return ;
    }
    if(front==-1)
    {
      front=rear=0;
    }
    else
    rear=rear+1;
    q[rear]=x;
}

int dequeue()
{
    if(isempty())
    {
        printf("queue is empty");
        exit(1);
    }

}