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
            front=0;
        }
        printf("enter a new queue");
        scanf("%d",&n);
        rear=(rear+1) % size;
        arr[rear ]=n;
       
     }
}
void delete(){
     if(front == -1){
        printf("enter q is underflow\n");
     }else{
       if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
     }
}
void display(){
    for(int i=front;i!=rear; i++){
         printf(" %d ",arr[i]);
    }
}


int main(){
    int ch;
    
    while(ch!=4){
    printf("1) create a new queue\n");
    printf("2) delete a  queue\n");
    printf("3) display\n");
    printf("4) exit \n");
    printf("\nenter your choice : ");
    scanf("%d",&ch);
        switch(ch){
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