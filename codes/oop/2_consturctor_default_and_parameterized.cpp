#include <iostream>
using namespace std;

class Rectangle {
    public:
        int len;
        int wdh;

        /* Default constuctor */
        Rectangle() {
            len = 0;
            wdh = 0;
            cout << "Defualt constructor called\n";
        }

        /* Parameterized constructor */
        Rectangle(int l, int w) {
            len = l;
            wdh = w;
            cout << "parameterized constructor called\n";
        }

        int area() {
            return len * wdh;
        }
};

int main()
{
    Rectangle r1; // default constructor
    Rectangle r2(12, 3); // parameterized
    cout << "Area of r2 = " << r2.area() << endl;
    return 0;
}
