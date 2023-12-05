//operations on singly linkedlist

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};*head=NULL,*tail=NULL

void insertend(int value)
{
    struct node *new=(struct node *)malloc(sizeof(struct node));
    
    new->data=value;
    new->next=NULL;
    tail->next=new;
}

void deleteend()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
        

    }
    tail=tmp;
    tail->next=NULL;


}

int main()
{
    printf("singly linked list operation\n");

    int ch,value;


    printf("1.insert at end\n");
    printf("2.delete at end\n");
    printf("3. searching\n");
    printf("4.traversing\n");
    printf("enter your choice\n");

    switch(ch)
    {
        case 1:
        printf("enter data");
        scanf("%d",&value);
        break;

        case 2:
        printf("performing delete at end");
        break;
       

       /* case 1:
        printf("enter data");
        scanf("%d",&value);

        case 1:
        printf("enter data");
        scanf("%d",&value);*/
    }
}