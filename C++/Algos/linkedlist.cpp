#include <iostream>
using namespace std;

// Node class represents a node in the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a new node with given data and next pointer
    Node(int val) : data(val), next(nullptr) {}
};

// LinkedList class represents a singly linked list
class LinkedList {
private:
    Node* head; // Points to the first node in the linked list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the beginning of the linked list
    void insert(int val) {
        Node* newNode = new Node(val); // Create a new node
        newNode->next = head; // Set the next pointer of the new node to the current head
        head = newNode; // Set the head pointer to the new node
    }

    // Function to display the linked list elements
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    // Create a new linked list
    LinkedList list;

    // Insert elements into the linked list
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    // Display the linked list
    cout << "Linked List elements: ";
    list.display();

    return 0;
}
