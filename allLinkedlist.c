#include<stdio.h>
#include<stdlib.h>


//creating own data type 
struct node{
    int data;//to store data
    struct node *next;//pointer for next variable
};


struct node *head;

void createList(int n);
void traverseList();

int main(){
    int n;
    printf("ENter number of nodes: ");
    scanf("%d",&n);
    createList(n);

    printf("\nData in the list \n");
    traverseList();
    return 0;

}


void createList(int n){
    struct node *newNode, *temp;
    int data, i;

    head =(struct node *)malloc(sizeof(struct node));
    
    if (head==NULL){
        printf("unable to allocate memory");
        exit(0);
    }

    printf("Enter data for node1: ");
    scanf("%d",&data);

    head->data=data;
    head->next=NULL;

    temp=head;

    for(i=2;i<=n;i++){

        newNode =(struct node*)malloc(sizeof(struct node));


        if(newNode==NULL){
            printf("Unable to allocate memory");
        }
        printf("enter data for node %d: ",i);
        scanf("%d",&data);

        newNode->data=data;
        newNode->next=NULL;

        temp->next=newNode;
        temp=temp->next;




    }

}

void traverseList(){

    struct node *temp;
    if(head==NULL){
        printf("list is empty");

    }


    temp=head;
    while(temp!=NULL){
        printf("data = %d \n",temp->data);
        temp=temp->next;
    }


}