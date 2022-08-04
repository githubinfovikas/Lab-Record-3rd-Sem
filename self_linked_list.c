#include<stdio.h>
#include<stdlib.h>

void create();

void display();

struct node{
    int info;
    struct node *next;
};

struct node *start = NULL;
int main(){
    int choice ;
    printf("\n*************************\n");
    printf("\nEnter 1->Create node");
    printf("\nEnter 2->Display node");
    printf("\nEnter 3->Exist code.");
    printf("\n*************************\n");
    while(1){
        printf("\nEnter choice number : ");
        scanf("%d",&choice);
        switch(choice){
            case 1 : 
            create();
            break;

            case 2:
            display();
            break;

            case 3: 
            printf("\nExist......");
            return 0;

            default:
            printf("\nWrong choice .");
        }
    }
      return 0;   
}


void create(){
    struct node *temp , *ptr;
    temp = (struct node *) malloc(sizeof(struct node));
    printf("\nEnter value : ");
    scanf("%d",&temp->info);
    temp->next=NULL;

   if(start==NULL){
       start=temp;
   }

   else{
    ptr = start;
    while (ptr->next !=  NULL){
        ptr = ptr->next;
    }
    ptr->next=temp;
    
   }
}

void display(){
    struct node *ptr;
    printf("\nListted element\n");
    for(ptr=start; ptr!=NULL ; ptr=ptr->next){
        printf("%d->",ptr->info);
    }
}