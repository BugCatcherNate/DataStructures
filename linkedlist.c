#include <stdio.h>
#include <stdlib.h>


struct node{

    int data;
    struct node* next;

}; 

struct node* head = NULL; 

void insert(int val){

       struct node *ptr;

       ptr = (struct node*) malloc(1 * sizeof(struct node));

       ptr->data = val;
       ptr->next = head;

       head = ptr;
};

int main(){

    printf("START");
    insert(1);
    printf("%d", head->data);
    insert(2);
    printf("%d", head->data);
    insert(3);
    printf("%d", head->data);
    printf("END");
};
