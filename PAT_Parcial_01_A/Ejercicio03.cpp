#include "Ejercicio03.h"

MinStack::MinStack() {
    // Constructor de la clase MinStack
}

void MinStack::push(int value) {
    stack.push_back(value);

    if (min_values.empty() || value <= min_values.back()) {
        min_values.push_back(value);
    }
}

void MinStack::pop() {
    if (!stack.empty()) {
        if (stack.back() == min_values.back()) {
            min_values.pop_back();
        }
        stack.pop_back();
    }
}

int MinStack::top() {
    return stack.back();
}

int MinStack::getMin() {
    return min_values.back();
}
