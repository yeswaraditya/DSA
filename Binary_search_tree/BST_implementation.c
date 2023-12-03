#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *left, *right;
};

struct node *create()
{
    int x;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data for the node (enter 0 to stop): ");
    scanf("%d", &x);
    
    if (x == 0)
    {
        return NULL;
    }

    newnode->data = x;
    
    printf("Enter the left child for node %d: ", x);
    newnode->left = create();

    printf("Enter the right child for node %d: ", x);
    newnode->right = create();

    return newnode; 
}

int main()
{
    struct node *root;
    root = create();
    
    // Add code to perform operations on the BST if needed

    // Don't forget to free the allocated memory when you're done using the tree
    // freeTree(root);

    return 0;
}
