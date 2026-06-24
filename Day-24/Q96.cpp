#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string str;
    cout<<"Enter a string:\n";
    getline(cin, str);
    int visited[256] = {0};
    string ans = "";
    for (char ch :str) 
    {
        if (visited[ch] == 0) 
        {
            ans += ch;
            visited[ch] = 1;
        }
    }
    cout << "Removed Duplicate, answer is: " << ans;
    return 0;
}