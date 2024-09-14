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
         temp=ptr;
    }

}
