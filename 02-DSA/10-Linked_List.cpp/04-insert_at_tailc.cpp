#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int value){
            data = value;
            next = NULL;
        }
};

// here we run a loop until we find null and when we find null address node, we add our new node    
Node* insertAtTail(Node* head, int x){
    // Create new node
    Node* newNode = new Node(x);
    
    // If the linked list is empty,
    // the new node becomes the head
    if(head == NULL) {
        return newNode;
    }

    // Temporary pointer used to traverse the list
    Node* temp = head;

    // Move temp until we reach the last node
    // The last node has next = NULL
    while(temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

int main() {
    Node* head = new Node(10);

    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);  

    // Value to insert
    int X = 5;

    // Insert at head
    head = insertAtTail(head, X);
    
    
    // traversal
    Node* temp = head;                  // Start at the first node.

    while(temp != NULL){                // Keep going as long as temp is pointing to a node.
        cout << temp->data << " ";
        temp = temp->next;              // Make temp point to the next node.
    }   
    return 0;
}