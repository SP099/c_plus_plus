#include<iostream>

/*
 * new and delete operators for arrays
 * syntax: pointer_variable = new data_type[size];
 *         delete[] pointer_variable;
 */
int main() {
    int n{};
    std::cin >> n;
    int* p = new int[n];

    for(int i = 0; i < n; i++) {
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> p[i];
    }
    for(int i = 0; i < n; i++) {
        std::cout << p[i] << " ";
    }
    delete[] p;
    std::cout << "\n";
    return 0;
}
