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

void insert(struct node *root,int key)
{
    struct node *insert=root;
    while(insert!=NULL)
    {
        if(key==insert->data)
        {
            return ;
        }
        else if(key<insert->data)
        {
            insert=insert->left;
        }
        else
        {
            insert=insert->right;
        }
    }
    struct node *nwnode=newnode(key);
        if(key<root->data)
        {
            root->left=nwnode;
        }
        else{
            root->right=nwnode;
        }
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




int main() {
    struct node *root = newnode(20);
    root->left = newnode(18);
    root->right = newnode(25);
    root->left->left = newnode(16);
    root->right->left = newnode(24);
    root->right->right = newnode(27);
    root->left->left->right = newnode(17);
   
    printf("preorder is :\n");
    preorder(root);
    printf("\ninorder is:");
    inorder(root);
    printf("\npostorder is:\n");
    postorder(root);
    
    printf("\n");

    insert(root, 56);
    
    printf("\nAfter insertion of 56:\n\n");
    printf("preorder is :\n");
    preorder(root);
    printf("\ninorder is:");
    inorder(root);
    printf("\npostorder is:\n");
    postorder(root);

    return 0;
}
