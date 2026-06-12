#include <iostream>
int perfectFinder(int N)
{
 int c=0;
    for(int i=1;i<N;i++)
    {
        if(N%i==0)
        {
            c+=i;
        }
    }
    if(c==N)
    {
        std::cout<<N<<" is a perfect number";
    }
    else
    {
        std::cout<<N<<" is not a perfect number";
    }
}
int main()
{
     int N;
    std::cout<<"Input a number: ";
    std::cin>>N;
    perfectFinder(N);
}