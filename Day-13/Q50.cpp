#include <iostream>
int arraySum(int a[], int n)
{   int sum=0;
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
     for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    std::cout<<"Your array sum is: "<<sum<<"\n";
    std::cout<<"Average of array is: "<<(float)sum/n;
    

    return 0;
}
int main()
{
    int n;
    std::cout<<"Enter number of digit in array: ";
    std::cin>>n;
    int a[n];
    std::cout<<"Enter array digits: \n";
    arraySum(a,n);
    return 0;
}