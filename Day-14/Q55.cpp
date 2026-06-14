#include <iostream>
int arrayMaxMin(int a[], int n)
{   int max=-(INT32_MAX),secondmax=-(INT32_MAX);
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
   for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            secondmax = max;
            max = a[i];
        }
        else if(a[i] > secondmax && a[i] != max)
        {
            secondmax = a[i];
        }
    }
    std::cout<<"2nd largest element in Array is "<<secondmax;
   
    return 0;
}
int main()
{
    int n;
    std::cout<<"Enter number of digit in array: ";
    std::cin>>n;
    int a[n];
    std::cout<<"Enter array digits: \n";
    arrayMaxMin(a,n);
    return 0;
}