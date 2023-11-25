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
    
    struct node* new_node = (struct node*)malloc(sizeof(Node));
    struct node* temp=head; 
    if(head==NULL){
        new_node->data=x;
        new_node->next=NULL;
        head=new_node;
    }
    else{
        while(temp!=NULL){
            temp=temp->next;
        }
        new_node->data=x;
        new_node->next=NULL;
        temp->next=new_node;
        
    };
}







int main(void){
    int x=10;
    int y=20;
    int z=30;
    insert_last(40);
    insert_last(50);
    insert_last(60);
    print_nodes();

}