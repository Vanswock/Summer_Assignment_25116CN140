#include <iostream>
int array(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
   

    return 0;
}
int arrayrotateLeft(int a[], int n)
{
    int temp = a[0];

for(int i = 0; i < n-1; i++)
{
    a[i] = a[i+1];
}

a[n-1] = temp;
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
    arrayrotateLeft (a,n);
    return 0;
}