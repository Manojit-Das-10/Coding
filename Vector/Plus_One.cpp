#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        digits.insert(digits.begin(), 1);
        return digits;
    }
};


int main()
{
Solution sol;
vector<int>digits;
int n;
cout<<"Enter the range:";
cin>>n;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    digits.push_back(temp);
}

vector<int>ans = sol.plusOne(digits);

cout<<"The plus one vector is: ";
for(auto val:ans){
    cout<<val<<" ";
}

return 0;
}