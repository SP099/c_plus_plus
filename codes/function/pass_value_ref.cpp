#include <iostream>

using namespace std;

void byValue(int x)
{
    x = 345;
}

void byRef(int &x)
{
    x = 34;
}

int main()
{
    int num{10};
    byValue(num);

    cout << "After byValue: " << num << endl;

    byRef(num);
    cout << "After Ref: " << num << endl;

    return 0;
}
