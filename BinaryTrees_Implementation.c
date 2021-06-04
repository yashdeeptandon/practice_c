#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create()
{
    int x;
    struct node *new_node;
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data (-1 for no node): ");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    new_node->data = x;
    printf("\nEnter Left Child of %d: ", x);
    new_node->left = create();
    printf("\nEnter Right Child of %d: ", x);
    new_node->right = create();
    return new_node;
}

void pre_order(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        printf(" %d", root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        pre_order(root->left);
        pre_order(root->right);
        printf(" %d", root->data);
    }
}
void in_order(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    else
    {
        pre_order(root->left);
        printf(" %d", root->data);
        pre_order(root->right);
    }
}
void main()
{
    struct node *root = 0;
    root = create();

    printf("\n Preorder is: ");
    pre_order(root);

    printf("\n Postorder is: ");
    post_order(root);

    printf("\n Inorder is: ");
    in_order(root);
}
