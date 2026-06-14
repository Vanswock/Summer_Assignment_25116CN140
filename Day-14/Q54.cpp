#include <iostream>
int frequencyFinder(int a[], int n, int ask)
{
    
    for(int i=0;i<n;i++)
    {int c=0;
        for(int j=0;j<n;j++)
        {   
            if(a[i]==a[j])
            {
                c++;
            }
            
        }
        if(a[i]==ask)
        {
        std::cout<<a[i]<<" appears "<<c<<" times in the array \n";
        break;
        }
        else
        {
             std::cout<<ask<<" appears 0 times in the array \n";
        break;
        }
    }
   
    return 0;
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
    int ask;
    std::cout<<"Which number's frequency you want to find? \n";
    std::cin>>ask;
    frequencyFinder(a,n,ask);
    return 0;
}