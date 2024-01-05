#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleElement(int arr[], int N) {
        sort(arr, arr + N);
        for (int i = 0; i < N; i += 3) {
            if (i + 2 >= N || arr[i] != arr[i + 1] || arr[i + 1] != arr[i + 2]) {
                return arr[i];
            }
        }
        return -1;
    }
};

int main()
{


return 0;
}