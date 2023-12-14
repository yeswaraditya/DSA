#include<stdio.h>
#include<stdlib.h>
#define size 5
int a[size];
int top=-1;

void push(int x)
{
    if(top==size-1)
    {
        printf("stack is full\n");

    }
    else
    {
        top++;
        a[top]=x;
    }
}


void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");

    }
    else
    {
      printf("the popped element is %d \n",a[top]);
      top--;    
    }
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty\n");

    }
    else
    {
      printf("the peek element is %d \n",a[top]);
        
    }
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty\n");

    }
    else
    {
        int i=top;
       while(i>=0)   
       {
         printf("%d",a[i]);
         i--;
       } 
    }
}




int main()
{
    int ch,n;


while(1)
{
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("5.exit\n");

    printf("enter your choice\n");
    scanf("%d",&ch);


  switch(ch)
  {

    case 1:
    printf("enter an element to push\n");
    scanf("%d",&n);
    push(n);
    break;

    case 2:
    pop();
    break;

    case 3:
    peek();
    break;

    case 4:
    display();
    break;

    case 5:
     exit(1);
    
    default:
    printf("operation not available\n");


  }
}



}