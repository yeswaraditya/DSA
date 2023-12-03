//learn about how to write sixe function
#include<stdio.h>
#include<stdlib.h>
#define size 20

struct queue{
    int 
}


void enqueue(int *q,int x)
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
   
     i=front;
   while( i<=rear)
   {
      printf("%d\t",queue[i]);
      i++;

   }
}

void bsf(int graph[size][size],int vertices,int startVertx)
{
    
    int visited[size]={0};
    printf("bfs traversal starts form vertes:%d\n",startVertex);

}


int main()
{
    int ch,n;
    while(1)
    {
    printf("size of queue is 5\n");
    printf("1.enque\n");
    printf("2.dequeue\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("enter a choice\n");
     scanf("%d", &ch);
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

       
        int vertices,startVertex;
        printf("enter no of vertices\n");
        scanf("%d",&vertices);

        int graph[size][size];
        printf("enter the adjancency matrix\n");

        //input for the adjancency matrix 
        for (int i=0;i<vertices;i++)
        {
            for(int j=0;j<vertices;j++)
            {
                scanf("%d",graph[i][j]);
            }
        }

            printf("the starting vertex is:\n");
            scanf("%d",&startVertex);

            bfs=(graph,vertices,startVertex);



    }
    }
}