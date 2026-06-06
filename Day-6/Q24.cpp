#include <iostream>

int main() 
{
int n,pow,ans=1;
std:: cout<<"Write number and power raised: ";
std::cin>>n>>pow;
for(int i=1;i<=pow;i++)
{
    ans=ans*n;
}
std::cout<<ans <<" is power raised";

}