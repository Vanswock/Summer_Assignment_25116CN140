#include <iostream>


int main() 
{
int n;
std::cout << "Enter a number: ";
std::cin >> n;

int count = 0;

while (n > 0) 
{
    count += n % 2;  // Add 1 if last bit is set
    n /= 2;
}
std::cout << "Number of set bits: " << count;
return 0;
}