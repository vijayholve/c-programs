#include<stdio.h>
int main(){
    int n ,i;
    printf("");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter the value of PTR :");
        scanf("%d",&arr[i]);
        }
    
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    // printf("ptr=%p and A=%p",&ptr,&arr);
    return 0;
}