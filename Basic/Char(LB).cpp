#include<bits/stdc++.h>
#include <sstream>
using namespace std;

void ReverseString(char name[])
{
    int i=0;
    int j= strlen(name)-1;
    // while (i<=j)
    // {
    //     swap(name[i],name[j]);
    //     i++;
    //     j--;
    // }

    for(;i<=j;)
    {
        swap(name[i],name[j]);
        i++;
        j--;   
    }
}

void replacesentence(char sentence[])
{
    int n = strlen(sentence);
    for (int i = 0; i < n; i++)
    {
        if(sentence[i]==' ')
        {
            sentence[i]='@';
        }
    }
}

// void newlinewords(char sen[],char ans[])
// {
//     int n = strlen(sen);
//     for (int i = 0; i < n; i++)
//     {
//         if(sen[i]==' ')
//         {
//             cin>>ans;
//             cout<<endl;
//         }
//     }
//     return ans[];
// }

void converttouppercase(char arr[])
{
    int n = strlen(arr);
    for (int i = 0; i < n; i++)
    {
        arr[i]= arr[i] - 'a' + 'A';
    }
    
}

int main()
{
// char ch[100];
// ch[0]='a';
// ch[1]='b';
// ch[2]='c';
// cin>>ch[3];
// cout<<"Name "<<ch<<endl;
// char name[10];
// cout<<"name:";
// cin>>name;
// for (int i = 0; i <7; i++)
// {
//   cout<<"index : "<<i<<" value is "<<name[i]<<endl;
// }
// int value = int(name[6]);
// cout<<value<<endl;

// char name[10];
// // cin>>name;
// // getline(cin,name);
// cout<<"Input:";
// cin.getline(name,8);
// cout<<name;

// string name;
// cout << "What is your name? ";
// getline(cin, name);
// cout << "Hello " << name << ", nice to meet you.\n";

// char ch[10];
// // ch[2]='m';
// // ch[9]='n';
// cin.getline(ch,5,'b');
// cout<<ch;

// char name[100];
// cin>>name;
// int count=0;
// for (int i = 0; i < 100; i++)
// {
//     if(name[i] != '\0')
//     {
//         count++;
//     }
//     else{
//         break;
//     }
// }

// cout<<count<<endl;
// cout<<strlen(name);

// char name[10];
// cin>>name;
// // for (int i = end; i>=0; i--)
// // {
// //     cout<<name[i];
// // }
// ReverseString(name);
// cout<<name;
// char sentence[100];
// cin.getline(sentence,90);
// replacesentence(sentence);
// cout<<sentence<<endl;

// char sen[100];
// char ans[50];
// cin.getline(sen,90);
// newlinewords(sen,ans);
// cout<<sen;

char arr[100];
cin>>arr;
converttouppercase(arr);
cout<<arr<<endl;

return 0;
}