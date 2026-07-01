#include <iostream>

using namespace std;

void printAarry(const int arr[], int size)
{
    int i{0};
    for(i; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int marks[] = {1,2,3,4,5};
    printAarry(marks, 5);
    return 0;
}
