#include <iostream>
int frequencyFinder(int a[], int n)
{
    int temp=INT32_MIN,ele,maxFreq=INT32_MIN;
    for(int i=0;i<n;i++)
    {int c=0;
        for(int j=0;j<n;j++)
        {   
            if(a[i]==a[j])
            {
                c++;
            }
            if(temp<c)
            {
                temp=c;
                ele=a[i];
            }
        }
        
       
    }
     std::cout<<ele<<" has highest frequency with frequency of "<<temp;
   
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
    frequencyFinder(a,n);
   
}