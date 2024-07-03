#include<bits/stdc++.h>
using namespace std;

void print_Digit(int n){
    // Base case
    if(n==0)
    return;
    
    // RR
    print_Digit(n/10);

    // Processing
    cout<<n%10<<" ";

}

int main()
{
int n = 57;

print_Digit(n);

return 0;
}