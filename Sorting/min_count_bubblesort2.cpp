#include <bits/stdc++.h>
using namespace std;

// swap count of ascending order
int bubbleSortAscendingHelper(vector<int>& arr) {
    int swapCount = 0;
    bool swapped;
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapCount++;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    return swapCount;
}

// swap count of descending order
int bubbleSortDescendingHelper(vector<int>& arr) {
    int swapCount = 0;
    bool swapped;
    int n = arr.size();
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapCount++;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
    return swapCount;
}

int main() {
    int n;
    cout << "Array size: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> arrCopyAsc = arr;
    vector<int> arrCopyDesc = arr;

    int ascendingSwaps = bubbleSortAscendingHelper(arrCopyAsc);
    int descendingSwaps = bubbleSortDescendingHelper(arrCopyDesc);

    cout << "Minimum swap required is: " << min(ascendingSwaps, descendingSwaps) << endl;

    return 0;
}
