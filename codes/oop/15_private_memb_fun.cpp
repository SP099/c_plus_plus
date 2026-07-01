#include<iostream>

class Calc {
    private:
        int square(int a) {
            return a * a;
        }
    public:
        void showSquare(int x) {
            std::cout << "Square of " << x << " is " << square(x) << "\n";
        }
};

int main() {
    Calc clac;
    clac.showSquare(3);
    return 0;
}
