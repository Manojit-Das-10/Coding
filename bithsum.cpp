#include<bits/stdc++.h>
using namespace std;
int main()
{ 
int date,sum1,result1=0;
cout<<"enter the date:"<<endl;
cin>>date;
while(sum1>=date)
{
    sum1=date%10;
    result1=sum1+result1;
    date=date/10;
}
int month,sum2,result2=0;
cout<<"enter the month:"<<endl;
cin>>month;
while(sum2>=month)
{
    sum2=month%10;
    result2=sum2+result2;
    month=month/10;
}
int year,sum3,result3=0;
cout<<"enter the year:"<<endl;
cin>>year;
while(sum3>=year)
{
    sum3=year%10;
    result3=sum3+result3;
    year=year/10;
}
cout<<"The addition of the Date , Month & Year is : "<<result1+result2+result3;
return 0;
}