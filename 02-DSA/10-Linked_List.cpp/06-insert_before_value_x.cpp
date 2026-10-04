#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int value){
            data = value;
            next = NULL;
        }
};

// we will iterate from head till we find a node with value k
Node* insertBeforeValX(Node* head, int x, int k){
    
    // node to insert
    Node* newNode = new Node(x);


    // declaring temp to iterate
    Node* temp = head;

    // Previous node
    Node* prev = NULL;
    while(temp->data != k ){    // loop runs till 10,20,30 and stops pointer at 30
        prev = temp;    
        temp = temp->next;
    }
    
    newNode->next = temp; // new node should point 30 

    prev->next = newNode; // and prev node which is 20 should point at newNode(5)
    return head;
}

int main() {
  
    // creation of Nodes
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    insertBeforeValX(head, 5, 30);
    
    // traversal
    Node* temp = head;                  // Start at the first node.

    while(temp != NULL){                // Keep going as long as temp is pointing to a node.
        cout << temp->data << " ";
        temp = temp->next;              // Make temp point to the next node.
    }   
    return 0;
}