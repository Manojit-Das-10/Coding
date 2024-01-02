#include<bits/stdc++.h>
using namespace std;

void sortedzerosANDones(int arr[],int n)
{
int countzero=0;
int countone=0;
 for (int i = 0; i < n; i++)
 {
    if(arr[i]==0)
    {
        countzero++;
    }
    if (arr[i]==1)
    {
        countone++;
    }
 }
    int index = 0;
    while (countzero--)
    {
        arr[index]=0;
        index++;
    }
    while (countone--)
    {
        arr[index]=1;
        index++;
    } 
 }
    


int main()
{
int arr[]={0,1,0,0,1,0,1,0,1,0,0,0,1};
int n = 13;
cout<<"Sorted Array is:"<<endl;
sortedzerosANDones(arr,n);
 for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}