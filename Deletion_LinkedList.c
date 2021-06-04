#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *temp;
struct node *head;
struct node *new_node;

void getting_data()
{
    new_node = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter Data : ");
    scanf("%d", &new_node->data);

    new_node->next = 0; //to assign null value to last node

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

    while (temp != 0)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
}

void delete_beginning()
{
    temp = head;
    head = head->next;
    free(temp);
}

void delete_end()
{
    struct node *prev_node;

    temp = head;

    while (temp->next != NULL)
    {
        prev_node = temp;
        temp = temp->next;
    }

    if (temp == head)
    {
        head = 0;
    }
    else
    {
        prev_node->next = 0;
    }

    free(temp);
}
void delete_position()
{
    struct node *delete_node;
    int pos, i = 0;

    temp = head;

    printf("\nEnter Position for Deletion of Node : ");
    scanf("%d", &pos);

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }

    delete_node = temp->next;
    temp->next = delete_node->next;

    free(delete_node);
}

void main()
{
    int choice = 1;
    printf("\nName: Yashdeep Tandon");
    printf("\nSAP: 1000015168");
    while (choice != 0)
    {
        printf("\nChoose from below options :\n");
        printf("0. Exit\n");
        printf("1. Enter Data\n");
        printf("2. Display\n");
        printf("3. Delete Data at Begining\n");
        printf("4. Delete Data at the End\n");
        printf("5. Delete Data at specified position\n");
        printf("\nEnter Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            getting_data();
            break;

        case 2:
            display();
            break;

        case 3:
            delete_beginning();
            break;

        case 4:
            delete_end();
            break;

        case 5:
            delete_position();
            break;

        default:
            break;
        }
    }
}