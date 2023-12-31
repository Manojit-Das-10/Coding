#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int>arr;
    // int index=0;
    for(int i=0; i<nums1.size(); i++)
    {
        arr.push_back(nums1[i]);
        // index++;
    }
    for(int j=0; j<nums2.size(); j++)
    {
        arr.push_back(nums2[j]);
    }
    sort(arr.begin(), arr.end());
    double median;
    int size = arr.size();
    if(size %2 == 0)
    {
        int sum = size/2;
        median = (arr[sum]+arr[sum-1])/2.0;
    }
    else
    {
        int sum = size/2;
        median = arr[sum];
    }
    return median;
    }
};

