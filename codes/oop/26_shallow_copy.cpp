/*
 * means copying only the member values.
 * shallow copy copies the object member by member. for
 * primitive types(int, float, etc.). it works fine.
 * for pointers, it copies the address(the pointer value),
 * not the data the pointer points to.
 * This means:
 *   the original object and the copied object point to the same memory location
 *   if one object modifies the data, the other sees the change.
 *   this often leads to double delete(dangling pointers) or memory corruption when object are destroyed.
 * c++ automatically generates a default copy constructor and assignment operator that perform shallow copies
 */
#include <iostream>
#include <cstring>   // for strlen() and strcpy()

class Student {
private:
    char* name;

public:
    // Parameterized Constructor
    Student(const char* n) {
        name = new char[strlen(n) + 1];   // Dynamic memory allocation
        strcpy(name, n);
    }

    //copy constructor
    Student(const Student &s) {
        name = s.name;
    }

    // Setter to modify name (to demonstrate the problem)
    void setName(const char* n) {
        strcpy(name, n);
    }

    // Display function
    void display() {
        std::cout << "Name: " << name << std::endl;
    }

#if 0
    // Destructor
    ~Student() {
        std::cout << "Destructor called for: " << name << std::endl;
        delete[] name;   // Double delete will happen with shallow copy
    }
#endif
};

int main() {
    Student s1("John");

    Student s2 = s1;        // Shallow Copy (Default copy constructor)

    s1.display();
    s2.display();

    // Modify s2
    s2.setName("Mike");

    std::cout << "\nAfter modifying s2:\n";
    s1.display();   // Also becomes "Mike" → Problem!
    s2.display();

    return 0;
}


/*
 * Shared Memory (Pointer Issue)
Only the address (pointer) is copied, not the actual data.
Multiple objects point to the same memory location.

Unintended Data Modification
If you modify the data through one object, the change is reflected in all other objects that share the same memory.
This breaks the independence of objects.

Double Delete / Double Free Error
When objects go out of scope, their destructors try to delete[] the same memory multiple times.
This causes runtime crash (free(): double free detected + core dumped).

Dangling Pointers
After one object deletes the memory, other objects still hold a pointer to freed (invalid) memory.
Accessing it later leads to undefined behavior (garbage values, segmentation fault).

Memory Corruption
Can corrupt heap memory, leading to unpredictable program behavior.

Hard to Debug
Errors appear at program termination (in destructors), not at the point where the copy was made.
Makes debugging very difficult.

Violates Object Independence
Objects created via shallow copy are not true independent copies — they are tightly coupled.
*/
