#include<stdio.h>
#define size 5
int queue[size],front=-1,rear=-1; 


void display(){
    printf("\n---------------------------------------------------\n");
    for(int i=rear;i>=front;i--){
        printf("->%d",queue[i]);
    }
    printf("\n---------------------------------------------------\n");
}

void enqueue(int element){
     if(rear==size-1){
         printf("\nQueue is full");
     }
     else{
         front=0;
         rear++;

         queue[rear]=element;
         display();
     }
}

void dequeue(){
    if(front==rear){
        printf("\nQueue is empty");
    }
    else{
        front++;
        display();
    
    }
}


int main(){
    int element,choice;
    printf("\n************");
    printf("\nEnter 1->Enqueue(push)");
    printf("\nEnter 1->Dequeue(pop)");
    printf("\nEnter 3->Exist");
     printf("\n************");
    while(1){
        printf("\nEnter choice number :");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter enqueue element : ");
            scanf("%d",&element);
            enqueue(element);
            break;

            case 2:
            dequeue();
            break;

            case 3:
            return 0;

            default :
            printf("\nEnter valid number: ");
        }
        

    }
    return 0;
}




