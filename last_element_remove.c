#include<stdio.h>

void getArray(int arr[], int size){
    printf("Enter array number\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

void revArray(int arr[] , int size){
    printf("Revrse Array \n");
    for(int i=(size-2);i>=0;i--){
        printf("%d ",arr[i]);
    }
}

int main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    getArray(arr,size);
    revArray(arr,size);
    return 0;
}