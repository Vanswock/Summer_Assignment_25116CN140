#include <iostream>

int main()
{
      int n, m;

    std::cout << "Enter size of first array: ";
    std::cin >> n;
    int a[n];

    std::cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    std::cout << "Enter size of second array: ";
    std::cin >> m;
    std::cout << "Enter elements of second array:\n";
    int b[m];
    for (int i = 0; i < m; i++)
       {
         std::cin >> b[i];
       }
    
    if(n>m)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i]==b[j])
                std::cout<<a[i];
            }
        }
    }
   else if(m>n)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(b[i]==a[j])
                std::cout<<a[i]<<" is common in both arrays";
            }
        }
    }
}