#include <bits/stdc++.h>
using namespace std;

int minSwapsToGroupRedBalls(const string &balls) {
    vector<int> redPositions;

    // Collect positions of all red balls
    for (int i = 0; i < balls.size(); ++i) {
        if (balls[i] == 'R') {
            redPositions.push_back(i);
        }
    }

    // If there are no red balls or only one red ball, no swaps are needed
    if (redPositions.empty() || redPositions.size() == 1) {
        return 0;
    }

    // Find the median position
    int n = redPositions.size();
    int medianIndex = n / 2;
    int medianPos = redPositions[medianIndex];

    // Calculate the minimum swaps
    int swaps = 0;
    for (int i = 0; i < n; ++i) {
        swaps += abs(redPositions[i] - (medianPos - (medianIndex - i)));
    }

    return swaps;
}

int main() {
    string balls;
    cout << "Enter the string of balls: ";
    cin >> balls;

    int result = minSwapsToGroupRedBalls(balls);
    cout << "Minimum adjacent swaps to group red balls: " << result << endl;

    return 0;
}
