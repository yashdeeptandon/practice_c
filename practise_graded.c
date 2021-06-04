#include<stdio.h>
int main(){
    int n;
    printf("Number of elements: ");
    scanf("%d",&n);
    int a[n],i,nsum=0,osum=0,last;
    for(i=0;i<n;i++){
        printf("Enter element no.%d: ",i+1);
        scanf("%d",&a[i]);
        last=a[i];
    }
    for(i=0;i<n;i++){
        nsum=nsum+a[i];
    }
    for(i=a[0];i<=last;i++){
        if(i%2==0){
            osum=osum+i;
        }
    }
    int misnum=osum-nsum;
    printf("\nThe missing number is: %d",misnum);
}