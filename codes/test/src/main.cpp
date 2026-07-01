#include<iostream>
#include "max_utils.hpp"
#include "sum.hpp"

int main()
{
    std::cout << "Value Rterun by findMax function = "
              << findMax(10, 20, 30) << "\n";
    std::cout << "Sum of two numbers = "
              << sum(1, 2) << "\n";
    return 0;
}
