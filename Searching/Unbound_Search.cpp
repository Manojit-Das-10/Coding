#include<bits/stdc++.h>
using namespace std;

/*
Time Complexity: O(log n)
Space Complexity: O(1)
*/
 
int bs(int a[],int start, int end , int x)
{
    while (start <= end)
    {
        int mid = start + (end-start)/2;
        if(a[mid]==x)
        {
            return mid;
        }
        else if (x>a[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return -1;
}

int expsearch(int a[], int x)
{
    if(a[0]==x)
    {
        return 0;
    }
    int i=0,j=1;
    while (a[j]<x)
    {
        i = j;
        j = j*2;
    }
    int start = i , end = j;
    return bs(a, start , end , x);
}
int main()
{
int a[] = {1,2,3,4,5,6,7,8,9,10,11};
int x = 80;
int ans = expsearch(a,x);
if(ans!= -1)
{
cout<<"Element found at index "<<ans<<endl;
}
return 0;
}