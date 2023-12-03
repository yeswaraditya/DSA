#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;

};

void preorder(struct node *root)
{
    if(root==0)
    {
        return 0;
    }
    printf("%d",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    printf("inorder is:");
    inorder(root->left);
    printf("%d",root->data);
    inorder(root->right);
}
void postorder(struct node *root)
{
    if (root==0)
    {
        return 0;
    }
    printf("postorder is:");
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}




int main()
{
    struct node *root;
    printf("preorder is :");
    preorder(root);
    inorder(root);
    postorder(root);


}