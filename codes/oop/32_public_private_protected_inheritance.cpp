/*
 * Public inheritance
 *  1. public members of base class remain public in the derived class.
 *  2. protected members of base class remain protected in the derived class.
 *  3. private members are not directly accessible
 *  4. establishes is-a relationship
 */
#if 0
#include <iostream>

class Animal {
    public:
        void eat() {
            std::cout << "Eating\n";
        }
};

class Dog : public Animal {
    public:
        void bark() {
            std::cout << "Barking\n";
        }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
    return 0;
}
#endif

/*
 * Private inheritance
 *  1. public members of base class becomes privae in the derived class.
 *  2. protected members of base class becomes private in the derived class.
 *  3. private members are not directly accessible.
 *  4. establishes is-implemented=through relationship.
 *  5. in below example we can't access start api using car's object.
 */
#if 0
#include <iostream>

class Engine {
    public:
        void start()
        {
            std::cout << "Engine started\n";
        }
};
class Car : private Engine {
    public:
        void drive() {
            start();
            std::cout << "Car is driving\n";
        }
};

int main() {
    Car c;
    c.drive();
    return 0;
}
#endif

/*
 * Protected inheritance
 *  1. public members of base class becomes protected in the derived class.
 *  2. protected members of base class remain protected in the derived class.
 *  3. private members are not directly accessible.
 *  4. establishes is-a relationship, but only for childern.
 */
#if 1
#include<iostream>

class LibraryResource {
    public:
        int id;
        void setID(int x) {
            id = x;
        }
};

class Book : protected LibraryResource {
    public:
        void registerBook(int x) {
            setID(x);
        }
        void showID() {
            std::cout << "Book ID: " << id << "\n";
        }
};

int main() {
    Book b;
    b.registerBook(23);
    b.showID();
    //b.setID(1234); // not accessible
    return 0;
}
#endif
