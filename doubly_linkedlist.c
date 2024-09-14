#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next,*prev;

}*start;

void create(){
    int data,n;
    start=(struct node*)malloc(sizeof(struct node));
    struct node *temp,*newnode;
    printf("Enter the number of nodes");

    scanf("%d",&n);
    printf("\nenter a data : ");
    scanf("%d",&data);
    temp=start;
    temp->data=data;
    temp->prev=NULL;
    for(int i=1;i<n;i++){
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nenter a data : ");
        scanf("%d",&data);
        newnode->data=data;
        newnode->next=newnode->prev=NULL;
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
}
void display(){
    struct node*temp;
    temp=start;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    printf("RD");
    create();
    display();
    return 0;
}
