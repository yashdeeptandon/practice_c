#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = 0;
struct node *new_node;
struct node *temp;

void beginning()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data: ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    head = new_node;
}

void end()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data: ");
    scanf("%d", &new_node->data);
    new_node->next = 0;

    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void position()
{
    int pos;
    int i = 1;
    printf("\nEnter Position : ");
    scanf("%d", pos);
    temp = head;

    while (i < pos)
    {
        temp = temp->next;
        i++;
    }
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d", &new_node->data);
    new_node->next = temp->next;
    temp->next = new_node;
}

void display()
{
    temp = head;

    while (temp != 0)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
}

void main()
{
    int choice = 1, ch = 0;

    while (choice != 0)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        printf("Enter Data: ");
        scanf("%d", &new_node->data);
        new_node->next = 0;

        if (head == 0)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;

            temp = new_node;
        }

        printf("\nDo you want to continue (0,1)? : ");
        scanf("%d", &choice);
    }

    temp = head;

    while (temp != 0)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }

    //Insertion

    choice = 1;
    while (choice != 0)
    {
        printf("\nDo you want to insert data (0,1)? : ");
        scanf("%d", &choice);
        printf("\n\nChoose from below options :");
        printf("\n1. Insert at beginning");
        printf("\n2. Insert at the end");
        printf("\n3. Insert at a position");
        printf("\n4. Display");
        printf("\nChoice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            beginning();
            break;

        case 2:
            end();
            break;

        case 3:
            position();
            break;

        case 4:
            display();    
            break;

        default:
            printf("\nEntered Wrong choice");
            break;
        }
    }
}