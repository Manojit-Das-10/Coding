#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    
    bool isPossibleSolution(int A[], int N, int M, int mid)
    {
        int pagesum = 0;
        int c = 1;
        for(int i=0; i<N; i++)
        {
            if(A[i]>mid)
            {
                return false;
            }
            
            else if (pagesum + A[i] > mid)
            {
                c++;
                pagesum = A[i];
                
                if(c>M)
                {
                    return false;
                }
            }
            
            else 
            {
                pagesum = pagesum + A[i];
            }
        }
        return true;
    }
    
    
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N) return -1;
        
        int start = 0;
        int end = accumulate(A,A+N,0);
        int ans =-1;
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            if(isPossibleSolution(A,N,M,mid))
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
int n;
cout<<"array size: ";
cin>>n;
int A[n];
for(int i=0;i<n;i++){
    cin>>A[i];
}
int m;
cout<<"student size: ";
cin>>m;
Solution ob;
cout << "The maximum number of pages for minimum student is " <<ob.findPages(A, n, m) << endl;
return 0;
}