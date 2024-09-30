#include<bits/stdc++.h>
using namespace std;

// class Animal {

//     public:
//         int age;
//         int weight;
        

//         void eat(){
//             cout<<"Eating"<<endl;
//         }

// };

// class Dog : protected Animal{
//     public:
//         void print(){
//             cout<<this->age;
//         } 
// };

class human{

    public:
    string name;
    int age;
    int height;

    void humanoff(){
        cout<<"Human are living creature."<<endl;;
    }

    void humantalk(){
        cout<<"Human can talk with each others."<<endl;
    }
};

class Female:public human{

};

int main() {

// Dog d1;
// // d1.age;
// d1.print();
Female momi;
momi.humantalk();
momi.humanoff();

return 0;
}