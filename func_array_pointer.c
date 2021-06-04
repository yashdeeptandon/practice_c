#include <stdio.h>

// by passing array's base address to the function

int func(int *ptr, int n)
{
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(ptr + 1);
    }

    return sum;
}

int main()
{
    int arr[100], n, avg;

    printf("Enter the no of elements in array- ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element- ", i + 1);
        scanf("%d", &arr[i]);
    }

    avg = func(arr, n);

    printf("\nSum of the nos inputted is- %d", avg);

    return 0;
}