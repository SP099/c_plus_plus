#include <iostream>

/*
 * constructor overloading
 * multiple constructors in the same class with different set of parameters.
 * compiler decides which constructor to call based on the arguments.
 * helps in flexible object initialization
 */

class Student {
    private:
        int rollNo;
        std::string name;
    public:
        Student() {
            rollNo = 0;
            name = "unknown";
        }
        Student(int r, std::string n) {
            rollNo = r;
            name = n;
        }
        void display() {
            std::cout << "Roll No: " << rollNo << ", Name: " << name << "\n";
        }
};

int main() {
    Student s1;
    s1.display();
    //Student s = Student(234, "sd"); //copy initilisation
    Student s(234, "sd"); //direct initilisation
    s.display();
    return 0;
}
