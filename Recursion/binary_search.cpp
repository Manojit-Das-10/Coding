#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& v, int s, int e, int key) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (v[mid] == key) {
            return mid;
        } 
        else if (v[mid] < key) {
            s = mid + 1;
        } 
        else {
            e = mid - 1;
        }
    }
    return -1; // Key not found
}

int main() {
    int n;
    cout<<"Range: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int key;
    cout << "search element: ";
    cin >> key;

    int ans = binary_search(v, 0, n - 1, key);

    if (ans != -1) {
        cout << "Element found at: " << ans;
    } 
    else {
        cout << "Element not found.";
    }

    return 0;
}
