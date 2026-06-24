#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    string word;
    string longestWord;

    stringstream ss(sentence);

    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;
    cout << "Length: " << longestWord.length() << endl;

    return 0;
}