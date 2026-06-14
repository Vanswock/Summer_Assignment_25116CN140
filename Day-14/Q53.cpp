#include <iostream>
int linearSearch(int a[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
           std::cout<<"Found "<<key<<" at element "<<i+1;
        }
        else{
            std::cout<<"Element don't exist in array";
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
    for(int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    int key;
    std::cout<<"Enter the element you want to find: ";
    std::cin>>key;
    linearSearch(a,n,key);
    return 0;
}