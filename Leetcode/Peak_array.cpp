#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        vector <int> answer;
        int n = mountain.size();
        for (int i = 1; i <(n-1); i++)
        {
        if ((mountain[i-1]<mountain[i]) && (mountain[i]> mountain[i+1]))
        {
            answer.push_back(i);
        }
                
        }
        return answer;
        
    }
};

int main()
{
int mountainsize;
cout<<"Mountain Elements are:";
cin>>mountainsize;

vector<int> mountain(mountainsize);
cout << "Enter elements of the mountain:"<<endl;
for (int i = 0; i < mountainsize; i++) {
    cin >> mountain[i];
}

Solution obj;
vector<int> answer = obj.findPeaks(mountain);
cout<<"Peak elements index:";
for (int i : answer)
{
    cout<<i<<" ";
}

return 0;
}