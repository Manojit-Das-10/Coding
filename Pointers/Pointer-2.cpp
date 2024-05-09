#include<bits/stdc++.h>
using namespace std;


// void util(int **q){
//     *q = *q+1;
// }

int *solve(){
    int a = 5;
    int *ans = &a;
    return ans;
}

int main()
{
// int a = 5;
// int *p = &a;

// int **q = &p;

// cout<<&a<<endl;
// cout<<a<<endl;
// cout<<p<<endl;
// cout<<&p<<endl;
// cout<<q<<endl;
// cout<<&q<<endl;
// cout<<*q<<endl;
// cout<<**q<<endl;

// int a = 5;
// int *p = &a;
// int **q = &p;

// cout<<"Before"<<endl;
// cout<<a<<endl;
// cout<<p<<endl;
// cout<<*p<<endl;

// util(q);

// cout<<"After"<<endl;
// cout<<a<<endl;
// cout<<p<<endl;
// cout<<*p<<endl;


int *result = solve();
    // Print the value returned by solve()
    cout << "Value returned by solve(): " << *result <<endl;
    delete result; // Don't forget to free the memory
return 0;
}