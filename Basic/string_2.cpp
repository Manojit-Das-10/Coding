#include <bits/stdc++.h>
using namespace std;

void allSubstring(string str) {
    int n = str.length();
    for (int len = 1; len <= n; len++) { // Length of substring
        for (int i = 0; i <= n - len; i++) { // Start index of substring
            int j = i + len - 1; // End index of substring
            for (int k = i; k <= j; k++) { // Print characters of the substring
                cout << str[k];
            }
            cout << endl;
        }
    }
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;
    allSubstring(str);

    return 0;
}
