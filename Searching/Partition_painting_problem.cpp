#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
  
   bool isPossibleSolution(int arr[], int n, int k, long long mid)
    {
        long long timesum = 0;
        int c = 1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>mid)
            {
                return false;
            }
            
            else if (timesum + arr[i] > mid)
            {
                c++;
                timesum = arr[i];
                
                if(c>k)
                {
                    return false;
                }
            }
            
            else 
            {
                timesum = timesum + arr[i];
            }
        }
        return true;
    }
  
    long long minTime(int arr[], int n, int k)
    {
        long long start = 0;
        long long end = 0;
        for(int i=0; i<n; i++)
        {
            end+=arr[i];
        }
        long long ans =-1;
        
        while(start<=end)
        {
            long long mid = start + (end-start)/2;
            if(isPossibleSolution(arr,n,k,mid))
            {
                ans =  mid;
                end = mid -1;
            }
            else 
            {
                start = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{

int k,n;
cout<<"Enter the no of worker:";
cin>>k;
cout<<"Enter number of partition:";
cin>>n;		
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
Solution obj;
cout<<"The maxmimum time taken to paint all the partition is " << obj.minTime(arr, n, k) << endl;

return 0;
}