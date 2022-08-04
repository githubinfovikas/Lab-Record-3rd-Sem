#include<stdio.h>
#include <stdlib.h>


void swap(int *fast, int *sec){
    int temp = *fast;
    *fast=*sec;
    *sec=temp;
}


void mergeSort(int arr[],int s,int e){
    int temp[e+1];
    if(e<=s){
        return;
    }

    int mid=(s/2)+(e/2);
    mergeSort(arr,s,mid); 
    mergeSort(arr,mid+1,e); 
    int left=s;
    int right=mid+1;
    int k;
    for (k = s; k <= e; k++) {
        if (left == mid + 1) {      
            temp[k] = arr[right];
            right++;
        } else if (right == e + 1) {      
            temp[k] = arr[left];
            left++;
        } else if (arr[left] < arr[right]) {      
            temp[k] = arr[left];
            left++;
        } else {       
            temp[k] = arr[right];
            right++;
        }
    }

    for (k = s; k <= e; k++) {     
        arr[k] = temp[k];
    }  
}



int quickPartition (int arr[], int low, int high)
{
	int pivot = arr[high]; 
	int i = (low - 1);
	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = quickPartition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void selectionSort(int arr[],int size){
    int comprision,swaping;
    int min_index;
    for(int i=0;i<size-1;i++){
        min_index=i;
        for(int j=i+1;j<size;j++){
             
            comprision+=1;
            if(arr[j] < arr[min_index]){
                min_index=j;
            }
            swap(&arr[min_index] , &arr[i]);
            swaping+=1;
        }
    }
    printf("Comprision : %d\n",comprision);
    printf("Swaping : %d\n",swaping);
}


void insertionSort(int arr[], int n)
{  
    int comprision;
	int key, j;
	for (int i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
        comprision+=1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
    printf("Comprision : %d\n",comprision);

}

void bubbleSort(int arr[] , int size){
    int comprision,swaping;
    for(int i=0; i<size-1;i++){
        for(int j=0; j<size-1-i; j++){
            comprision +=1;
            if(arr[j]>arr[j+1]){
            swaping+=1;
            swap(&arr[j],&arr[j+1]);
            }
        }
        }
        printf("Comprision : %d\n",comprision);
        printf("Swaping : %d\n",swaping);
    }

void printArray(int arr[],int size){
    printf("Sorting array\n");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);

}

void getArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]); 
    }
}








int main(){
    int size;
    printf("Enter size of array : ");
    scanf("%d",&size);

    int arr[size];
    printf("Given array\n");
    getArray(arr,size);
    
    printf("\n****************************************\n");
    printf("1-> for Bubble sort\n");
    printf("2-> for Insertion sort\n");
    printf("3-> for Selection\n");
    printf("4-> for quick\n");
    printf("5-> for merge\n");
    printf("6-> for exist\n");
    printf("\n****************************************\n");
    int choice;
    while(1){
    printf("\nEnter choice of sorting : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        bubbleSort(arr,size);
        printArray(arr,size);
        break;

    case 2:
        insertionSort(arr,size);
        printArray(arr,size);
        break;

    case 3:
        selectionSort(arr,size);
        printArray(arr,size);
        break;

    case 4:
        quickSort(arr, 0, size - 1);
        printArray(arr,size);
        break;

    case 5:
        mergeSort(arr, 0, size - 1);
        printArray(arr,size);
        break;
       
    case 6: 
       printf("Thanku for visiting this code");
       return 0;

    default:
        printf("Sorry Invalid name");
        break;
    }
    }
    return 0;
}










