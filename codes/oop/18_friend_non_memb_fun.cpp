#include<iostream>

/*
 * Friend Non-Member Functions
 * a function that has special rights to access private and protected data members.
 */

class Box {
    int length;
    int breadth;
public:
    void setData(int l, int b) {
        length = l;
        breadth = b;
    }
    friend int calculateArea(Box b); /* Friend function */
};

/* Friend non member function */
int calculateArea(Box b) {
    return b.length * b.breadth;
}

int main()
{
    Box b1;
    b1.setData(10, 25);
    int area = calculateArea(b1);
    std::cout << area << "\n";
    return 0;
}
