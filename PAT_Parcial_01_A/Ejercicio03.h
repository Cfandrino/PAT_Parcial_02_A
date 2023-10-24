#ifndef EJERCICIO03_H
#define EJERCICIO03_H

#include <vector>

class MinStack {
public:
    MinStack();
    void push(int value);
    void pop();
    int top();
    int getMin();

private:
    std::vector<int> stack;
    std::vector<int> min_values;
};

#endif
