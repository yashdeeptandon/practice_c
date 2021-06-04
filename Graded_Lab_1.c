#include<stdio.h>

int main()

{
    int a[100], n, num;

    printf("Name- Yashdeep Tandon");
    printf("\nSAP ID-1000015168\n");
    printf("Enter Number of elements you have to input- ");
    scanf("%d",&n);

    for (int i = 1; i < n; i++)
    {
        printf("Input Element %d -",i);
        scanf("%d",&a[i]);
    }

    for(int j = 1; j < n; j++)
    {
        if(a[j+1]-a[j] != 2)
        {
            num = a[j+1] - 2;
            break;
        }
    }
    
    printf("\nMissing Number is- %d",num);
}