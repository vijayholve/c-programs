#include<stdio.h>
int main(){
    printf("hello world\n");
    int a=10;
    int *ptr=&a;
    printf("a=%u",*ptr);
    return 0;
}