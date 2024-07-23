#include <bits/stdc++.h>
using namespace std;

// Function to calculate the next gap
int nextGap(int gap) {
    if (gap <= 1)
        return 0;
    return (gap / 2) + (gap % 2);
}

// Function to merge two sorted subarrays in-place
void inPlaceMerge(vector<int>&arr, int s, int mid, int e) {
    int gap = nextGap(e - s + 1);
    while (gap > 0) {
        for (int i = s; i + gap <= e; i++) {
            int j = i + gap;
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
        gap = nextGap(gap);
    }
}

// Function to perform in-place merge sort
void mergeSortInPlace(vector<int>&arr, int s, int e) {
    if (s < e) {
        int mid = s + (e - s) / 2;

        // Sorting the left part of the array
        mergeSortInPlace(arr, s, mid);

        // Sorting the right part of the array
        mergeSortInPlace(arr, mid + 1, e);

        // Merging the sorted parts
        inPlaceMerge(arr, s, mid, e);
    }
}

int main() {
    vector<int>arr;
    int n;
    cout<<"Size of the array:";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int s = 0;
    int e = n - 1;

    mergeSortInPlace(arr, s, e);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
