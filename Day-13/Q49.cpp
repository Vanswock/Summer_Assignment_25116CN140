#include <iostream>
int array(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"Your array is:\n";
     for(int i=0;i<n;i++)
    {
        std::cout<<a[i]<<" ";
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
    array(a,n);
    return 0;
}
