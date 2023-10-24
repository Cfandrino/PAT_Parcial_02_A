#include <iostream>
#include "Ejercicio01.h"
#include "Ejercicio02.h"
#include "Ejercicio03.h"

template<typename T>
struct Node {
    T value;
    Node* next;
    Node(T val) : value(val), next(nullptr) {}
};

template <typename T>
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

// Implementación simple de countStudentsUnableToEat
int countStudentsUnableToEat(std::vector<char>& students, std::vector<char>& sandwiches) {
    int unableToEat = 0;

    while (!students.empty() && !sandwiches.empty()) {
        char studentPreference = students[0];
        char sandwichType = sandwiches[0];

        if (studentPreference == sandwichType) {
            students.erase(students.begin());
            sandwiches.erase(sandwiches.begin());
        }
        else {
            students.push_back(studentPreference);
            students.erase(students.begin());
        }
    }

    unableToEat = students.size();

    return unableToEat;
}

int main() {
    // ... Código anterior ...

    // Ejemplo para el Ejercicio 2 (estudiantes y sandwiches)
    std::vector<char> students = { 'V', 'R', 'V', 'C', 'C', 'C', 'V', 'V', 'V', 'V', 'V' };
    std::vector<char> sandwiches = { 'R', 'C', 'R', 'V', 'R', 'C', 'R', 'V', 'C', 'R', 'C' };

    int unableToEat = countStudentsUnableToEat(students, sandwiches);
    std::cout << "Ejercicio 2: Estudiantes que no pueden comer: " << unableToEat << std::endl;

    // ... Código posterior ...

    return 0;
}
