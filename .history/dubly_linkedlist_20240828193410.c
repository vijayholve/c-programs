#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next, *prev;
}start;
struct node* createnode(int data){
    struct node* temp=start,*last;
    int n=4,m;
    last=
    for(int i=1;i<n+1;i++){
        printf("enter a data: ");
        scanf("%d",&m);
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=m;
        newnode->next=NULL;
        newnode->prev=NULL;

    }
    
    return newnode;

}

int main(){

}


