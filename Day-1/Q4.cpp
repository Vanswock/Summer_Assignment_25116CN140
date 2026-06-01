#include <iostream>
int main()
{
int N,count=0,i;
std::cout<<"Input a number:";
std::cin >> N;
while(N!=0)
{
    N=N/10;
    count+=1;
}
std::cout<<count<<" is the count of number of digits in "<<N;
return 0;
}