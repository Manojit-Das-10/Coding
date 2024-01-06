#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    bool find3Numbers(int A[], int n, int X)
    {
        // for (int i = 0; i < n; i++)
        // {
            
        //     for (int j = i+1; j < n; j++)
        //     {
        //         for (int k= j+1; k < n; k++)
        //         {
        //             if(A[i]+A[j]+A[k]==X)
        //             {
        //                 return true;
        //             }
        //         }
                
        //     }
            
        // }
        sort(A,A+n);
        for(int i=0; i<n; i++)
        {
            int left = i+1;
            int right = n-1;
            while(left<right)
            {
                int sum=A[i]+A[left]+A[right];
                if(sum==X)
                {
                    return true;
                }
                else if(sum>X)
                {
                    right--;
                }
                else
                {
                    left++;
                }
                    
            }
        }
        return false;
    }
};
int main()
{
int A[]={1,4,6,10,8,45};
int n = 6;
int X=18;
solution s;  // Create an object of the solution class
    if (s.find3Numbers(A, n, X))
    {
        cout << "Triplet found with sum " << X << endl;
    }
    else 
    {
        cout << "No triplet found with sum " << X << endl;
    }

return 0;
}