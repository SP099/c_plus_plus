/*
 * Destructor
 * a special member funtion that is automatically called when an object goes out of scope or-
 * is explicitly deleted.
 * it does not have parameters and return type.
 * a class can only have one destructor.
 * it is called in reverse order of constructor.
 *
 * syntax: ~ClassName() { }
 */

#include<iostream>

class Array {
    int* data;
    int size;
public:
    Array(int s) {
        size = s;
        data = new int(size); //memory allocated in heap.
        std::cout << "Array of size " << size << " created.\n";
    }
    ~Array() {
        delete[] data;
        std::cout << "Array of size " << size << " destroyed.\n";
    }
};

int main() {
    Array arr1(5);
    Array aar2(2);
    return 0;
}
