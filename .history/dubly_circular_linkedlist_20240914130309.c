#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
}*start;

void create_circular(int n){
    int i=1,data;
    struct node*temp,*ptr;
    start=(struct node*)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&data);
    start->data=data;
    start->next=start->prev=NULL;
    temp=start;
    while(i!=n){
        ptr=(struct node*)malloc(sizeof(struct node));
        printf("\nenter data: ");
        scanf("%d",&data);
        ptr->data=data;
        ptr->next=NULL;
        temp->next=ptr;
        ptr->prev=temp;
        temp=ptr;
        i++;
    }
   temp->next=start;
   start->prev=temp;

}
void displayList(){
    struct node* temp;
    temp=start;
    printf("%d ",temp->data);
    temp=temp->next;
    
    while(temp!=start){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    create_circular(5);
    displayList();
}

