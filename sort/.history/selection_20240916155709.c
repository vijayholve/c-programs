#include<stdio.h>


int main(){
    int n,i,j,small=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    for(i=0,i<n;i++){
        printf("\nenter value: ");
        scanf("%d",&arr[i]);
    }
    printf("\narray in ascending order: ");
    for(i=0;i<(n-1;i++){
        small=arr[i];
        for(j=i;j<n;j++){
            if(arr[j]<small){
                small=arr[j];
                arr[j]=arr[i];
                arr[i]=small;
            }

        } 

    }
    for(i=0,i<n;i++){
        printf("%d",arr[i]);
    }
}