#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*start;
struct node* createnode(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void display(){
    struct node*temp=NULL;
    temp=start;
    while(temp!=NULL){
    printf("the data is %d",temp->data);
    temp=temp->next;
    }
}
int main(){
    int i,n,m;
    printf("enter the number of node do you want :");
    scanf("%d",&n);
    i=0;
    while(i<n){
        printf("enter the value :");
        scanf("%d",&m);
        createnode(m);
        i++;
    }
    display();
    return 0;

}