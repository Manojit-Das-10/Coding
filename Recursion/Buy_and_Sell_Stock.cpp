#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    // int maxProfit(vector<int>& prices) {
    //     int buy = prices[0];
    //     int profit = 0;
    //     for (int i = 1; i < prices.size(); i++) {
    //         if (prices[i] < buy) {
    //             buy = prices[i];
    //         } else if (prices[i] - buy > profit) {
    //             profit = prices[i] - buy;
    //         }
    //     }
    //     return profit;

    void maxProfitFinder(vector<int>& prices,int i, int&buy , int&profit){
        // Base Case
        if(i == prices.size()) return;

        // Solve 1 case
        if(prices[i]<buy)
        {
            buy = prices[i];
        } 
        if(prices[i] - buy > profit){
            profit = prices[i] - buy;
        }

        // RE
        maxProfitFinder(prices,i+1,buy,profit);
    }

    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int profit = 0;
        maxProfitFinder(prices,0,buy,profit);
        
        return profit;
    }
};


int main()
{

Solution sol;
vector<int>prices;
int n;
cout<<"No of elements:";
cin>>n;
for (int i = 0; i <n; i++)
{
    int temp;
    cin>>temp;
    prices.push_back(temp);
}

int ans = sol.maxProfit(prices);
cout<<"MaxProfit is "<<ans<<endl;

return 0;
}