#include<iostream>

#if 0
void arrayStats(int arr[], int size)
{
    int sum{0};
    int i{0};
    for(i; i < size; i++)
    {
        sum += arr[i];
    }
    std::cout << "Sum = " << sum
              << "\nAverage = " << (float)sum / size;
}

int main()
{
    int marks[6] = {1, 2, 3, 4, 5, 6};
    arrayStats(marks, 6);
    std::cout << "\n";
    return 0;
}
#endif

#if 0 
void findMaxMin(int arr[], int size)
{
    int i{0};
    int max = arr[0], min = arr[0];

    for(i; i < size; i++)
    {
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    std::cout << "Max = " << max << "\nMin = " << min << "\n";
}

int main()
{
    int nums[6] = {1, 2, 3, 4, 5, 6};
    findMaxMin(nums, 6);
    return 0;
}
#endif

#if 0 
void rev(int arr[], int size)
{
    int i{0};
    int temp{0};

    for(i; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

    std::cout << "Rev nums: ";
    for(i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int nums[6] = {1, 2, 3, 4, 5, 6};
    rev(nums, 6);
    std::cout << "\n";
    return 0;
}
#endif

#if 0 
void swapN(int &a, int &b)
{
#if 0
    int temp = a;
    a = b;
    b = temp;
#endif

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main()
{
    int a{0}, b{1};
    swapN(a, b);
    std::cout << "a = " << a
              << "\nb = " << b  << "\n";
    return 0;
}
#endif

#if 0
long long fact(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * fact(n -1);
}

int main()
{
    std::cout << "Factorial of 5 = " << fact(5) << "\n";
    return 0;
}
#endif

#if 0 
int fib(int n)
{
    if(n <= 1) return n;
    return fib(n -1) + fib(n - 2);
}

int main()
{
    int i{0};
    std::cout << "Fibonacci series: " ;
    for(i; i < 10; i++)
        std::cout << fib(i) << " ";

    std::cout << "\n";
    return 0;
}
#endif


#if 1
int main()
{
    int num = 100;
    int *ptr = &num;

    std::cout << "value of num = " << num << "\n";
    std::cout << "address = " << ptr << "\n";
    std::cout << "value using pointer = " << *ptr << "\n";

    *ptr = 99;
    std::cout << "new value = " << num << "\n";
    return 0;
}
#endif
