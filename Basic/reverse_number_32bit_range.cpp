#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(log|x|)
Space Complexity: O(1)
*/

class Solution {
public:
    int reverse(int x) {
     int ans = 0;
        while (x != 0) {
            int temp = x % 10;
            
            // Check for potential overflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && temp > 7))
                return 0; // Overflow condition
            
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && temp < -8))
                return 0; // Overflow condition
            
            ans = ans * 10 + temp;
            x /= 10;
        }
        return ans;
    }
};

int main()
{

    Solution solution;
    
    // Example usage
    int num = 123;
    int reversed = solution.reverse(num);
    cout << "Reversed number of " << num << ": " << reversed << endl;


return 0;
}