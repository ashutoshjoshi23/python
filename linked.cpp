#include <iostream>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* one = new node;
struct node* two = new node;
struct node* three = new node;

int main() {
    one->data = 10;
    two->data = 22;
    three->data = 33;
    
    one->next = two;
    two->next = three;
    three->next = NULL;
    
    head = one;
    
    while (head != NULL) {
        std::cout << head->data << '\n';  
        head = head->next;
    }

    return 0;
}

