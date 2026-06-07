#include <iostream>
int fibonicci(int n);
int main() 
{
    int n;
    std::cout<<"Enter a number whose fibonicci series you want:";
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
    std::cout<<fibonicci(i);
    }
    return 0;

}
int fibonicci(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    if(n>1)
    return fibonicci(n-1)+fibonicci(n-2);
}