#include <iostream>
#include "Ejercicio01.h"
#include "Ejercicio02.h"
#include "Ejercicio03.h"
#include "Node.h"

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
    // Ejemplo para el Ejercicio 1 (eliminación de nodos en una lista enlazada)
    Node<char>* head1 = new Node<char>('a');
    head1->next = new Node<char>('b');
    head1->next->next = new Node<char>('f');
    head1->next->next->next = new Node<char>('c');
    head1->next->next->next->next = new Node<char>('d');
    head1->next->next->next->next->next = new Node<char>('e');
    head1->next->next->next->next->next->next = new Node<char>('f');

    char value1 = 'f';
    Node<char>* newHead1 = removeNodes(head1, value1);

    std::cout << "Ejercicio 1: Lista resultante después de eliminar nodos: ";
    Node<char>* current1 = newHead1;
    while (current1 != nullptr) {
        std::cout << current1->value << " -> ";
        current1 = current1->next;
    }
    std::cout << "nullptr" << std::endl;

    // Resto del código para los Ejercicios 2 y 3
    // ...

    // Liberar memoria
    delete newHead1; // Libera la memoria de la lista enlazada

    return 0;
}
