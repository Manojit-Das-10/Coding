#include<bits/stdc++.h>
using namespace std;

void quickSort(vector<int>&a, int start, int end)
    {
        // Base case
        if(start >= end){
            return;
        }
        
        int pivot = end;
        int i = start - 1;
        int j = start;
        
        while(j < pivot){
            if(a[j] < a[pivot]){
                ++i;
                swap(a[i],a[j]);
            }
            j++;
        }
        
        i++;
        swap(a[i],a[end]);
        quickSort(a,start,i-1);
        quickSort(a,i+1,end);

        
    }

int main() {
int n;
cout<<"Enter the size:";
cin>>n;
vector<int>a;
for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    a.push_back(temp);
}
int start = 0;
int end = a.size()-1;
quickSort(a,start,end);

cout << "Sorted array: ";
for(auto val:a){
    cout<<val<<" ";
}

return 0;
}