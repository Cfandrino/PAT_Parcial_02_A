#ifndef EJERCICIO01_H
#define EJERCICIO01_H

struct Node {
    char value;
    Node* next;

    Node(char val);
};

Node* removeNodesWithValue(Node* head, char value);

void printList(Node* head);

#endif 
