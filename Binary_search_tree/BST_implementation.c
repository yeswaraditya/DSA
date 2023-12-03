// BST Implementation using LinkedList


#include<stdio.h>

struct node 
{
    int data;
    struct *left,*right;
};

struct node *create()
{
    int x;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("do you want to create node enter 1 and 0 for no node");
    scanf("%d",&x);
    if(x==0)
    {
        return 0;
    }
        newnode->data=x;
        printf("the left child is %d",x);
          newnode->left=create();
        printf("the right child is %d",x);
        newnode->right=create();
        return newnode; 

    
   
}










int main()
{
    struct node *root;
    root=create();
}