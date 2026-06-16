#include <iostream>
int pairofSum(int a[], int n,int sum)
{
    int temp=INT32_MIN,ele,maxFreq=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i + 1;j<n;j++)
        {   
            if(sum==a[i]+a[j])
            {
                std::cout<<a[i]<<" and "<<a[j]<<" is equal to "<<sum<<"\n";
            }
        }
    }
    return 0;
}
int main()
{
    int n,sum;
    std::cout<<"Enter number of digit in array: ";
    std::cin>>n;
    int a[n];
    std::cout<<"Enter array digits: \n";
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::cout<<"Write the sum you want to find pairs of: ";
    std::cin>>sum;
    pairofSum(a,n,sum);
}