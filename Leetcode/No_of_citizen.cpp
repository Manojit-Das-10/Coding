#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            int k = 10;

            // stoi means string to integer
            for (int j = 11; j < 13; j++) {
                sum += stoi(details[i].substr(j, 1)) * k;
                k = k / 10;
            }

            if (sum > 60) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution sol;

    // Test with sample vector of details
    vector<string> details = {"John 01-01-1950", "Alice 05-12-1965", "Bob 03-02-1940"};

    // Call the countSeniors function
    int seniorsCount = sol.countSeniors(details);

    // Print the count of seniors
    cout << "Number of seniors: " << seniorsCount << endl;

    return 0;
}
