#include<bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<int>cooksRank , int nP , int mid){
    int curP = 0; // intial cooked prata count
    for (int i = 0; i < cooksRank.size(); i++)
    {
        int R = cooksRank[i] , j = 1;
        int timeTaken = 0;

        while (true)
        {
            if(timeTaken + j * R <= mid){
                ++curP;
                timeTaken += j*R;
                ++j;
            }

            else{
                break;
            }
        }
        
        if(curP >= nP){
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int>cooksRank , int nP){
    int start = 0;
    // end = max element frome vector * total time taken to create all the prata by the cook
    int highestRank = *max_element(cooksRank.begin(),cooksRank.end()); 
    int end = highestRank * (nP * (nP + 1) / 2);
    int ans = -1;

    while (start <= end)
    {
      int mid = start + (end - start)/2;
      if(isPossibleSolution(cooksRank,nP,mid)){
        ans = mid;
        end = mid - 1;
      }
      else{
        start = mid + 1;
      }
    }
    return ans;
}

int main()
{
int t;
cout<<"Number of test case:";
cin>>t;
while (t--)
{
    int nP;
    cout<<"Number of Prata:";
    cin>>nP;
    int nC;
    cout<<"Number of Cook:";
    cin>>nC;
    vector<int>cooksRank;
    cout<<"Insert the Cooks Rank:"<<endl;
    while (nC--)
    {
        int R;
        cin>>R;
        cooksRank.push_back(R);
    }
    
    cout<<"Minimum time required to complete order is:"<<minTimeToCompleteOrder(cooksRank,nP)<<endl;
}

return 0;
}