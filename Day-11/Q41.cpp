#include <iostream>
int adder(int a,int b)
{
    int c=a+b;
    std::cout<< c;
    return 0;
}

int main()
{
    int a,b;
    std::cout<< "Enter the numbers you want to add: ";
    std::cin>>a>>b;
    adder(a,b);
    return 0;
}
