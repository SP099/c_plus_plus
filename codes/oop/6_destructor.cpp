#include<iostream>

using namespace std;

class Demo {
    public:
        Demo() {
            cout << "constructor called\n";
        }

        ~Demo() {
            cout << "destructor called - cleaning up\n";
        }
};

int main() {
    Demo obj1;
    Demo obj2;
    cout << "inside main function\n";
    return 0;
}
