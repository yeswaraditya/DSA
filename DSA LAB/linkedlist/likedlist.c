#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*new,*head,*temp;

void createnode(int value)
{
    new=(struct node *)malloc(sizeof(struct node));
    new->data=value;
    new->next=NULL;
    
    if(head==NULL)
    {
        head=new;
        temp=new;

    }
    else
    {
        temp->next=new;
         temp=temp->next;
    }
}

void displaynode()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
       temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}

void deleteatlast()
{
    while(temp->next!=tail;)
    {
        temp=temp->next;
    }


}
int main()
{
    createnode(10);
    createnode(14);
    createnode(11);

printf("data in list are\t");
    displaynode();
}