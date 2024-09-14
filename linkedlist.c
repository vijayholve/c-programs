#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node* createnode(int val){
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    return newnode;
    } 
void removenode(struct node* start,int val){
    struct node* current=start;
    struct node* previes=NULL; 
    while(current!=NULL && current->data!= val){
        previes=current;
        current=current->next;
        
    }
    previes->next=current->next;
    free(current);
}
void display(struct node* start){
    struct node* temp=start;
    while(temp!=NULL){
        printf("\ndata: %d",temp->data);
        temp=temp->next;
     }
}
int main(){
     struct node* start=createnode(10);
     start->next=createnode(20);
     start->next->next=createnode(30);
     start->next->next->next=createnode(40);
     printf("before");
     display(start);
     removenode(start,30);
printf("\nafter\n");     
     display(start);

}