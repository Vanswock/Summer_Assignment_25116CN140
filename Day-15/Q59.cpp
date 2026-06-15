#include <iostream>
int array(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
   

    return 0;
}
int arrayrotateRight(int a[], int n)
{
    int temp = a[n-1];

 for(int i= n-1;i>0;i--)
{
    a[i] = a[i - 1];
}

a[0] = temp;
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
    arrayrotateRight(a,n);
    return 0;
}