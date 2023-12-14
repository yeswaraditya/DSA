#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;


void createnode()
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data into node: ");
    scanf("%d",&newnode->data);
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        tail=newnode;


    }
    else{
        tail->next=newnode;
        tail=newnode;
    }

    
}

void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}


int main()
{
    createnode();
    createnode();
    createnode();
    createnode();
    display();

}
