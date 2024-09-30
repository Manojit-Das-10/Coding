#include<bits/stdc++.h>
using namespace std;

// Function overloading
class maths{
    public:
    int sum(int a , int b){
        cout<<"Inside first signature."<<endl;
        return a+b;
    }

    int sum(int a, int b, int c){
        cout<<"Inside second signature."<<endl;
        return a+b+c;
    }

    int sum(int a,float b){
        cout<<"Inside third signature."<<endl;
        return a+b;
    }
};

int main() {
maths m;
cout<<m.sum(2,4.3f);

return 0;
}