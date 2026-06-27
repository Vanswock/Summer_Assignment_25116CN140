#include <iostream>
#include <string>
using namespace std;
int main()
{
    string fname,lname,nationality,cleaned="";
   
    int age,j=0;
    cout<<"Enter your First name: \n";
    cin>> fname;
     cout<<"Enter your Last name: \n";
    cin>> lname;
    cout<<"\n Enter your age: \n";
    cin>>age;
    cin.ignore();
     cout<<"\n Enter your Nationality: \n";
    getline(cin,nationality);
    
    

for (int i = 0; i < nationality.length(); i++)
{
    if (nationality[i] != ' ')
    {
        cleaned += nationality[i];
    }
}

nationality = cleaned;
     for (int i = 0; nationality[i] != '\0'; i++)
    {
        if (nationality[i] >= 'a' && nationality[i] <= 'z')
        {
            nationality[i] = nationality[i] - 32;
        }
    }
    if(age>=18&&nationality=="INDIAN")
    {
        cout<<fname<<" "<<lname<<" is eligible to vote.";
    }
    else
    {
        cout<<fname<<" "<<lname<<" is not eligible.";
    }
}