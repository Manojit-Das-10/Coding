#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    int age;
    int price;

    void speedup (){
        cout<<"SPeed is too fast."<<endl;
    }
};

class Scorpio:public Car{
    public:
    int tag;
};

class Thar:public Car{
    public:
    int speed;
};

int main() {
Scorpio s;
s.speedup();

Thar T;
T.speedup();

return 0;
}