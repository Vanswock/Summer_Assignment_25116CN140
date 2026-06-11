#include <iostream>
 
int Maximumfinder(int a,int b)
{
    if(a>b)
    {
        std::cout<<a<<" is greatest";

    }
    if(b>a)
    {
        std::cout<<b<<" is greatest";
    }
    else 
    {
        std::cout<<"Make sure numbers are distinct";
    }
    return 0;
}

int main()
{
    int a,b;
    std::cout<<"Enter two numbers to compare:";
    std::cin>>a>>b;
    Maximumfinder(a,b);
    return 0;
}
