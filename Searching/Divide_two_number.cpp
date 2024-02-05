#include<bits/stdc++.h>
using namespace std;

int solve(int divident,int divisor)
{
    int s=0;
    int e=abs(divident);
    int ans=0;
    while (s<=e)
    {
        int mid = s+(e-s)/2;
        if(abs(mid * divisor) == abs(divident))
        {
            if((divident>0 && divisor>0)||(divident<0 && divisor<0)){
            return mid;
            }
            else{
                return -mid;
            }
        }
        else if(abs(mid*divisor)>abs(divident))
        {
            e=mid-1;
        }
        else{
            ans = mid;
            s=mid+1;
        }
    }
    if((divident>0 && divisor>0)||(divident<0 && divisor<0))
    {
    return ans;
    }
    else
    {
        return -ans;
    }
}

int main()
{
int divident;
cout<<"Enter the Divident:";
cin>>divident;
int divisor;
cout<<"Enter the Divisor:";
cin>>divisor;
int ans = solve(divident , divisor);
cout<<"Quotient is "<<ans<<endl;

return 0;
}