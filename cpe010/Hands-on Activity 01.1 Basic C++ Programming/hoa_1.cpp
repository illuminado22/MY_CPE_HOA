#include <iostream>

// Function prototype
void displayTwoSum(int a, int b);
void compareTwoNumber(int a, int b);
bool twoBoolOperations(bool a, bool b);

int main() {
    std::cout << "Activity No. 1 - Date Structure and Algorithms" << std::endl;
    displayTwoSum(5, 10);
    compareTwoNumber(5, 1);
    twoBoolOperations(1, 0);
    return 0;
}

// Defining the function
void displayTwoSum(int a, int b) {
    std::cout << "The sum of two numbers is: " << a + b << std::endl;
}

void compareTwoNumber(int a, int b) {
    if (a > b) {
        std::cout << "A is greater than B" << std::endl;
    }
    else if (a < b) {
        std::cout << "A is less than B" << std::endl;
    }
    else {
        std::cout << "Number is equal" << std::endl;
    }
}

bool twoBoolOperations(bool a, bool b) {
    bool orResult = a || b;
    bool andResult = a && b;
    std::cout << "Or operation result: " << orResult << std::endl;
    std::cout << "And operation result: " << andResult << std::endl;
    return true;
}