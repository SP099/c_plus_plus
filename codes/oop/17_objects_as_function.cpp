#include<iostream>

#if 0
/*
 * Pass by Value
 * copy of the object is passed to the function.
 * any change made to the object inside the function does not affect the original object.
 *
 * output of below code:
 *  Before call:
 *  Roll No: 101
 *  Marks: 98.3
 *
 *  After call:
 *  Roll No: 101
 *  Marks: 34.3
 *  Roll No: 101
 *  marks: 98.3
 */
class Student {
    int roll;
    float marks;
public:
    void putData(int a, float b) {
        roll = a;
        marks = b;
    }

    void display() {
        std::cout << "Roll No: " << roll << "\n";
        std::cout << "Marks: " << marks << "\n";
    }
};

void modifyData(Student s, int r, float m) {
    s.putData(r, m);
    s.display();
}

int main()
{
    Student s1;
    std::cout << "Before call:\n";
    s1.putData(101, 98.3);
    s1.display();
    std::cout << "After call:\n";
    modifyData(s1, 101, 34.3);
    s1.display();
    return  0;
}
#endif

#if 0
/*
 * Pass by Reference
 * original object is passed to the function as an alia
 * any changes made inside the funtion are reflected in the original object
 * output:
 *  Before call:
 *  Roll No: 101
 *  Marks: 98.3
 *  After call:
 *  Roll No: 101
 *  Marks: 34.3
 *  Roll No: 101
 *  Marks: 34.3
 */
class Student {
    int roll;
    float marks;
public:
    void putData(int a, float b) {
        roll = a;
        marks = b;
    }

    void display() {
        std::cout << "Roll No: " << roll << "\n";
        std::cout << "Marks: " << marks << "\n";
    }
};

void modifyData(Student& s, int r, float m) {
    s.putData(r, m);
    s.display();
}

int main()
{
    Student s1;
    std::cout << "Before call:\n";
    s1.putData(101, 98.3);
    s1.display();
    std::cout << "After call:\n";
    modifyData(s1, 101, 34.3);
    s1.display();
    return  0;
}
#endif

#if 1
/*
 * Pass by Pointer
 * address of the object is passed to the function
 * any changes made inside the funtion are reflected int the original object
 * output:
 *  Before call:
 *  Roll No: 101
 *  Marks: 98.3
 *  After call:
 *  Roll No: 101
 *  Marks: 34.3
 *  Roll No: 101
 *  Marks: 34.3
 */
class Student {
    int roll;
    float marks;
public:
    void putData(int a, float b) {
        roll = a;
        marks = b;
    }

    void display() {
        std::cout << "Roll No: " << roll << "\n";
        std::cout << "Marks: " << marks << "\n";
    }
};

void modifyData(Student* s, int r, float m) {
    s->putData(r, m);
    s->display();
}

int main()
{
    Student s1;
    std::cout << "Before call:\n";
    s1.putData(101, 98.3);
    s1.display();
    std::cout << "After call:\n";
    modifyData(&s1, 101, 34.3);
    s1.display();
    return  0;
}
#endif
