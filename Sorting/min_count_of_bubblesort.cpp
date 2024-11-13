#include <bits/stdc++.h>
using namespace std;

// count swaps of ascending order
int bubbleSortAscendingHelper(vector<int>arr, int n) {
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }
    }
    return swapCount;
}

//count swaps for descending order
int bubbleSortDescendingHelper(vector<int>arr, int n) {
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }
    }
    return swapCount;
}

int main() {
    int n;
    cout<<"Array size:";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ascendingSwaps = bubbleSortAscendingHelper(arr, n);
    int descendingSwaps = bubbleSortDescendingHelper(arr, n);

    // minimum swap
    cout << "minimum swap required is:"<< min(ascendingSwaps, descendingSwaps) << endl;

    return 0;
}
