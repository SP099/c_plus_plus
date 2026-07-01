#include <iostream>

using namespace std;

void printMessage(const string &msg)
{
    cout << msg << endl;
    //msg = "changed"; //error: const
}
int main()
{
    printMessage("hello from const function");
    return 0;
}
