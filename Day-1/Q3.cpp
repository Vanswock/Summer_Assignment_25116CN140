#include <iostream>
int main()
{
int N,factorial=1;
std::cout<<"Input a number:";
std::cin >> N;
for(int i=1;i<=N;i++)
{
    factorial =factorial*i;
}
std::cout<<factorial<<" is the factorial of "<<N;
return 0;
}