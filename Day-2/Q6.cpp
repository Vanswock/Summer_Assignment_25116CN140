#include <iostream>

int main()
{
int N,c,rev=0;
std::cout<<"Input a number:";
std::cin >> N;
c=N;
while(N!=0)
{
    
 rev=rev*10+N%10;
N= N/10;
}
std::cout<<rev<<" is the reverse of digits of number "<<c;
return 0;
}