#include<bits/stdc++.h>
using namespace std;


int main()
{
// int a = 5;
// int *b = &a;
// cout<<a<<endl;
// cout<<&a<<endl;
// cout<<*b<<endl;

// int a = 5;
// int* p = &a;
// cout<<sizeof(p)<<endl;

// char ch = 'b';
// char* c = &ch;
// cout<<sizeof(c)<<endl;

// double dtr = 5.03;
// double* d = &dtr;
// cout<<sizeof(d)<<endl;

// int* q = nullptr;
// cout << sizeof(q) << std::endl;

// Bad Practice
// int *ptr;
// cout<<*ptr<<endl;

// Null Pointer
// int *ptr = nullptr;
// cout<<*ptr<<endl;

// int a = 10;
// int *p = &a;
// // *p = *p + 1;
// // cout<<a<<endl;
// // cout<<*p<<endl; 
// cout<<*p*2<<endl;
// cout << (*p)++ << endl;
// cout<< ++(*p) <<endl;
// a = a+1;
// cout<<a<<endl;
// *p = *p + 2;
// cout<<*p<<endl;
// *p = *p*2;
// cout<<*p<<endl;
// *p = (*p)/2;
// cout<<*p<<endl;

int a = 10;
int *p = &a;
int* dusra = p;
// cout<<p<<endl;
// cout<<dusra<<endl;
// cout<<*dusra<<endl;
cout<<(*p/2)<<endl;
cout<<(*dusra/2)<<endl;



return 0;
}