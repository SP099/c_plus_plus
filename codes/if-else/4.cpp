#include<iostream>

int main()
{
    int score{84};

    if(score >= 90)
    {
        std::cout << "Grade A\n";
    }
    else if(score >= 80)
    {
        std::cout << "Grade B\n";
    }
    else if(score >= 70)
    {
        std::cout << "Grade C\n";
    }
    else 
    {
        std::cout << "Grade F\n";
    }

    return 0;
}
