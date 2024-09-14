#include<stdio.h>
int main(){
    printf("hello world\n");
    int a=[] ,*ptr,i;
    
    for(i=0;i<=5;i++){
        printf("enter the value of PTR :");
        scanf("%d",&a[i]);
        }
    int *ptr
    for(i=0;i<sizeof(ptr)-1;i++){
        printf("%d",ptr[i]);
    }
    printf("ptr=%p and A=%p",&ptr,&a);
    return 0;
}