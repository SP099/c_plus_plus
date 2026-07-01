#include<iostream>

using namespace std;

int main()
{
    int limit{0}, i{0};

    cout << "Enter the Limit: ";
    cin >> limit;

    cout << "Even numbers:" << endl;
    for(i; i <= limit; i++)
    {
        if(i % 2 == 0) cout << i << " ";
    }
    cout << endl;
    cout << "Odd numbers:" << endl;
    for(i = 0; i <= limit; i++)
    {
        if(i % 2 != 0) cout << i << " ";
    }
    cout << endl;
    return 0;
}

