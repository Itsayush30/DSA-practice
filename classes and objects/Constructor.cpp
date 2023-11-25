#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Other member functions and data members can be defined here
};

int main() {
    // Creating an object of MyClass calls the constructor
    MyClass myObject;

    // Rest of the program

    return 0;
}
