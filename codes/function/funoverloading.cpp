#include<iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}
double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << add(5, 1) << endl;
    cout << add(3.3, 3.3) << endl;
    cout << add(1,2,3) << endl;
    return 0;
}
