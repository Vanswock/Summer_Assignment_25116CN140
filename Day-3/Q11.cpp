#include <iostream>
int main()
{
    int S,E;
     std::cout<<"Input 2 numbers whose HCF you want to find: ";
    std::cin>>S>>E;
   
    
    while (E != 0)
    {
        int temp = E;
        E = S % E;
        S = temp;
    }
       std::cout << "HCF = " << S;
    
   
}