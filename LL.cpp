#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to add a new node to the end of the list
void append(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) { // If the list is empty
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = newNode; // Link the new node at the end
}

// Function to insert a node in the middle of the list at a specific position
void insertAt(Node*& head, int position, int value) {
    if (position < 1) { // Invalid position
        cout << "Invalid position! Must be 1 or greater.\n";
        return;
    }

    Node* newNode = new Node(value);

    if (position == 1) { // Insert at the head
        newNode->next = head;
        head = newNode;
        cout << "Node inserted at position " << position << ".\n";
        return;
    }

    Node* temp = head;
    int currentPosition = 1;

    while (temp != nullptr && currentPosition < position - 1) { // Traverse to the position before insertion
        temp = temp->next;
        currentPosition++;
    }

    if (temp == nullptr) { // Position is out of range
        cout << "Position out of range. Node not inserted.\n";
        delete newNode;
        return;
    }

    newNode->next = temp->next; // Adjust links to insert the new node
    temp->next = newNode;

    cout << "Node inserted at position " << position << ".\n";
}
bool search(Node* head, int target) {
    Node* temp = head;
    int position = 1; // Position starts at 1

    while (temp != nullptr) {
        if (temp->data == target) {
            cout << "Value " << target << " found at position " << position << ".\n";
            return true; // Value found
        }
        temp = temp->next;
        position++;
    }

    cout << "Value " << target << " not found in the list.\n";
    return false; // Value not found
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl; // End of the list
}

int main() {
    Node* head = nullptr; // Initialize an empty list

    // Append some values to the list
    append(head, 10);
    append(head, 20);
    append(head, 30);
    append(head, 40);

    // Print the linked list
    cout << "Linked List: ";
    printList(head);

    // Insert at specific positions
    insertAt(head, 3, 25); // Insert 25 at position 3
    cout << "After inserting 25 at position 3: ";
    printList(head);

    insertAt(head, 1, 5); // Insert 5 at the beginning
    cout << "After inserting 5 at position 1: ";
    printList(head);

    insertAt(head, 7, 50); // Insert 50 at position 7 (end of list)
    cout << "After inserting 50 at position 7: ";
    printList(head);

    insertAt(head, 10, 100); // Attempt to insert at an out-of-range position
    printList(head);
    search(head, 20); 
    search(head, 50); 

    return 0;
}

