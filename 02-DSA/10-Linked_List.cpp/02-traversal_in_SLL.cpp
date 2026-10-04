#include <bits/stdc++.h>
using namespace std;

class Node {                // we create an object because we have to use "data" and "next" attributes again and again.
                            // Think of Node as a blueprint for one box in a linked list.
public:
    int data;
    Node* next;
    // Node* means pointer to a Node.
    // next stores the address of the next node.


    Node(int value) { //constructor
        data = value;
        next = NULL; // default address should be null  
    }
};

//  In C++, -> is used to access a member of an object through a pointer.
int main() {

    // creating nodes
    Node* head = new Node(10);          // here we create a head node 
    head->next = new Node(20);          // here we created second node and gave head node address of our next node
    head->next->next = new Node(30);    // same repeats here
    head->next->next->next = new Node(40);

    // traversal
    Node* temp = head;                  // Start at the first node.

    while(temp != NULL){                // Keep going as long as temp is pointing to a node.
        cout << temp->data << " ";
        temp = temp->next;              // Make temp point to the next node.
    }
    return 0;
}