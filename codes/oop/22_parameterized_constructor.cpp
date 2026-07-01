#include<iostream>

/*
 * Parameterized constructor
 * a constructor that can take arguments
 * helps providing initial values to an object at the time of crating the object.
 * if we not initilize object when we create parameterized constructor then compiler thourgh the error
 * note that default constructor is invoked only when there no any constructor defined in code
 */

class Student {
    private:
        int rollNo;
        std::string name;
    public:
        Student(int r, std::string n) {
            rollNo = r;
            name = n;
        }
        void display() {
            std::cout << "Roll No: " << rollNo << ", Name: " << name << "\n";
        }
};

int main() {
    //Student s = Student(234, "sd"); //copy initilisation
    Student s(234, "sd"); //direct initilisation
    s.display();
    return 0;
}
