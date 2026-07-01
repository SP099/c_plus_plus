#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        int rollNo;
        float marks;

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Marks: " << marks << endl;
        }
};

int main()
{
    Student s1;
    s1.name = "sp";
    s1.rollNo = 234;
    s1.marks = 23.2;

    s1.display();
    return 0;
}
