#include <iostream>
int factorialFinder(int N)
{
   int c=1;
    for(int i=1;i<=N;i++)
    {
       
            c*=i; 
        
    }
   
        std::cout<<c<<" is factorial of "<<N;

    return 0;
}
int main()
{
     int N;
    std::cout<<"Input a number: ";
    std::cin>>N;
    factorialFinder(N);
}