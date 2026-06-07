#include <iostream>
int sum(int n);
int main() 
{
    int n;
    std::cout<<"Enter a number whose sum you want:";
    std::cin>>n;
    
        std::cout<<sum(n);
    return 0;
}
int sum(int n)
{
       if (n == 0)
        return 0;

    return (n % 10) + sum(n / 10);
}