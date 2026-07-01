#include<iostream>

using namespace std;

class Test {
    public:
        int value;

        void setValue(int value) {
            this->value = value;
        }

        void display() {
            cout << "Value = " << this->value << endl;
        }
};

int main() {
    Test t;
    t.setValue(2345);
    t.display();
    return 0;
}
