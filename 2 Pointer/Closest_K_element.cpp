#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l=0, h=arr.size()-1;
        while(h-l>=k)
        {
            if(x-arr[l] > arr[h]-x)
            {
                l++;
            }
            else{
                h--;
            }
        }
        // vector<int>ans;
        // for(int i=l ; i<=h; i++)
        // {
        //     ans.push_back(arr[i]);
        // }
        // return ans;

        return vector<int>(arr.begin()+l , arr.begin()+h+1);
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    int x = 4;

    vector<int> result = solution.findClosestElements(arr, k, x);

    cout << "Closest " << k << " elements to " << x << " are: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;


return 0;
}