#include<iostream>

int main()
{
    int num{5};

    if(num % 2 == 0)
        std::cout << "Even\n";
    else
        std::cout<< "Odd\n";
    return 0;
}
