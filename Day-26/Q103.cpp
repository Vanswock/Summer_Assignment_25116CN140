#include <iostream>
using namespace std;
void ATMMaker();
int main()
{ 
    cout<<"This is a simulation... Of ATM \n";

    cout<<"Welcome To ATM:\n Enter Your Card(press 1)-";

     int i;
     
    cin>>i;

    if(i==1)
    {
        cout<<"\nWhat do you want:- \n \nWithdrew(press 1) \n \n Check Blance(press 2)\n";

        int j;
        cin>>j;
        if(j==1)
        {
            ATMMaker();
        }
        else if(j==2)
        {
            cout<<"Blance is 20000\n \n";
            cout<<"Do you wish to exit?;- Enter Yes or No \n \n";
          string a;
        cin >> a;

        if (a == "Yes")
        {
       
        }
        else if (a == "No")
        {
         ATMMaker();
        }
        }
        else
        {
            cout<<"Invalid choice, exiting ATM...";
        }
    }
else
{
    cout<<"ATM EXITED";
}

    return 0;
}
 void ATMMaker()
 {
     cout<<"Select Amount-\n 1000(press1) \n 2000(press2) \n 5000(press3) \n Enter Amount(press4)\n \n";
            int k;
            
            cin>>  k;
            switch(k)
            {
                case 1: 
                
                    cout<<"Withdrawing 1000 rupees, please collect your cash";
                    break;
                case 2: 
                
                    cout<<"Withdrawing 2000 rupees, please collect your cash";
                    break;
                case 3: 
                
                    cout<<"Withdrawing 5000 rupees, please collect your cash";
                    break;
                case 4: 
                
                    cout<<"Enter your Amount:-";
                    int n;
                    cin>>n;
                    if(n>20000)
                    {
                        cout<<"INSUFFICIENT BALANCE";
                    }
                    else 
                    {
                        cout<<"Withdrawing " <<n;
                    }
                    
                    break;
                      default:
                    cout << "Invalid choice";
                    ATMMaker();
                    

                
            }
 }