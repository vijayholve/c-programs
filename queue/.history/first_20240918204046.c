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
    for(int i=front;i!=rear; i=(i+1) % size){
         printf("%d",arr[i]);
    }
}


int main(){
    int ch;
    
    while(ch!=4){
    printf("1) create a new queue\n");
    printf("2) delete a  queue\n");
    printf("3) display");
    printf("4) exit ");
    printf("enter your choice : ");
    scanf("%d",&ch);
        swithc(ch){
            case 1:
            create();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
        }
    }
}