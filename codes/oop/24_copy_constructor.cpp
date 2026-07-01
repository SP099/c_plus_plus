#include<iostream>

#if 0
/*
 * copy constructor
 * used to create a new object as the copy of an exiting object.
 * it takes reference to an object of the same calss as argument.
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

        /* copy constructor */
        Student(const Student &s) {
            rollNo = s.rollNo;
            name = s.name;
        }

        void display() {
            std::cout << "Roll No: " << rollNo << ", Name: " << name << "\n";
        }
};

int main() {
    Student s1(234, "sd"); //direct initilisation
    s1.display();
    Student s2 = s1; /* copy initilization */
    //Student s2(s1);
    s2.display();
    return 0;
}
#endif



#if 1
/*
 * implicit copy constructor
 * when no copy constructor is provided, compiler creates a public implicit copy constructor.
 * by default, implicit copy constructor will do member wise initilization.
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
    Student s1(234, "sd"); //direct initilisation
    s1.display();
    Student s2 = s1; /* copy initilization */
    s2.display();
    return 0;
}
#endif
