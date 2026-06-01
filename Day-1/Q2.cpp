#include <iostream>
int main()
{
int N,table=1;
std::cout<<"Input a number whose table you require: ";
std::cin >> N;
for(int i=1;i<=10;i++)
{
    table=i*N;
    std::cout<<N<<"X"<<i<<"="<<table<<"\n";
}
return 0;
}