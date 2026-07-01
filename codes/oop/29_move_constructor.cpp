/*
 * rvalue reference
 *      1. lvalue is an object that occupies a persistent memory location.
 *      2. rvalue is a temporary value which does not have a persistent memory location
 *      3. lvalue reference binds to lvalue
 *      4. rvalue reference binds to lvalue
 * rvalue reference allows to capture temporary object in move constructor and move its-
 * resorces to another object.
 *
 * Example:
 *      int x = 10;                    // x is lvalue

        int y = x + 5;                 // x+5 is rvalue (temporary)

        int& lref = x;                 // lvalue reference (OK)
        // int& lref2 = 100;           // Error! Cannot bind rvalue

        int&& rref = 100;              // rvalue reference (OK)
        int&& rref2 = x + 50;          // rvalue reference (OK)
 */

/*
 * Move constructor
 *  1. allows stealing resorces from a temporary object, and provide those resorces-
 *     to some other object.
 */

#include<iostream>
#include <cstring>

class MyString {
    char* data;
public:
    MyString(const char* s) {
        data = new char[strlen(s) * 1];
        strcpy(data, s);
        std::cout << "Constructed\n";
    }

    MyString(MyString&& other) {
        data = other.data;
        other.data = nullptr;
        std::cout << "Moved\n";
    }

    ~MyString() {
        delete[] data;
        std::cout << "destroyed\n";
    }

    void print() {
        if(data)
            std::cout << data << "\n";
        else
            std::cout << "Empty\n";
    }
};

int main() {
    MyString s1("hello");
    MyString s2 = std::move(s1);
    s1.print();
    s2.print();
    return 0;
}
