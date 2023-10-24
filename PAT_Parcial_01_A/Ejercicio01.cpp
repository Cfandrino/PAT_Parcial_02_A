#include "ejercicio01.h"
#include <iostream>

Node::Node(char val) : value(val), next(nullptr) {}

Node* removeNodesWithValue(Node* head, char value) {
    Node* dummy = new Node(' ');
    dummy->next = head;
    Node* current = dummy;

    while (current->next != nullptr) {
        if (current->next->value == value) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else {
            current = current->next;
        }
    }

    Node* newHead = dummy->next;
    delete dummy;

    return newHead;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->value << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}
