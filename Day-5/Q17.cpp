#include <iostream>

 int main()
 {
    int N,c=0;
    std::cout<<"Enter a number: ";
    std::cin>>N;
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
