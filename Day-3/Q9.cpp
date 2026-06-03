#include <iostream>
int main()
{
    int N,c=0;
    std::cout<<"Input a number: ";
    std::cin>>N;
    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            c++; 
        }
    }
    if(c==2)
    {
        std::cout<<"Number is prime";

    }
    else
    {
        std::cout<<"Number is not prime";
    }
    return 0;
}