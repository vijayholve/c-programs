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
        if(front == -1){
            front+=1;
        }
        printf("enter a new queue");
        scanf("%d",&n);
        arr[(rear+1) % size ]=n;
        rear++;
     }
}
void delete(){
     if(front == -1){
        printf("enter q is underflow\n");
     }else{
        printf("%d",arr[front]);
        front=(front+1)%size;
     }
}
void display(){
    for(int i=front;i!=rear;i=){

    }
}


int main(){

}