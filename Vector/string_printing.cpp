#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter a string: ";

    // Read input from the user
    string userInput;
    getline(cin, userInput);

    // Use stringstream to extract and output each word
    stringstream ss(userInput);
    string word;

    while (ss >> word)
    {
        cout << word <<endl;
    }

    return 0;
}