#include <iostream>

using namespace std;

int mul(int a, int b)
{
    return a * b;
}

int main()
{
    int (*fptr) (int, int) = mul;
    cout << "product = " << fptr(2,2) << endl;
    return 0;
}
