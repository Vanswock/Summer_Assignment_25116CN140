#include <iostream>

int main()
{
int N,c,prodcut=1;
std::cout<<"Input a number:";
std::cin >> N;
c=N;
while(N!=0)
{
    
 prodcut=prodcut*(N%10);
N= N/10;
}
std::cout<<prodcut<<" is the product of digits of number "<<c;
return 0;
}