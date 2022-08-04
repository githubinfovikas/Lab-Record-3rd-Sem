#include<stdio.h>
int stack[100],top=-1,n;

void push(int element){
    if(top==n-1){
        printf("\nStack is full or overfollow");
    }
    else{
        top = top+1;
        stack[top]=element;
        printf("%d has pushed",element);
    }

}

void pop(){
    if(top==-1){
        printf("\nStack is empty or underfollow");
    }
    else{
        printf("%d has poped",stack[top]);
        top--;
    
    }

}


void display(){

    printf("\nYour stack element\n");
    for(int i=top;i>=0;i--){
        printf("%d\n",stack[i]);
    }

}

int main(){
    int choice , element;


    printf("\nEnter the number of elements in the stack : ");
    scanf("%d",&n);


    printf("\n1->push");
    printf("\n2->pop");
    printf("\n3->Dsplay");
    printf("\n4->Exit");

    while(1){
        printf("\nEnter choice number : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:

            printf("\nEnter pushing element : ");
            scanf("%d",&element);
            push(element);
            break;

        case 2:
            pop();
            break;
        
        case 3:
            display();
            break;
        
        case 4:
            printf("\nExist....");
            return 0;
        
        default:
            printf("\nEnter valid choice : ");
            break;
        }
    }

    return 0;
}
