#include <iostream>
 int fibonicci(int n);
 int main()
 {  int n,a,c=0;
    std:: cout<<"Enter a number to check if it is a power number: ";
    std::cin>>n;
    a=n;
    while(n!=0)
    {  
        c+=fibonicci(n%10);
        n=n/10;
    }
    if(a==c)
    {
        std::cout<<a<< " is power number";
    }
    else
    {
         std::cout<<a<< "is NOT power number";
    }
 }
 int fibonicci(int n)
 {
    if(n==0||n==1)
    return 1;
    if(n>1)
    return n*fibonicci(n-1);
 }
