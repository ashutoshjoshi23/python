#include <iostream>

struct Node {
    int data;
    Node* next;

   
    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;  

public:
  
    LinkedList() : head(nullptr) {}

    
    ~LinkedList() {
        clear();
    }

    
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }


    void display() const {
        Node* current = head;
        if (!current) {
            std::cout << "List is empty." << std::endl;
            return;
        }
        while (current) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }


    void clear() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    int choice, value;

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Insert" << std::endl;
        std::cout << "2. Display" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to insert: ";
                std::cin >> value;
                list.insert(value);
                break;
            case 2:
                std::cout << "List contents: ";
                list.display();
                break;
            case 3:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 3);

    return 0;
}

