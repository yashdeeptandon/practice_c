#include <stdio.h>

// function declaration to pass array in function

void func(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum of the inputed nos is- %d", sum);
}
int main()
{
    int arr[100], n;

    printf("Enter the no of elements in array-");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element- ", i + 1);
        scanf("%d", &arr[i]);
    }

    func(arr, n);

    return 0;
}