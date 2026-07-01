#include<iostream>

using namespace std;

class Animal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }
};

class Dog : public Animal {  //Inheritance
    public:
        void bark() {
            cout << "Barking..." << endl;
        }
};

int main() {
    Dog d;
    d.eat(); //inherited from animal
    d.bark();
    return 0;
}
