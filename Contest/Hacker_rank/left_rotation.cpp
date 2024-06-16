#include <bits/stdc++.h>
using namespace std;

vector<int> rotateLeft(int d, vector<int>& arr) {
    int n = arr.size();
    // To handle cases where d is greater than the length of the array
    d = d % n;
    // Create a result vector
    vector<int> rotatedArr(n);
    
    // Fill the rotated array with the appropriate elements
    for (int i = 0; i < n; ++i) {
        rotatedArr[i] = arr[(i + d) % n];
    }
    
    return rotatedArr;
}

int main() {
    int n, d;
    cout<<"Enter the number of elements:";
    cin >> n;
    cout<<"Enter the number of rotation:";
    cin >> d;
    vector<int> arr(n);
    cout<<"Insert the elements in the vector:"<<endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Function Call
    vector<int> result = rotateLeft(d, arr);

    // Print the result
    cout<<"After the rotation:";
    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
