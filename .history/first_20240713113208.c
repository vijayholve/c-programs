#include<stdio.h>
int main(){
    printf("hello world\n");
    int a=10;
    int *ptr=&a;
    printf("ptr=%p and A",&ptr);
    return 0;
}