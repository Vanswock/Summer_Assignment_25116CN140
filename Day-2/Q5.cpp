#include <iostream>

int main()
{
int N,c,sum=0,i;
std::cout<<"Input a number:";
std::cin >> N;
c=N;
while(N!=0)
{
    sum+=N%10;
    N=N/10;
}
std::cout<<sum<<" is the sum of digits of number "<<c;
return 0;
}
