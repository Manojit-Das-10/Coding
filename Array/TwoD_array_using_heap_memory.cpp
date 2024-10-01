#include<bits/stdc++.h>
using namespace std;


int main() {
int n = 5;
int m = 3;

int** arr = new int *[5];

for (int i = 0; i < n; i++)
{
    arr[i] = new int [m];
}

  // Initialize the array to 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = 0;  // Initializing all elements to 0
        }
    }

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}


   // Free dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

return 0;
};