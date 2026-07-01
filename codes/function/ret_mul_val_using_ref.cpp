#include<iostream>

using namespace std;

void getMinMax(int arr[], int size, int &min, int &max)
{
    min = max = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min) min = arr[i];
        if(arr[i] > max) max = arr[i];
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int minVal, maxVal;

    getMinMax(arr, 5, minVal, maxVal);
    cout << "Min: " << minVal << ", Max: " << maxVal << endl;
    return 0;
}
