#include <iostream>
int arrayOECOUNT(int a[], int n)
{   int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
       if(a[i]%2==0)
       {
       even++;
       }
      else
       {
        odd++;
       }
    }
    std::cout<<"Count of Even element in Array is "<<even<<"\n Count of Odd element in Array is "<<odd;
   
    return 0;
}
int main()
{
    int n;
    std::cout<<"Enter number of digit in array: ";
    std::cin>>n;
    int a[n];
    std::cout<<"Enter array digits: \n";
    arrayOECOUNT(a,n);
    return 0;
}