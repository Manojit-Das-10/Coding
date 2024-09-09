#include<bits/stdc++.h>
using namespace std;

class Animal{

    private:
    int weight;

    public:

    // state or properties
    int age ;
    string name;

    // Behaviour
    void eat(){
        cout<<"Eating"<<endl;
    }

    void sleep(){
        cout<<"Sleeping"<<endl;
    }

    int getWeight(){
        return weight;
    }

    void setWeight(int w){
        weight = w;
    }
};

int main() {

    // Onject Creation

    // static memory alocation
    /*
    Animal cow;
    cow.age = 12;
    cow.name = "Nandi";
    cout<<"Age of cow is: "<<cow.age<<endl;
    cout<<"Name of cow is: "<<cow.name<<endl;

    cow.eat();
    cow.sleep();

    cow.setWeight(101);
    cout<<"Weight of cow is: "<<cow.getWeight()<<endl;
    */


    // Dynamic memory allocatiom
    Animal *suresh = new Animal;
    (*suresh).age = 25;
    (*suresh).name="billi";

    // Alternate
    suresh ->age = 23;
    suresh->name = "Kutta";

    suresh -> eat();
    suresh -> sleep();
    // 

return 0;
}