#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;
    int choice = 0; 
    int value;

    while (choice != 4) {
        cout << "Menu:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: { 
                cout << "Enter value to insert: ";
                cin >> value;
                Node* newNode = new Node;
                newNode->data = value;
                newNode->next = NULL;

                if (head == NULL) {
                    head = newNode;
                } else {
                    Node* temp = head;
                    while (temp->next != NULL) {
                        temp = temp->next;
                    }
                    temp->next = newNode;
                }
                break;
            }
            case 2: { 
                cout << "Enter value to delete: ";
                cin >> value;

                if (head == NULL) {
                    cout << "List is empty.\n";
                } else if (head->data == value) {
                    Node* temp = head;
                    head = head->next;
                    delete temp;
                    cout << "Node with value " << value << " deleted.\n";
                } else {
                    Node* current = head;
                    Node* previous = NULL;

                    while (current != NULL && current->data != value) {
                        previous = current;
                        current = current->next;
                    }

                    if (current == NULL) {
                        cout << "Node with value " << value << " not found.\n";
                    } else {
                        previous->next = current->next;
                        delete current;
                        cout << "Node with value " << value << " deleted.\n";
                    }
                }
                break;
            }
            case 3: { 
                Node* temp = head;
                if (temp == NULL) {
                    cout << "List is empty.\n";
                } else {
                    while (temp != NULL) {
                        cout << temp->data << '\n';
                        temp = temp->next;
                    }
                }
                break;
            }
            case 4: 
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    }

    // Cleanup remaining nodes
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

