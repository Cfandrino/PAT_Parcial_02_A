#ifndef NODE_H
#define NODE_H

template<typename T>
struct Node {
    T value;
    Node* next;

    Node() : value(T()), next(nullptr) {}  // Constructor predeterminado
    Node(T val) : value(val), next(nullptr) {}  // Constructor con valor inicial
};

#endif
