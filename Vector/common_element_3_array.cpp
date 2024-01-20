#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
        vector<int>ans;
        set<int>momi;
        int i=0,j=0,k=0;
           while(i<n1 && j<n2 && k<n3)
           {
               if(A[i]==B[j] && B[j]==C[k])
               {
                //   ans.push_back(A[i]);
                momi.insert(A[i]);
                   i++;
                   j++;
                   k++;
               }
               else if(A[i]<B[j])
               {
                   i++;
               }
               else if (B[j]<C[k])
               {
                   j++;
               }
               else
               {
                   k++;
               }
           }
           for(auto i:momi)
           {
               ans.push_back(i);
           }
           
           return ans;
    }
};


int main ()
{
    int t; 
    cout<<"Enter the no. of test case:";
    cin >> t;
    int m=1;
    while (t--)
    {
        cout<<"Enter the value for test case "<<m<<" :"<<endl;
        int n1, n2, n3; 
        cout<<"Enter the value of n1:";
        cin >> n1 ;
        cout<<"Enter the value of n2:";
        cin>> n2 ;
        cout<<"Enter the value of n3:";
        cin>> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        m++;
        cout<<"Insert elements in n1:"<<endl;
        for (int i = 0; i < n1; i++) cin >> A[i];
        cout<<"Insert elements in n2:"<<endl;
        for (int i = 0; i < n2; i++) cin >> B[i];
        cout<<"Insert elements in n3:"<<endl;
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        cout << "Common elements are:";
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}