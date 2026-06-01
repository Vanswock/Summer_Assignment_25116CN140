// Write a program to Calculate sum of first N natural numbers.

#include <iostream>
int main()
{
int N,sum=0;
std::cout<<"Input a number:";
std::cin >> N;
for(int i=0;i<=N;i++)
{
    sum+=i;
}
std::cout<<sum<<" is the sum of "<<N<<" natural numbers";
return 0;
}