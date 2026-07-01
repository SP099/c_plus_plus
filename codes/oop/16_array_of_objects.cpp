#include<iostream>
#include<string>

/*
 * Basics of Arrays
 * collection of elements of same data type stored in contiguous memory locations.
 * instead of creating muliple variables for similar data, arrays can be used
 */

/*
 * Array of Objects
 * each element of the array is an object of the class
 * each object has its own copy of the data members, but they store same definition of member funtions.
 */
class Student {
    std::string name;
    int age;
public:
    void setData(std::string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

int main()
{
    Student s[2];
    s[0].setData("sp", 234);
    s[1].setData("hd", 345);
    for(int i = 0; i < 2; i++) {
        s[i].display();
    }
    return 0;
}
