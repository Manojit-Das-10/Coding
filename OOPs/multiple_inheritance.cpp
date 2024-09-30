#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int code;
    A(){
        code = 10;
    }
};

class B{
    public:
    int code;
    B(){
        code = 30909;
    }
};

class c : public A, public B{
    public:
    int dev; 
};


int main() {
c obj;
cout<< obj.A::code<< " " << obj.dev <<endl;

return 0;
}