#include<bits/stdc++.h>
using namespace std;

int largestValue(const vector<int>& arr) {
    int n = arr.size();
    int maxValue = INT_MIN;

    for (int i = 0; i < n; ++i) {
        long long sum = 0, sumOfSquares = 0;
        for (int j = i; j < n; ++j) {
            sum += arr[j];
            sumOfSquares += arr[j] * arr[j];
            long long subarrayValue = (sum * sum - sumOfSquares) / 2;
            maxValue = max(maxValue, static_cast<int>(subarrayValue));
        }
    }

    return maxValue;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    cout << largestValue(arr) << endl;
    return 0;
}
