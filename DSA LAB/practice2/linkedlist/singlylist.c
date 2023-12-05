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

void createnode()
{
    struct node* newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter data into node");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
        
    }
    else
    temp->next=newnode;
    temp=newnode;
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
int main()
{
   
         
         createnode();
         createnode();
         createnode();
         display();
}
