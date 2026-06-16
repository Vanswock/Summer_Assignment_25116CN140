#include <iostream>
int duplicateRemover(int a[], int n)
{
    int temp=INT32_MIN,ele,maxFreq=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i + 1;j<n;j++)
        {   
            if(a[i]==a[j])
            {
                for(int k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;

            }
        }
    }
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
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    duplicateRemover(a,n);
}