#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
int main()
{
    int guess,n;
    std::cout<<"Computer guesses a number, choose range:";
    std::cin>>n;
    srand(time(0));
    int randomnum=rand()%n+1;
     std::cout << "Guess the number from 1 to " << n << ": ";
    
    for(int i=0;i<100;i++)
    {
           std::cin >> guess ;
        if(guess==randomnum)
        {
        std::cout<<"Correct guess!";
        break;
        }
     
        else if (abs(randomnum-guess)<=10&&guess!=randomnum)
        {
        std::cout << "You are close!\n";
        }
        else
        {
        std::cout<<"Wrong Guess";
        }
    }
}