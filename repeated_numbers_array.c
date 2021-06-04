#include<stdio.h>

int main()

{
    int arr[100], ele, found[100],z=0;

    printf("Enter number of elements you want to enter- ");
    scanf("%d",&ele);

    for (int i = 0; i < ele; i++)
    {
        printf("\n Enter element number %d- ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int x = 0; x < ele; x++)
    {
        for (int y =  x + 1; y < ele; y++)
        {
            if (arr[x] == arr[y])
            {
                found[z]=arr[x];
                printf("%d\n",found[z]);
                z = z + 1;
                break;
            }
            
        }
     
    }

return 0;
    
}