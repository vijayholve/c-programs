#include<stdio.h>
int main(){
    printf("hello world\n");
    int a=[] ,*ptr,i;
    ptr=a;
    for(i=0;i<=10;i++){
        printf("enter the value of PTR :")
        scanf("%d",&ptr);
        }
    printf("ptr=%p and A=%p",&ptr,&a);
    return 0;
}