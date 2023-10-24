#include "ejercicio02.h"

SandwichQueue::SandwichQueue(const std::vector<char>& students, const std::vector<char>& sandwiches) {
    this->students = students;
    this->sandwiches = sandwiches;
}

int SandwichQueue::countStudentsNotEaten() {
    int studentCount = students.size();
    int sandwichCount = sandwiches.size();
    int notEatenCount = 0;

    for (int i = 0; i < studentCount; ++i) {
        if (students[i] == sandwiches[i]) {
            
            continue;
        }
        else {
            
            bool foundMatch = false;
            for (int j = i + 1; j < sandwichCount; ++j) {
                if (students[i] == sandwiches[j]) {
                   
                    std::swap(sandwiches[i], sandwiches[j]);
                    foundMatch = true;
                    break;
                }
            }
            if (!foundMatch) {
               
                notEatenCount = studentCount - i;
                break;
            }
        }
    }

    return notEatenCount;
}
