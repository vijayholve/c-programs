#include<stdio.h>
int main(){
    printf("hello world\n");
    int a=10;
    int *ptr=&a;
    printf("ptr=%p",&ptr);
    return 0;
}