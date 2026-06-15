#include <iostream>
int array(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
   

    return 0;
}
void moveZerosToEnd(int a[], int n)
{
    int j = 0;

    // Move all non-zero elements to the front
    for(int i = 0; i < n; i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    // Fill remaining positions with zeros
    while(j < n)
    {
        a[j] = 0;
        j++;
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
}
int main()
{
    int n;
    std::cout<<"Enter number of digit in array: ";
    std::cin>>n;
    int a[n];
    std::cout<<"Enter array digits: \n";
    array(a,n);
    moveZerosToEnd(a,n);
    return 0;
}