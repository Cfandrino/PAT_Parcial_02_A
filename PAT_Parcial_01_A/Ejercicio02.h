#ifndef EJERCICIO02_H
#define EJERCICIO02_H

#include <vector>

class SandwichQueue {
public:
    SandwichQueue(const std::vector<char>& students, const std::vector<char>& sandwiches);
    int countStudentsNotEaten();

private:
    std::vector<char> students;
    std::vector<char> sandwiches;
};

#endif // EJERCICIO02_H
