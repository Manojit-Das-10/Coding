#include<bits/stdc++.h>
using namespace std;

void permutationOfString(string &str, int i){
    // Base case
    if(i >= str.length()-1){
        cout<<str<<" ";
        return;
    }

    for (int j = i; j < str.length(); j++)
    {
        // Swapping the values
        swap(str[i],str[j]);

        // RE call
        permutationOfString(str,i+1);

        // Backtracking
        swap(str[i],str[j]);

    }
    
}

int main()
{
string str = "abc";
int i=0;

permutationOfString(str,i);

return 0;
}