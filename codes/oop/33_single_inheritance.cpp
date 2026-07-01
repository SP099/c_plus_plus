/*
 * Single inheritance
 *  1. a class inherits only from one other class.
 *  2. the dervied class can reuse or extend the parent's functionality.
 *  3. syntax:
 *      class A {
 *          // base class
 *      };
 *
 *      class B : access_specifier A {
 *          // dervied class
 *      }
 */

#include<iostream>

class Vehicle {
    public:
        void start() {
            std::cout << "vehicle started\n";
        }
};

class Car : public Vehicle {
    public:
        void drive() {
            std::cout << "Car is driving\n";
        }
};

int main() {
    Car myCar;
    myCar.start();
    myCar.drive();
    return 0;
}
