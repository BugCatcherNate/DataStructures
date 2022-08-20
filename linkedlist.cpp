#include <stdio.h>
#include <stdlib.h>

struct node {

    int data;
    struct node* next;

};


struct node* head = NULL;

void insert(int val) {
    struct node *ptr;
    ptr = (struct node*) malloc(1 * sizeof(struct node));
    ptr->data = val;
    ptr->next = head;
    head = ptr;
};

int pop() {
    int val;
    if (head != NULL) {
        val = head->data;
        head = head->next;
    } else {
        val = NULL;
    }
    return val;
};

void loop() {
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
}

int main() {
    printf("START\n");
    insert(1);
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("%d\n", pop());
    printf("END\n");
};
