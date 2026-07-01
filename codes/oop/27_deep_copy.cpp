/*
 * Deep Copy
 * means copying the actual content pointed by the pointer.
 * ensures each object has its owen independent copy of the data.
 */
#include <iostream>
#include <cstring>   // for strlen() and strcpy()

class Student {
private:
    char* name;

public:
    // Parameterized Constructor
    Student(const char* n) {
        name = new char[strlen(n) + 1];   // Dynamic memory allocation
        strcpy(name, n);
    }

    //copy constructor
    Student(const Student &s) {
        name = new char(strlen(s.name) + 1);
        strcpy(name, s.name);
    }

    // Setter to modify name (to demonstrate the problem)
    void setName(const char* n) {
        strcpy(name, n);
    }

    // Display function
    void display() {
        std::cout << "Name: " << name << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Destructor called for: " << name << std::endl;
        delete[] name;
    }
};

int main() {
    Student s1("John");

    Student s2 = s1;        // deep Copy

    s1.display();
    s2.display();

    // Modify s2
    s2.setName("Mike");

    std::cout << "\nAfter modifying s2:\n";
    s1.display();   // Also becomes "Mike" → Problem!
    s2.display();

    return 0;
}

