#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b,c;
    cout<<"Welcome to Maths Quiz form: \n \n";
    int n;
    cout<<"Enter your Name: ";
    getline(cin, a);
     cout<<"Enter your Age: ";
    cin>>n;
     cout<<"Enter your Email: ";
    cin>>b;
    cout<<"Enter Name of your institue: ";
    getline(cin, c);

    if(n<18)
    {
        cout<<"Ineligible";
    }
    else
    {
        cout<<"Quiz Started!";
         int score = 0,ans;


    cout << "\nQuiz Started!\n";

    cout << "\nQ1. What is 5 + 7 ? ";
    cin >> ans;
    if(ans == 12)
        score++;

    cout << "\nQ2. What is 9 * 3 ? ";
    cin >> ans;
    if(ans == 27)
        score++;

    cout << "\nQ3. What is 20 / 4 ? ";
    cin >> ans;
    if(ans == 5)
        score++;

    cout << "\nQuiz Completed!\n";
    cout << "Name: " << a << endl;
    cout << "Score: " << score << "/3" << endl;

    return 0;
    }
}