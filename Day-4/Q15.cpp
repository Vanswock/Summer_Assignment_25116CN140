#include <iostream>
#include <cmath>

 int main()
 {
    int n,power=0,powerextractor,armstrongnumberfinder,sum=0;
    std::cout<<"Enter a number: ";
    std::cin>>n;
    powerextractor=n;
    armstrongnumberfinder=n;
    while(powerextractor!=0)
    {
    power++;
     powerextractor=powerextractor/10;
    }
    while(armstrongnumberfinder!=0)
    {
    sum=pow((armstrongnumberfinder%10),power)+sum;
    armstrongnumberfinder=armstrongnumberfinder/10;
    }
    if(sum==n)
    {
        std::cout<<n<<" is armstrong number";
    }
    else
    {
        std::cout<<n<<" is not armstrong number";
    }
    return 0;
 }
