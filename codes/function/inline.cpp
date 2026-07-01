#include <iostream>
using namespace std;

inline int square(int a)
{
    return a * a;
}

int main()
{
    cout << square(5) << endl;
    cout << square(2) << endl;
    return 0;
}
