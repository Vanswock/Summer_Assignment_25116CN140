#include <iostream>
#include <cmath>

 int main()
 {
    int s,e,powerextractor,armstrongnumberfinder;
    std::cout<<"Enter a range (Make sure that first number is smaller than second one): ";
    std::cin>>s>>e;
    for(int i=s;i<=e;i++)
    {
        int power=0,sum=0;
        powerextractor=i;
        armstrongnumberfinder=i;
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
        if(sum==i)
        {
            std::cout<<i<<" ";
        }
       
    }
 }
