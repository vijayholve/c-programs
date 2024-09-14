#include<stdio.h>
#include<strlib.h>
struct node{
    int data;
    struct node *next;
}*start;

void create_circular()
