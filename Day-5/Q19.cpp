#include <iostream>
 
 int main()
 {  int n,a,c=0;
    std:: cout<<"Enter a number whose factors you want to find: ";
    std::cin>>n;
    if(n==1||n==0)
    {
        std::cout<<"Is the number entered 0 or 1?";
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if( n%i==0)
            {
                std:: cout<< i<<" ";
            }
        }
    }    
 }
 