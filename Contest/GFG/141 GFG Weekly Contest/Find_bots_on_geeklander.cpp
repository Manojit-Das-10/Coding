#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool is_prime(int k){
        if(k==0 or k ==1){
            return false;
        }
             for(int i=2;i<=sqrt(k);i++){
                 if(k%i==0){
                     return false;
                 }
             }
             return true;
         }
    vector<int> findBots(vector<string> &usernames, int n) {
         
          vector<int>v;
           for(int i=0;i<usernames.size();i++){
             string z=usernames[i];
             unordered_map<char,int>mp;
             for(int j=0;j<z.size();j++){
                 if(j%2==0){
                     mp[usernames[i][j]]++;
                 }
             }
              int r=mp.size(); 
              if(is_prime(r)){
                  v.push_back(1);
              }
              else{
                  v.push_back(0);
              }
         }
         return v;
    }
};

int main()
{

    Solution obj;

    // Example usage
    vector<string> usernames = {"abcdef", "pqrs", "xyzuvabb", "aaaaaa"};
    int n = usernames.size();

    vector<int> result = obj.findBots(usernames, n);

    // Output the result
    cout << "Result: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

return 0;
}