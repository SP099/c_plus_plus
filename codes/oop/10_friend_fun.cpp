#include<iostream>

using namespace std;

class Box {
    private:
        int length;
    public:
        Box(int l) : length(l) {}

        /* friend int getLength declaration */
        friend int getLength(Box b);
};

int getLength(Box b) { /* Friend function definition */
    return b.length;   /* can access private member */
}

int main() {
    Box b(5);
    cout << "Length = " << getLength(b) << endl;
    return 0;
}
