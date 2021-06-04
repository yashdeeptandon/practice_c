#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int choice = 1;
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *head = 0;
    struct node *new_node;
    struct node *temp;

    while (choice!=0)
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
    getch();
}