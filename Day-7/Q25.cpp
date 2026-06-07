#include <iostream>
int fibonicci(int n);
int main() 
{
    int n;
    std::cout<<"Enter a number whose factorial you want:";
    std::cin>>n;
    std::cout<<fibonicci(n);
    
    return 0;

}
int fibonicci(int n)
{
    if(n==1||n==0)
    return 1;
    if(n>1)
    return n*fibonicci(n-1);
}