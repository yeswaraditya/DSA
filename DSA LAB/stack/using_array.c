// stacks using arrays
// operations push(),pop(),top(),isempty(),isfull();


#include<stdio.h>
#include<stdlib.h>
#define  n 5
int a[n];
int x;
int top=-1;

int isfull()
{
    if(top==n-1)
    return 1;
    else
    return 0;


}

int isempty()
{
    if(top==-1)
    return 1;

    else
    return 0;
    
}

void push(int x)
{
    if(isfull())
    {
        printf("stack overflow\n");
    }
    else{
        top=top+1;
        a[top]=x;

    }
}

void pop()
{
    if(isempty())
    {
        printf("stack is underflow\n");
    }
    else{
        x=a[top];
        top=top-1;
        printf("popped out element is %d\n",x);
    }
    
}

void peek()
{
    if(isempty())
    {
        printf("stack is underflow");
    }
    else{
        printf("th epeek element is %d\n",a[top]);
    }
    
}
void display()
{
    if(isempty())
    {
        printf("stack is underflow\n");
    }
    else
    for(int i=top;i>=0;i--)
    {
        printf("%d \t",a[i]);
    }
    
}

int main()
{
    int ch;
    printf("stack ADT using arrays\n");

    while(1)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.display\n");
        printf("5.exit\n");
        printf("exit your choice\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
              printf("enter the element to push\n");
              scanf("%d",&x);
              push(x);
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
               printf("invalid choice");
 

        }
        
    }
    return 0;
}
