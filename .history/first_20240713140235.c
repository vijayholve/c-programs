#include<stdio.h>
int main(){
    printf("hello world\n");
    int arr[]={} ,i;
    
    for(i=0;i<=5;i++){
        printf("enter the value of PTR :");
        scanf("%d",&arr[i]);
        }
    int *ptr=&arr[sizeof(arr)];
    for(i=0;i<sizeof(ptr);i++){
        printf("%d",ptr[i]);
    }
    // printf("ptr=%p and A=%p",&ptr,&arr);
    return 0;
}