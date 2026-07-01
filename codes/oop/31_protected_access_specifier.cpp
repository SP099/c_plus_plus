/*
 * Protected access specifier
 *  1. c++ supports three access specifiers: public, private, and protected.
 *  2. members defined as public are accessible everywhwere.
 *  3. members defined as private are accessible only inside the class.
 *  4. members defined as protected are accessible inside the class where-
 *     they are defined and inside the derived classes.
 *  5. protected members are not accessible outside the class hierarchy.
 */

#include <iostream>

class Base {
    private:
        int a{10};
    public:
        int b{23};
    protected:
        int c{34};
};

class Derived : public Base {
    public:
        void display() {
            std::cout << b << " " << c << "\n";
        }
};

int main() {
    Base obj;
    //std::cout << obj.a; // error
    std::cout << obj.b << "\n";
    //std::cout << obj.c; // error
    Derived obj2;
    obj2.display();
    return 0;
}
