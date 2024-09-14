#include<stdio.h>

int main(){
    int n ,i;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("enter the value of PTR :");
        scanf("%d\n",&arr[i]);
        }
    
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}