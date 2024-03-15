#include<bits/stdc++.h>
using namespace std;

// T.C. - O(n)
// S.C. - O(1)

bool checkpalindrome(char sen[])
{
    int n = strlen(sen);
    int i=0;
    int j=n-1;
    while (i<=j)
    {
        if(sen[i]==sen[j])
        {
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main()
{
char sen[100];
cin>>sen;
checkpalindrome(sen);
if(checkpalindrome(sen)== true)
{
    cout<<"Palindrome";
}
else{
    cout<<"Not Palindrome";
}
// cout<<palindrome(sen);
return 0;
}