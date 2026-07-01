#include<iostream>

using namespace std;

class Student {
    private:
        int rollNo;
        float marks;
    public:
        void putData(int a, float b);
        void display();
};

void Student::putData(int a, float b)
{
    rollNo = a;
    marks = b;
}

void Student::display()
{
    cout << "Roll No: " << rollNo << "\n";
    cout << "Marks: " << marks << "\n";
}

int main() {
    Student s1;
    s1.putData(2,23.4);
    s1.display();
    return 0;
}
