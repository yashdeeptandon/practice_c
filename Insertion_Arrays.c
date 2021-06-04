#include<stdio.h>

int main()

{
    int ele, pos, i, num, a[100], insert;
    printf("Elements- \n");
    scanf("%d",&ele);

    for ( i = 0; i < ele; i++)
    {
        printf("Enter %d element- \n",i+1);
        scanf("%d",&a[i]);
    }
    
     printf("At what position you want to enter the element- \n");
     scanf("%d",&pos);

     printf("Enter the element you want to insert- \n");
     scanf("%d",&insert);

     for ( i = ele-1; i >= pos-1; i--)
     {
         a[i+1] = a[i];
     }
     a[pos-1] = insert;

     printf("Updated Array after insertion is- \n");
     
      for ( i = 0; i <= ele; i++)
    {
        printf("%d element- %d\n",i,a[i]);
        
    }

    return 0;
}