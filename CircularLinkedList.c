#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = 0;
struct node *temp;
struct node *new_node;

void create_cll()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d", &new_node->data);

    new_node->next = head;

    if (head == 0)
    {
        head = temp = new_node;
    }
    else
    {
        temp->next = new_node;
        temp = new_node;
    }
}

void display()
{
    temp = head;

    while (temp->next != head)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
    printf("\n%d", temp->data);
}

void main()
{
    int choice=1;
    while(choice!=0)
    {
        create_cll();
        printf("\nDo you want to continue?(0,1) : ");
        scanf("%d",&choice);
    }
    
    printf("\nData on linked list are :");
    display();
}