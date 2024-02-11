#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int count1=0;
        int count2=0;
        for(int i=0; i<n; i++)
        {
            if(x==arr[i])
            {
                count1++;
            }
            else if(y==arr[i])
            {
                count2++;
            }
        }
        
        if(count1>count2)
        {
            return x;
        }
         if(count1==count2)
        {
            int ans = min(x,y);
            return ans;
        }
        
        else{
            return y;
        }
        return -1;
    }
};

int main()
{

    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    int y = 4;

    Solution obj;
    int result = obj.majorityWins(arr, n, x, y);
    cout << "Element with more appearances: " << result << endl;


return 0;
}