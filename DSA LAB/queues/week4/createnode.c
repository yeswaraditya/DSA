//creating a node

#include<stdio.h>


struct node{
    int data;
    struct node* next;
    
}*new,*head,*tail;;

int main()
{   int value;



while(ch)
{


   struct node new = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&value);

    new->data=value;
    new->next=NULL;

    if(head=NULL)
    {
        head=new;
        tail=new;

    }
    else
    {
        tail->next=new;
        tail=new;
    }


}











    printf("do you want to comtinue");
    








    return 0;

}