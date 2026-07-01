#include<iostream>

using namespace std;

class Person {
    public:
        string name;
        int age;

        Person() {
            name = "unkown";
            age = 0;
        }

        Person(string n) {
            name = n;
            age = 19;
        }

        Person(string n, int a) {
            name = n;
            age = a;
        }

        void info() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};

int main() {
    Person p1;
    Person p2("sp");
    Person p3("hp", 22);

    p1.info();
    p2.info();
    p3.info();
    return 0;
}
