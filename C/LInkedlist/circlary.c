
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data ;
    struct node* next;
};
struct node *head = NULL, *temp;

void create(int data){
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = head;
    
    if (head == NULL){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        temp = newnode;
    }
};

void display(){
    struct node* temp;
    if(head == NULL){
        printf("List is Empty ");
    }
    else{
        temp = head;
        while(temp != 0){
            printf("%d->",temp->data);
            if(temp->next != head){
                temp = temp->next;
            }
            else{
                break;
            }
        }
    }
};


int main(){
    int n = 1000;
    for (int i = 0; i < n; i++){
        create(i);
    }
    display();

}
