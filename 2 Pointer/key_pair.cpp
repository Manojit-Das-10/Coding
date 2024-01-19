#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    sort(arr,arr+n);
	    int sum = 0;
	    int left=0;
	    int right=n-1;
	    while(left<right)
	    {
	        sum = arr[left]+arr[right];
	        if(sum==x)
	        {
	            return true;
	        }
	        else if(sum<x)
	        {
	            left++;
	        }
	        else
	        {
	            right--;
	        }
	    }
	    return false;
	}
};

int main()
{


return 0;
}