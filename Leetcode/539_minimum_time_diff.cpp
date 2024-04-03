#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // Converting the string into integer value
        vector<int> minutes;
        for (int i = 0; i < timePoints.size(); i++) {
            string curr = timePoints[i];
            int hour = stoi(curr.substr(0, 2));
            int min = stoi(curr.substr(3, 2));
            int totalMinutes = (hour * 60) + min;
            minutes.push_back(totalMinutes);
        }
        // sorting array
        sort(minutes.begin(), minutes.end());

        // Finding the difference
        int mini = INT_MAX;
        int n = minutes.size();
        for (int i = 0; i < n - 1; i++) {
            int diff = minutes[i + 1] - minutes[i];
            mini = min(diff, mini);
        }

        // something special
        int lastDiff = (minutes[0] + 1440) - minutes[n - 1];
        mini = min(lastDiff, mini);

        return mini;
    }
};

int main() {
    Solution solution;

    vector<string> timePoints;
    int k;
    cout<<"size of the string:";
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        string time;
        cin >> time;
        timePoints.push_back(time);
    }
    
    int minDifference = solution.findMinDifference(timePoints);
    cout << "Minimum difference in minutes: " << minDifference << endl;

    return 0;
}