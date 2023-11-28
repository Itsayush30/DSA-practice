#include <iostream>
#include <string>

// Define the Person class
class Person {
private:
    std::string name;
    int age;

public:
    // Constructor to initialize the object
    Person(const std::string& n, int a) : name(n), age(a) {}

    // Member function to set the name
    void setName(const std::string& n) {
        name = n;
    }

    // Member function to set the age
    void setAge(int a) {
        age = a;
    }

    // Member function to display information
    void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person1("John Doe", 25);

    // Display information using the displayInfo method
    std::cout << "Person 1 Information:" << std::endl;
    person1.displayInfo();

    // Set new values using the set methods
    person1.setName("Jane Doe");
    person1.setAge(30);

    // Display updated information
    std::cout << "\nUpdated Person 1 Information:" << std::endl;
    person1.displayInfo();

    return 0;
}
