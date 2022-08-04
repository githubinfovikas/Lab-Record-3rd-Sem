#include <stdio.h>

void getArray(int arr[], int size){
    printf("Enter array number\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
}

void binarySearch(int arr[], int left, int right, int find)
{
        int comparsion=0;
		int flag=0,index;

	while ((left <= right)) {

		// Debug.
		// for(int i=left;i<=right;i++){
		// 	printf("%d ",arr[i]);
		// }
		// printf("\n");

		int m = (left/2) + (right/2);
        comparsion +=1;

		if (arr[m] == find){
			index=m;
			flag = 1;
			break;
        }
       
		if (find < arr[m])
			right = m-1;
		else
			left = m + 1;

	}

	if(flag==1){
        printf("Found at Index : %d\n",index);
		printf("Comparision : %d\n",comparsion);
	}
	else{
		printf("Not found \n");
		printf("Comparision : %d\n",comparsion);
	}

   
}


int main(void)
{
	int size,find,choice;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    getArray(arr,size);
    while(1){
    printf("Enter 1 for Search. and 2 for Exist\n");
	scanf("%d",&choice);
		switch (choice)
		{
		case 1:
			printf("Enter serching element : \n");
			scanf("%d",&find);
			binarySearch(arr,0,size,find);
			break;
		case 2:
		    printf("***Thanku***");
			return 0;
		default:
		    printf("Enter valid choice\n");
			break;
		}
	}
    
	return 0;
}

