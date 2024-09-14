#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next,*prev;
}*start;
void create_dublly(int n){
    struct node *temp,*ptr;
    int data,i;
    start=(struct node*)malloc(sizeof(struct node));
    start->next=start->prev=NULL;
    printf("\nenter a data: ");
    scanf("%d",&data);
    start->data=data;
    temp=start;
    for(int i=1;i<n;i++){
        ptr=(struct node*)malloc(sizeof(struct node));
        printf("\nenter a data: ");
        scanf("%d",&data);
        ptr->data=data;
        ptr->prev=ptr->next=NULL;
        temp->next=ptr;
        ptr->prev=temp;
        temp=ptr;
        
    }
}
void display(){
     struct node *temp;
    temp=start;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n;
    printf("enter the number of element do you want to create :");
    scanf("%d",&n);
   create_dublly(n);
   display();

}
