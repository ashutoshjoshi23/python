#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    int rollNo;
    string classDiv;
    string phoneNo;
    Node* next;
};

int main() {
    Node* head = NULL;
    int choice = 0; 
    string name, classDiv, phoneNo;
    int rollNo;

    while (choice != 5) {
        cout << "Menu:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Search\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: { 
                cout << "Enter student name: ";
                cin.ignore(); // To ignore the newline character left in the buffer
                getline(cin, name);
                cout << "Enter roll number: ";
                cin >> rollNo;
                cout << "Enter class division: ";
                cin.ignore(); // To ignore the newline character left in the buffer
                getline(cin, classDiv);
                cout << "Enter phone number: ";
                getline(cin, phoneNo);

                Node* newNode = new Node;
                newNode->name = name;
                newNode->rollNo = rollNo;
                newNode->classDiv = classDiv;
                newNode->phoneNo = phoneNo;
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
                cout << "Enter roll number of student to delete: ";
                cin >> rollNo;

                if (head == NULL) {
                    cout << "List is empty.\n";
                } else if (head->rollNo == rollNo) {
                    Node* temp = head;
                    head = head->next;
                    delete temp;
                    cout << "Student with roll number " << rollNo << " deleted.\n";
                } else {
                    Node* current = head;
                    Node* previous = NULL;

                    while (current != NULL && current->rollNo != rollNo) {
                        previous = current;
                        current = current->next;
                    }

                    if (current == NULL) {
                        cout << "Student with roll number " << rollNo << " not found.\n";
                    } else {
                        previous->next = current->next;
                        delete current;
                        cout << "Student with roll number " << rollNo << " deleted.\n";
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
                        cout << "Name: " << temp->name << '\n';
                        cout << "Roll No: " << temp->rollNo << '\n';
                        cout << "Class Division: " << temp->classDiv << '\n';
                        cout << "Phone No: " << temp->phoneNo << '\n';
                        cout << "--------------------\n";
                        temp = temp->next;
                    }
                }
                break;
            }
            case 4: {
                cout << "Enter roll number of student to search: ";
                cin >> rollNo;

                Node* temp = head;
                while (temp != NULL && temp->rollNo != rollNo) {
                    temp = temp->next;
                }

                if (temp == NULL) {
                    cout << "Student with roll number " << rollNo << " not found.\n";
                } else {
                    cout << "Name: " << temp->name << '\n';
                    cout << "Roll No: " << temp->rollNo << '\n';
                    cout << "Class Division: " << temp->classDiv << '\n';
                    cout << "Phone No: " << temp->phoneNo << '\n';
                }
                break;
            }
            case 5: 
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

