#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void addRE(string &num1, int p1, string &num2, int p2, int carry, string &ans) {
        // Base Case
        if (p1 < 0 && p2 < 0) {
            if (carry != 0) {
                ans.push_back(carry + '0');
            }
            return;
        }

        // Solve one case
        int n1 = (p1 >= 0 ? num1[p1] : '0') - '0';
        int n2 = (p2 >= 0 ? num2[p2] : '0') - '0';
        int sum = n1 + n2 + carry;
        int digit = sum % 10;
        carry = sum / 10;
        ans.push_back(digit + '0');

        // Recursive call
        addRE(num1, p1 - 1, num2, p2 - 1, carry, ans);
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        addRE(num1, num1.size() - 1, num2, num2.size() - 1, 0, ans);
        reverse(ans.begin(), ans.end());
        return ans;
    }

    string multiplySingleDigit(string num1, char digit, int zeros) {
        int carry = 0;
        int d = digit - '0';
        string ans(zeros, '0');

        for (int i = num1.size() - 1; i >= 0; i--) {
            int n1 = num1[i] - '0';
            int product = n1 * d + carry;
            int digit = product % 10;
            carry = product / 10;
            ans.push_back(digit + '0');
        }

        if (carry != 0) {
            ans.push_back(carry + '0');
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }

    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        string result = "0";
        for (int i = num2.size() - 1; i >= 0; i--) {
            string singleProduct = multiplySingleDigit(num1, num2[i], num2.size() - 1 - i);
            result = addStrings(result, singleProduct);
        }

        return result;
    }
};

int main() {
    Solution solution;
    string num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    string result = solution.multiply(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
