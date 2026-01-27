#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

int main(){
    struct node* head, *newnode, *temp;
    head = NULL;
    int choice = 1;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter node data ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        if (head == NULL){
            head = temp = newnode;
        }
        else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter choice ");
        scanf("%d",&choice);
    }

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 32;
    newnode->next = head;
    head = newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 21;
    newnode->next = 0;

    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 45;

    int count = 0;
    temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;

    }

    printf("Enter node position ");
    int pos;
    scanf("%d", &pos);
    if(pos == 1){
        newnode->next = head;
        head = newnode;
    }
    else{
        int i = 1;
        temp = head;
        for (i = 1; i < pos -1; i++){
                temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    printf("Enter node to delete ");
    int del;
    scanf("%d", &del);
    
    if (del == 1){
        temp = head;
        head = head->next;
        free(temp);
    }
    else{
        temp = head;
        int i = 1;
        for (i = 1; i < del -1; i++){
            temp = temp->next;
        }
        struct node* delnode = temp->next;
        temp->next = delnode->next;
        free(delnode);
    }


    
    temp = head;
    while(temp != NULL){
        printf("%d\n ",temp->data);
        temp = temp->next;
    }
}