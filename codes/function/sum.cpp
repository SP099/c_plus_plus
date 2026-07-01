#include <iostream>
using namespace std;

int main()
{
    int num{0}, sum{0};

    while(true)
    {
        cout << "Enter the number (-1 to exit): " << endl;
        cin >> num;

        if(num == -1)
            break;

        sum = sum + num;
    }
    cout << "Sum = " << sum << endl;
}
