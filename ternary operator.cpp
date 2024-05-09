#include <iostream>
#include <string>

using namespace std;

// Function to find maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    // Problem 1: Assigning a Variable Based on a Condition
    int x = 10;
    int y = (x > 5) ? 100 : 200;
    cout << "Problem 1: " << y << endl; // Output: 100

    // Problem 2: Returning a Value from a Function Based on a Condition
    int num1 = 10, num2 = 20;
    cout << "Problem 2: " << max(num1, num2) << endl; // Output: 20

    // Problem 3: Setting a Default Value if Input is Null
    string inputName = nullptr;
    string name = (inputName != nullptr) ? inputName : "Unknown";
    cout << "Problem 3: " << name << endl; // Output: Unknown

    // Problem 4: Performing Different Operations Based on a Condition
    string operation = "add";
    int result = (operation == "add") ? (num1 + num2) : (operation == "subtract") ? (num1 - num2) : 0;
    cout << "Problem 4: " << result << endl; // Output: 30

    // Problem 5: Checking for Null Pointers in Dynamic Memory Allocation
    int size = -1; // Negative value to demonstrate fallback
    int *ptr = new int(size > 0 ? size : 1);
    cout << "Problem 5: " << *ptr << endl; // Output: 0 (size is negative, so defaulted to 1)

    delete ptr; // Free dynamically allocated memory
    return 0;
}
