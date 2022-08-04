#include<stdio.h>
#define size 10
int stack[size],topA=-1,topB=size-1;

void display_1(){
    for(int i=topA;i>=0;i--){
        printf("%d\n",stack[i]);
    }
}


void display_2(){
    for(int i=topB;i<size-1;i++){
        printf("%d\n",stack[i]);
    }
}



void push_1(int element){
    if(topA==topB){
        printf("\nStack is full or overflow");

    }

    else{
        topA++;
        stack[topA]=element;
        display_1();
    }
}

void push_2(int element){
    if(topA==topB){
        printf("\nStack is full or overflow");

    }

    else{
        topB--;
        stack[topB]=element;
        display_2();
    }
}


void pop_1(){
    if(topA==-1){
        printf("\nStack 1 is empty or underflow.");
    }
    else{
        topA--;
        display_1();
    }
}

void pop_2(){
    if(topB==size-1){
        printf("\nStack 2 is empty or underflow.");
    }
    else{
        topB++;
        display_2();
    }
}




int main(){
    int choice,element;
    
    printf("\n1->push(1) : 2->pop(1)");
    printf("\n3->push(2) : 4->pop(2)");
    printf("\n5->Display(1) : 6->display(2)");
    printf("\n7->Exit");

    while (1)
    {
        printf("\nEnter choice number : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\nEnter pushed-1 element : ");
            scanf("%d",&element);
            push_1(element);
            break;

            case 2:
            pop_1();
            break;

            case 3:
            printf("\nEnter pushed-2 element : ");
            scanf("%d",&element);
            push_2(element);
            break;

            case 4:
            pop_2();
            break;
            
            case 5:
            printf("\nStack 1st element.\n");
               display_1();
               break;

            case 6:
            printf("\nStack 2st element.\n");
               display_2();
               break;

            case 7:
            printf("\nExit");
            return 0;

            default:
            printf("\nEnter again valid choice.");


        }
    }
    
    return 0;
}




















