#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;

};

struct node *newnode(int x)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));
    node->data=x;
    node->left=NULL;
    node->right=NULL;
    return node;

}

void preorder(struct node *root)
{
    if(root==0)
    {
        return 0;
    }
    printf("%d \t",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    inorder(root->left);
    printf("%d\t",root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d\t",root->data);
}




int main()
{
    
     struct node*root=newnode(10);
    root->left=newnode(7);
    root->right=newnode(15);
    root->left->left=newnode(5);
    root->right->left=newnode(12);
    root->right->right=newnode(20);
    root->left->left->right=newnode(8);
   
    printf("preorder is :\n");
    preorder(root);
    printf("\ninorder is:");
    inorder(root);
    printf("\npostorder is:\n");
    postorder(root);


}