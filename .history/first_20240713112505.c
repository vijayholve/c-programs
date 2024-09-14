#include<stdio.h>
int main(){
    printf("hello world");
    int a=10;
    int ptr*=&a;
    printf("a=%d",ptr*);
    return 0;
}