#include<iostream>

/* 
 * Constructor
 * a special member function that is used to initilize objects of its class
 * same name as the class with no return type
 * invoked automatically when an object of the class is created 
 * most commonly it is declared under public access specifier
 * types of constructors
 * 1. Default
 * 2. Parameterized
 * 3. Copy
 * 4. Move
 *
 * Default constructor
 * automatically invoked when an object is created without providing any arguments
 * if constrctor is not defined, then compiler will provide the default constuctor-
 * (members will assign with garbage values and string is empty
 */

class Student {
    private:
        int rollNo;
        std::string name;
    public:
        Student() {
            rollNo = 0;
            name = "unkown";
        }

        void display() {
            std::cout << "Roll No: " << rollNo << ", Name: " << name << "\n";
        }
};

int main() {
    Student s;
    s.display();
    return 0;
}
