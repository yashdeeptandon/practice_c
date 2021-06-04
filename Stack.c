#include <stdio.h>
#define n 5

int stack[5];
int top = -1;

void push()
{
    int x;
    printf("\nEnter data you want to enter into the stack- ");
    scanf("%d", &x);

    if (top == n - 1)
    {
        printf("\nStack is Full....");
    }
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    int deleted_item;

    if (top == -1)
    {
        printf("\nStack is Empty...");
    }
    else
    {
        deleted_item = stack[top];
        top--;
        printf("\nDeleted Item is- %d", deleted_item);
    }
}

void display()
{
    for (int i = top; i >= 0; i--)
    {
        printf("\n%d", stack[i]);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\nStack is Empty...");
    }
    else
    {
        printf("\n%d", stack[top]);
    }
}

void main()
{

    int choice;
    printf("\nName: Yashdeep Tandon");
    printf("\nSAP: 1000015168");
    printf("Choose from the below options...\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("5. Exit\n");
    do
    {
        printf("\nEnter your Choice- ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;
        
        case 5:
            printf("\nExit...");
            break;

            
        default:
            printf("\nWrong Choice Entered");
            break;
        }
    } while (choice != 5);
}
