#include<bits/stdc++.h>
using namespace std;
   
class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        unordered_map<int,int>hash;
            for(int i=0; i<n; i++)
            {
                hash[arr[i]]++;
            }
            for(int i=0; i<n; i++)
            {
                if(hash[arr[i]]>1)
                {
                    return i+1;
                }
            }
        return -1;
    }
};

int main()
{

int n;
cout << "Enter the size of the array: ";
cin >> n;

int arr[n];
cout << "Enter " << n << " elements of the array: "<<endl;
for (int i = 0; i < n; i++) {
    cin >> arr[i];
 }

Solution obj;
int result = obj.firstRepeated(arr, n);
if (result != -1) {
    cout << "First repeating element is " <<arr[result] <<" at index :" << result   << endl;
} else {
    cout << "No repeating element found." << endl;
}

return 0;
}