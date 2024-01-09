#include<bits/stdc++.h>
using namespace std;


int main()
{
int n;
cout<<"Enter the number:";
cin>>n;
if(n>90)
{
    cout<<"Your score is Outstanding."<<endl;
}
else if(n>80 && n<=90)
{
    cout<<"Your score is Excelent."<<endl;
}
else if(n>70 && n<=80)
{
    cout<<"Your score is Very Good."<<endl;
}
else if(n>60 && n<=70)
{
    cout<<"Your score is Good."<<endl;
}
else if(n>50 && n<=60)
{
    cout<<"Your score is Average."<<endl;
}
else if(n>40 && n<=50)
{
    cout<<"Your score is Below Average."<<endl;
}
else
{
    cout<<"You are Fail."<<endl;
}

return 0;
}