#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int mincostTickets_Helper(vector<int>& days, vector<int>& costs,int i){
        // base case
        if(i >= days.size()){
            return 0;
        }

        // Solve one case
        // 1 day pass taken
        int cost1 = costs[0] + mincostTickets_Helper(days,costs,i+1);

        // 7 days pass taken
        int passEndDay = days[i] + 7 - 1;
        int j = i;
        while(j < days.size() && days[j] <= passEndDay){
            j++;
        }
        int cost7 = costs[1] + mincostTickets_Helper(days,costs,j);

        // 7 days pass taken
        passEndDay = days[i] + 30 - 1;
        j = i;
        while(j < days.size() && days[j] <= passEndDay){
            j++;
        }
        int cost30 = costs[2] + mincostTickets_Helper(days,costs,j);

        return min(cost1,min(cost7,cost30));
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        return mincostTickets_Helper(days,costs,0);
    }
};

int main()
{

Solution sol;
vector<int>days = {2,5,8};
vector<int>costs = {2,3,10};

int ans = sol.mincostTickets(days,costs);
cout<<"Minimum cost is:"<<ans;

return 0;
}