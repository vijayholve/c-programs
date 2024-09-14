#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*start;

void create_circular(int n){
    int i,data;
    struct node *temp,*ptr;
    start=(struct node*)malloc(sizeof(struct node));
    printf("enter a data : ");
    scanf("%d",&data);
    start->data=data;
    start->next =NULL;
    temp=start;
    for(i=1;i<n;i++){
         ptr=(struct node*)malloc(sizeof(struct node));
         printf("\nenter a data:");
         scanf("%d",&ptr->data);
         temp->next=ptr;
         temp=ptr;
    }
    temp->next=start;

}
void display_circular(){
    struct node *temp;
    temp=start;
    do{
        printf(" %d \n",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n;
    printf("enter the number of node you need: \n");
    scanf("%d",&n);
    create_circular(n);
    display_circular();
}