#include<bits/stdc++.h>
using namespace std;

// int countBits(int N)
// {
// int count = 0;
// while (N>0)
// {
//    int bits = N % 2 ;
//    if(bits == 1)
//    {
//     count++ ;
//    }
//    N = N / 2;
// }
// return count;
// }

int Countbitsnumber(int N)
{
    int count = 0;
    while (N)
    {
        int LSB = (N&1);
        if(LSB == 1)
        {
            count++;
        }
        // N = N >> 1;
        N>>=1;
    }
    return count;
}

int main()
{
int N;
cout<<"Input N:";
cin>>N;
// int countbits = countBits(N);
// cout<<countbits<<endl;

int Countbit = Countbitsnumber(N);
cout<<Countbit<<endl;

return 0;
}