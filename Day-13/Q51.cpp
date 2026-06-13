#include <iostream>
int arrayMaxMin(int a[], int n)
{   int max=-(INT32_MAX),min=(INT32_MAX);
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]>max)
       {
        max=a[i];
       }
       if(a[i]<min)
       {
        min=a[i];
       }
    }
    std::cout<<"Max element in Array is "<<max<<"\n Min element in Array is "<<min;
   
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