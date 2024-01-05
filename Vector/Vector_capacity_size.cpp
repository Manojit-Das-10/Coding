#include<bits/stdc++.h>
using namespace std;

// void print(vector<char>v)
// {
//     cout<<"Printing Vector:"<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         // cout<<v[i]<<" ";
//         cout<<v.at(i)<<" ";
//     }
//     cout<<endl;
// }
void print(vector<int>v)
{
    cout<<"Printing vector elements:"<<endl;
    for (auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
}

int main()
{
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
print(v);
v.pop_back();
print(v);

// vector<int>v;
// while (true)
// {
//     int d;
//     cout<<"Enter:";
//     cin>>d;
//     v.push_back(d);
//     cout<<"capacity:"<<v.capacity()<<" size:"<<v.size()<<endl;
// }

//  deleting elements from the array
/*v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
print(v);

v.pop_back();
print(v);

v.pop_back();
print(v);

v.pop_back();
print(v);*/

// User input
/*int n;
cout<<"input n:";
cin>>n;
for (int i = 0; i <n; i++)
{
   int d;
   cin>>d;
   v.push_back(d);
}
print(v);

for (int i = 0; i < 10; i++)
{
    v.push_back(90);
}
print(v); 

//clear the vector
v.clear();
print(v);*/

// vector<char>v;
// v.push_back('a');
// v.push_back('b');
// v.push_back('c');
// v.push_back('d');
// // v.print();
// cout<<"Front element:"<< v[0]<<endl;
// cout<<"Front element:"<< v.front()<<endl;
// cout<<"Last element:"<< v.back()<<endl;
// cout<<"Last element:"<< v[v.size()-1]<<endl;

return 0;
}