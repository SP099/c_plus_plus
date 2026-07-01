#include<iostream>

int sumNatural(int n)
{
    int sum{0};
    int i{1};

    while(i <= n)
    {
        sum += i;
        i++;
    }
    return sum;
}

int main()
{
    int n{100};
    std::cout << "Sum of " << n <<" natural numbers = "
              << sumNatural(n) << "\n";
    return 0;
}
