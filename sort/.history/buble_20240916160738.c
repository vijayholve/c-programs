#include<stdio.h>
int main(){
    int n=5,i,j;
    for(i=0;i<n;i++){
        printf("enter a value: ");
        scanf("%d",&n);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i;j++){
            if(arr[j+1]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}