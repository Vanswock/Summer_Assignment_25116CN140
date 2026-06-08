#include <iostream>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            std::cout<<char('A'+j);
        }
        std::cout<<"\n";
    }
}