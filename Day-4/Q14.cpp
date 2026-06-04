#include <iostream>
int fibonacci(int n);
 int main()
 {
   int n;
   std:: cout<<"Write the nth term of whose Fibonacci number you want: ";
    std::cin>>n;
  
   std::cout<< fibonacci(n)<<" ";
  
    return 0;
 }
 int fibonacci(int n)
 {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
   return fibonacci(n-1)+fibonacci(n-2);

    
 }