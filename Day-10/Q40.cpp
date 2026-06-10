#include <iostream>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int k=0;k<5-i;k++)
        {
            std::cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            std::cout<<char('A'+j);
        }
          for(int j = i - 1; j >= 0; j--) {
            std::cout<< char('A'+j);
        }
        std::cout<<"\n";
    }
}