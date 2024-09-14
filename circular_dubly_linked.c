#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*start;
void create(){
    struct node *temp,*newnode;
    int n,data;
    printf("enter the number of nodes do you want to create: ");
    scanf("%d",&n);
    start=(struct node*)malloc(sizeof(struct node));
    printf("enter the data :");
    scanf("%d",&data);
    start->data=data;
    start->next=NULL;
    temp=start;
    
    for(int i=1;i<n;i++){ 
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter the data :");
      scanf("%d",&data);
      newnode->data=data;
      newnode->next=NULL;
      temp->next=newnode;
      temp=newnode;
    }
    temp->next=start;
}
void display(){
    struct node*temp=start;
    printf(" %d ",temp->data);
    temp=temp->next;
    while(temp!=start){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
int main(){
   create();
   display();
   return 0;
}