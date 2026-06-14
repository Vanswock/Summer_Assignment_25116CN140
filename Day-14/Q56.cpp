#include <iostream>
int duplicateFinder(int a[], int n)
{
    
    for(int i=0;i<n;i++)
    { for(int i = 0; i < n; i++)
    {
        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++)
        {
            if(a[i] == a[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        int c = 0;

        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                c++;
            }
        }

        if(c > 1)
        {
            std::cout << a[i] << " is a duplicate\n";
        }
    }

    return 0;
}
       
    
}
int main()
{
    int n;
    std::cout<<"Enter number of digit in array: ";
    std::cin>>n;
    int a[n];
    std::cout<<"Enter array digits: \n";
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
  
    duplicateFinder(a,n);
    return 0;
}
