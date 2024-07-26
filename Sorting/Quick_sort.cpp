#include<bits/stdc++.h>
using namespace std;

// TC- O(nlogn)

int partition(int* arr, int s, int e) {
    int pivot = arr[s];
    int count = 0;
    
    // Count elements less than pivot
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    // Place pivot at the correct position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Partition the array
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int* arr, int s, int e) {
    // Base case
    if (s >= e) {
        return;
    }

    // Partition the array
    int p = partition(arr, s, e);

    // Sort the left and right parts
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main() {
    int arr[] = {8, 1, 20, 30 , 6, 5, 60 , 5};
    int s = 0;
    int e = sizeof(arr) / sizeof(arr[0]) - 1;

    quickSort(arr, s, e);

    for (int i = 0; i <= e; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
