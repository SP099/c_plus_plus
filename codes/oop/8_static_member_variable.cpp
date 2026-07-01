#include<iostream>
using namespace std;

class Counter {
    public:
        static int count;

        Counter() {
            count++;
        }

        static void showCount() {
            cout << "Total objects: " << count << endl;
        }
};

int Counter::count = 0; //initilize static variable

int main() {
    Counter c1, c2, c3;
    Counter::showCount();
    return 0;
}
