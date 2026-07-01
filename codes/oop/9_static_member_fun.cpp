#include<iostream>

using namespace std;

#if 0
class MathUtils {
    public:
        static int square(int x) {
            return x * x;
        }

        static int cube(int x) {
            return x * x * x;
        }
};

int main() {
    cout << "square of 6 = " << MathUtils::square(6) << endl;
    cout << "cube of 5 = " << MathUtils::cube(5) << endl;
    return 0;
}
#endif

#if 1
class Item  {
    private:
        static int value;
    public:
        static int fun();
};

int Item::fun() {
    return value;
}

int Item::value{23};

int main()
{
    cout << Item::fun() << "\n";
    return 0;
}
#endif
