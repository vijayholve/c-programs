#include<stdio.h>
#include<strlib.h>
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
         scanf("%D",ptr->data);
         ptr->next =NULL;
         temp->next=ptr;
         temp=ptr;
    }
    temp->next=start;

}
void display_circular(){
    struct node *temp;
    temp=start;
    while(temp!=start){
        printf(" %d \n",temp->data);
        temp=temp->next;
    }
}
int main(){
    int n;
    printf("enter the number of node you need: \n");
    scanf("%d")
}