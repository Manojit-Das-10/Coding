#include<bits/stdc++.h>
using namespace std;

bool isValid_Helper(int n, vector<int>& sweetness, int target, int index) {
    if (target == 0) {
        return true;
    }
    if (target < 0 || index >= n) {
        return false;
    }
    // Try including sweetness[index] in the subset or excluding it
    return isValid_Helper(n, sweetness, target - sweetness[index], index + 1) || 
            isValid_Helper(n, sweetness, target, index + 1);
    }

int isValid(int n, vector<int>& sweetness) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += sweetness[i];
    }
    if (sum % 3 == 0) {
        int target = sum / 3;
        if (isValid_Helper(n, sweetness, target, 0)) {
            return 1;
        }
    }
    return 0;
    }

int main() {
int n;
cout<<"Enter the size: ";
cin>>n;
vector<int>sweetness;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    sweetness.push_back(temp);
}

int ans = isValid(n,sweetness);

if(ans){
    cout<<"It is possible";
}
else{
    cout<<"Not possible";
}


return 0;
}