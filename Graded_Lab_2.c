#include <stdio.h>
#define size 10

int a[size];
int top1 = -1;
int top2 = size;

void push_stack1(int data)
{
    if (top1 < top2 - 1)
    {
        a[++top1] = data;
    }
    else
    {
        printf("Stack Full. Cannot Push\n");
    }
}
void push_stack2(int data)
{
    if (top1 < top2 - 1)
    {
        a[--top2] = data;
    }
    else
    {
        printf("Stack Full. Cannot Push\n");
    }
}

void pop_stack1()
{
    if (top1 >= 0)
    {
        int popped_value = a[top1--];
        printf("%d is being popped from Stack 1\n", popped_value);
    }
    else
    {
        printf("Stack Empty. Cannot Pop\n");
    }
}
void pop_stack2()
{
    if (top2 < size)
    {
        int popped_value = a[top2++];
        printf("%d is being popped from Stack 2\n", popped_value);
    }
    else
    {
        printf("Stack Empty. Cannot Pop\n");
    }
}

void print_stack1()
{
    int i;
    for (i = top1; i >= 0; --i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void print_stack2()
{
    int i;
    for (i = top2; i < size; ++i)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int ar[size];
    int i;
    int num_of_element;

    printf("Name- Yashdeep Tandon\n");
    printf("SAP ID- 1000015168\n");
    printf("We can push a total of 10 values\n");

    for (i = 1; i <= 6; ++i)
    {
        push_stack1(i);
        printf("Value Pushed in Stack 1 is %d\n", i);
    }
    for (i = 1; i <= 4; ++i)
    {
        push_stack2(i);
        printf("Value Pushed in Stack 2 is %d\n", i);
    }

    print_stack1();
    print_stack2();

    printf("Pushing Value in Stack 1 is %d\n", 11);
    push_stack1(11);

    num_of_element = top1 + 1;
    while (num_of_element)
    {
        pop_stack1();
        --num_of_element;
    }

    pop_stack1();

    return 0;
}