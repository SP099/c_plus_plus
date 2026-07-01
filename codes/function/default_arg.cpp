#include<iostream>
using namespace std;

int volume(int length, int width = 5, int height = 12)
{
    return length * width * height;
}

int main()
{
    cout << volume(10) << endl;
    cout << volume(10, 3) << endl;
    cout << volume(12, 12, 1) << endl;
    return 0;
}
