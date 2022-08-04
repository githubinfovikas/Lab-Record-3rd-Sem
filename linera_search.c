#include<stdio.h>

void getArray(int arr[], int size){
    printf("Enter array number\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

void linearSearch(int arr[] , int size, int find){
    int comparsion,flag=0,index;
     for(int i=0;i<size;i++){
         comparsion +=1;
        if(arr[i]==find){
            index=i;
            flag=1;
            break;
        }
     }


     if(flag==1){
         printf("Found\n");
         printf("Index : %d\n",index);
         printf("Comparision : %d\n",comparsion);
     }
     else{
         printf("Not found element\n");
         printf("Comparision : %d\n",comparsion);
     }
            
}




int main(){
    int size,find;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    getArray(arr,size);
    
    printf("Enter find element: ");
    scanf("%d",&find);
    
     linearSearch(arr,size,find);
     return 0;

}









