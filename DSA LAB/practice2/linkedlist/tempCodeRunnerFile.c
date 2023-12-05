#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;
struct node *temp=NULL;

void createnode(int value)
{
    struct node* newnode=(struct node *)malloc(sifeof(struct node));
    printf("enter data into node");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head=NULL)
    {
        head=newnode;
        temp=newnode;
        
    }
    else
    temp=newnode;
    temp=temp->next;
}

void display()
{
    temp=head;
    while(temp->next!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int n,ch;
    printf("do you want to continue enter 1 or to display enter 0\n");
    scanf("%d",&ch);

    while(ch==1)
    {
         printf("enter data");
         scanf("%d",&n);
         createnode(n);
       
    }

    display();
}
