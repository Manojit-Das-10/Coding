#include <bits/stdc++.h>
using namespace std;

// TC - O(nlogn) & O(n)

void merge(int *arr, int s, int e) {
    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Create arrays of len1 and len2
    int *left = new int[len1];
    int *right = new int[len2];

    int m = 0;
    // Copying the values into the left array
    for (int i = 0; i < len1; i++) {
        left[i] = arr[m];
        m++;
    }

    int k = mid+1;
    // Copying the values into the right array
    for (int i = 0; i < len2; i++) {
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    // Merging the arrays back into the main array
    while (leftIndex < len1 && rightIndex < len2) {
        if (left[leftIndex] <= right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        } 
        else {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // Copying the remaining elements of left array, if any
    while (leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // Copying the remaining elements of right array, if any
    while (rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // Free the allocated memory
    delete[] left;
    delete[] right;
}

void mergeSort(int *arr, int s, int e) {
    // base case: if array contains one or no elements
    if (s >= e) {
        return;
    }

    int mid = (s + e) / 2;

    // Sorting the left part of the array
    mergeSort(arr, s, mid);

    // Sorting the right part of the array
    mergeSort(arr, mid + 1, e);

    // Merging the sorted parts
    merge(arr, s, e);
}

int main() {
    int arr[] = {5, 2, 6, 12, 3, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = 0;
    int e = n - 1;

    mergeSort(arr, s, e);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
