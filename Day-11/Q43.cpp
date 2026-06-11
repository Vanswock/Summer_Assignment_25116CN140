#include <iostream>
int factorialFinder(int N)
{
   int c=0;
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
int main()
{
     int N;
    std::cout<<"Input a number: ";
    std::cin>>N;
    factorialFinder(N);
}