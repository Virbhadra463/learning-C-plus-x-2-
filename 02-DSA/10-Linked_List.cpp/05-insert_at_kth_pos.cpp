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

Node* insertAtTail(Node* head, int k, int x){
    // Create new node
    Node* newNode = new Node(x);

    // declaring temp to iterate
    Node* temp = head;
    
    int count = 1;
    
    while(count < k-1 && temp!=NULL) {
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;

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
    int K = 3;

    // Insert at head
    head = insertAtTail(head, K , X);
    
    
    // traversal
    Node* temp = head;                  // Start at the first node.

    while(temp != NULL){                // Keep going as long as temp is pointing to a node.
        cout << temp->data << " ";
        temp = temp->next;              // Make temp point to the next node.
    }   
    return 0;
}