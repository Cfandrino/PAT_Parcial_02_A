#include "Ejercicio01.h"

template<typename T>
Node<T>* removeNodes(Node<T>* head, T value) {
    while (head != nullptr && head->value == value) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }

    if (head == nullptr) {
        return nullptr;
    }

    Node<T>* current = head;
    while (current->next != nullptr) {
        if (current->next->value == value) {
            Node<T>* temp = current->next;
            current->next = temp->next;
            delete temp;
        }
        else {
            current = current->next;
        }
    }

    return head;
}
