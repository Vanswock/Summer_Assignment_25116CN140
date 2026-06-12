#include <iostream>
int perfectFinder(int N)
{
   int rev=0,c=N;
while(N!=0)
{
    
 rev=rev*10+N%10;
N= N/10;
}
if(c==rev)
{
std::cout<<c<<" is a palindrome";
}
else
{
 std:: cout<<"Not a palindrome";
}
return 0;
}
int main()
{
     int N;
    std::cout<<"Input a number: ";
    std::cin>>N;
    perfectFinder(N);
}