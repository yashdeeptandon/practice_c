#include <stdio.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
};

struct node *add_two_numbers(struct node *list1, struct node *list2)
{
   int nodes_in_1 = 1;
    int nodes_in_2 = 1;

    struct node *temp1;
    struct node *temp2;
    struct node *temp3;


    temp1 = list1; //head of list 1
    temp2 = list2; // head of list 2

    int num1, num3, num2 = 0;
    int i=0;
    int arr[10];

    while (temp1->next != 0)
    {
        nodes_in_1 = nodes_in_1 + 1;
        temp1 = temp1->next;
    }

    temp1 = list1;

    while (temp1->next != 0)
    {
        if (nodes_in_1 == 0)
        {
            num1 = num1 + nodes_in_1;
        }
        else
        {
            num1 = temp1->data * pow(10, nodes_in_1 - 1);
            num1 = num1 + num1;
            nodes_in_1--;
            temp1 = temp1->next;
        }
    }

    while (temp2->next != 0)
    {
        nodes_in_2 = nodes_in_2 + 1;
        temp2 = temp2->next;
    }

    temp2 = list2;

    while (temp2->next != 0)
    {
        if (nodes_in_2 == 0)
        {
            num2 = num2 + nodes_in_2;
        }
        else
        {
            num2 = temp2->data * pow(10, nodes_in_2 - 1);
            num2 = num2 + num2;
            nodes_in_2--;
            temp2 = temp2->next;
        }
    }

    num3 = num1 + num2;

    while(num3!=0)
    {
        arr[i]=num3%10;
        num3=num3/10;
        i++;
    }
    
    while(i!=0)
    {
      temp3->next=(struct node *)malloc(sizeof(struct node));
        temp3->data=arr[i];
        i--;
    }

}

