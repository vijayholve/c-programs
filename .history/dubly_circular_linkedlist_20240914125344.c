#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
}*start;

void create_circular(int n){
    int i,data;
    struct node*temp,*ptr;
    start=(struct node*)malloc(sizeof(struct node));
    temp=start;
    printf("enter data: ");
    scanf("%d",&data);
    s->data=data;
}