#include <iostream>
int main()
{
    int S,E,x,y;
     std::cout<<"Input 2 numbers whose HCF you want to find: ";
    std::cin>>S>>E;
   x=S;
    y=E;
    
    while (E != 0)
    {
        int temp = E;
        E = S % E;
        S = temp;
    }
       std::cout << "LCM = " << x*y/S;
       
    
   
}