#include <iostream>

using namespace std;
#if 0
class Student {
    public:
        string name;

        /* parameterized constructor */
#if 1
        Student(string n) : name(n) { cout << "Parameterized construcotor called\n";}
#endif
        /* OR */
#if 0
        Student(string  n) {
            name = n;
        }
#endif

        /* copy constructor */
        Student(const Student &obj) {
            name = obj.name + " (Copy)";
            cout << "Copy Constructor called\n";
        }

        void display() {
            cout << "Name: " << name << endl;
        }
};

int main() {
    Student s1("Rahul");
    Student s2 = s1; /* copy consturctor called */
    s1.display();
    s2.display();
    return 0;
}
#endif

#if 1
class Student {
    private:
        int rollNo;
        string name;
    public:
        Student(int r, string n) {
            rollNo = r; name = n;
        }

        Student(const Student &s) {
            rollNo = s.rollNo;
            name = s.name;
        }

        void display() {
            cout << "Roll No: " << rollNo << ", Name: " << name << "\n";
        }
};

int main()
{
    Student s1(23, "sp");
    s1.display();
    //Student s2 = s1;
    Student s2(s1);
    s2.display();
    return 0;
}
#endif
