#include<stdio.h>
#define size 20
int front=-1;
int rear=-1;
int arr[size];
int create(){
        int n;
     if(rear == size -1 ){
        printf("queue is overflown\n");
     }else{
        printf("enter a new queue");
        scanf("%d",&n);
        arr[rear]=n;
        rear++;
     }
}


int main(){

}