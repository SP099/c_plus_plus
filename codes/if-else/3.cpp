#include<iostream>

int main()
{
    int marks{0};
    std::cout << "Enter marks: ";
    std::cin >> marks;

    if(marks >= 35)
        std::cout << "Pass\n";
    else
        std::cout << "Fail\n";
    return 0;
}
