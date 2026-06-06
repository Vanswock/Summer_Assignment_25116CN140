#include <iostream>

int main()
 {
    int n;
    std::cout << "Enter a decimal number: ";
    std::cin >> n;

    if (n == 0) 
    {
     std::cout << "Binary is 0";
     return 0;
    }

    int binary[32];
    int i = 0;

    while (n > 0) 
    {
     binary[i] = n % 2;
     n = n / 2;
     i++;
    }

    std::cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--)
    {
     std::cout << binary[j];
    }

    return 0;
}