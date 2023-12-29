#include<bits/stdc++.h>
using namespace std;

bool find(vector<int> &arr, int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  //  vector<int>arr;
  //  cout<<"Enter the elements:"<<endl;
  //  for (int i = 0; i < arr.size(); i++)
  //  {
  //     cin>>arr[i];
  //  }
  // int arr[5]={2,5,6,7,3};
  int n;
  cout << "Enter value of N:" << endl;
  cin >> n;
  vector<int> arr(n);
  cout<<"Enter the element in the array:"<<endl;
  for (int i = 0; i < arr.size(); i++)
  {
    cin >> arr[i];
  }

  int size = arr.size();
  int key;
  cout << "Enter the search element:" << endl;
  cin >> key;
  if (find(arr, size, key))
  {
    cout << "Element Found." << endl;
  }
  else
  {
    cout << "Element not Found." << endl;
  }

  return 0;
}