#include <stdio.h>  
# define size 5

int queue[size];  
int front=-1,rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1)    
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%size==front) 
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {  
        rear=(rear+1)%size;      
        queue[rear]=element;
    }  
}  
  
  
int dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\nQueue is underflow..");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is %d", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued element is %d", queue[front]);  
   front=(front+1)%size;  
}  
}  
  
void display()  
{  
    int i=front;  
    
        printf("\nElements in a Circular Queue.\n");  
        while(i<=rear)  
        {  
            printf("%d<-", queue[i]);  
            i=(i+1)%size;  
        }  
      
}  
int main()  
{  
    int choice,element;  
    printf("\nEnter 1-> Insert an element");  
    printf("\nEnter 2-> Delete an element");  
    printf("\nEnter 3-> Display the element");  
    printf("\nEnter 4-> Exit");
    while(1)    
    {  
   
    printf("\nEnter your choice : ");  
    scanf("%d", &choice);  
      
    switch(choice)  
    {  
          
        case 1:  
      
        printf("Enter the inserted element : ");  
        scanf("%d", &element);  
        enqueue(element);  
        break;  

        case 2:  
        dequeue();  
        break;  

        case 3:  
        display();  
  
    }
    
    }  
    return 0;  
}  











