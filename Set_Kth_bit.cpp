#include<bits/stdc++.h>
using namespace std;

class solutuon{
    public:
    int Setkthbit (int N, int K){
       int mask = 1<<K;
       int Answer = N | mask;
       return Answer;
    }

};

int main()
{
int N, K;
cout<<"Enter value of N:";
cin>>N;
cout<<"Enter value of K:";
cin>>K;
solutuon obj;
int Answer = obj.Setkthbit(N,K);
cout<<Answer;
return 0;
}