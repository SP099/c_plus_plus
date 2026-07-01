/*
 * Basics of inheritance
 *      1. in real world, many things share some common traits but also-
 *         have their own unique characteristics.
 *      2. acquiring the properties and behaviours of one class(base class)-
 *         into  another class(derived class).
 *      3. derived class also adds new features or modify existing properties-
 *         of the base class.
 *         defining derived classes:
 *          class derived_class_name : access_specifier base_class_name
 *          {
 *
 *          };
 *      4. promotes code reusability because it allows reusing the base class code-
 *         int derived classes. 
 */

#include<iostream>

class Animal {
    public:
        void eat() {
            std::cout << "This animal eats food.\n";
        }

        void sleep() {
            std::cout << "This animal sleeps.\n";
        }
};

class Dog : public Animal {
    public:
        void bark() {
            std::cout << "This animal barks.\n";
        }
};

class Cat : public Animal {
    public:
        void bark() {
            std::cout << "This animal meows.\n";
        }
};

int main() {
    Dog d;
    Cat c;
    std::cout << "Dog behaviour:\n";
    d.eat();
    d.sleep();
    d.bark();
    std::cout << "\nCat behaviour:\n";
    c.eat();
    c.sleep();
    c.bark();
    return 0;
}
