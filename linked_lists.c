#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}Node;

int count=0;
struct node* head=NULL;



void print_nodes(){
    struct node* temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;    
    };
    
};
void insert_first(int x){
    struct node* new_node= (struct node*) malloc(sizeof(Node));
    struct node* temp=head;

    if(head==NULL){
        //printf("NULL \n");
        new_node->data=x;
        new_node->next=NULL;
        head=new_node;
        //printf("%d\n",new_node->data);
        //count+=1;
    }
    else{
        new_node->data=x;
        new_node->next=head;
        head=new_node;
        //printf("%d\n",new_node->data);
        //count+=1;
    };
}



void insert_last(int x){

    struct node* temp= head;
    struct node* new_node= (struct node*) malloc(sizeof(Node));
    new_node->next=NULL;
    new_node->data=x;

    if (head==NULL){
        head=new_node;
    }

    else{
        while (temp->next!=NULL)
    {
        temp=temp->next;

    };

    temp->next=new_node;
    }
    
}


void insert_middle(int x,int position){
    struct node* temp=head;
    struct node* new_node= (struct node*) malloc(sizeof(Node));
    for (int i=1;i<position-1;i++){
        temp=temp->next;
    }
    new_node->data=x;
    new_node->next=temp->next;
    temp->next=new_node;
}





int main(void){
    int x=10;
    int y=20;
    int z=30;
    insert_last(40);
    insert_last(50);
    insert_last(60);
    insert_middle(900,2);
    print_nodes();

}