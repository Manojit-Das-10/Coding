#include<bits/stdc++.h>
using namespace std;

class Animal{

    private:
    int weight;

    public:

    // state or properties
    int age ;
    string name;

    // default Constructor
    Animal(){
        this-> weight = 0;
        this-> age = 0;
        this-> name = "";
        cout<<"Constructor called"<<endl;
    }

    // Parameterized Constructor
    Animal(int age){
        this-> age = age;
        cout<<"Parameterized constructor called"<<endl;
    }

    Animal(int age, int weight){
        this-> age = age;
        this-> weight = weight;
        cout<<"Parameterized constructor 2 called"<<endl;
    }

    Animal(int age, int weight , string name){
        this-> age = age;
        this-> weight = weight;
        this-> name = name;
        cout<<"Parameterized constructor 3 called"<<endl;
    }

    // Copy constructor
    Animal (Animal &obj){
        this-> age = obj.age;
        this-> weight = obj.weight;
        this-> name = obj.name;
        cout<<"I am inside copy constructor"<<endl;
    }

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

    void setWeight(int weight){
        this->weight = weight;
    }
};

int main() {

    // Onject Creation

    // static memory alocation
    
    // Animal cow;
    // cow.age = 12;
    // cow.name = "Nandi";
    // cout<<"Age of cow is: "<<cow.age<<endl;
    // cout<<"Name of cow is: "<<cow.name<<endl;

    // cow.eat();
    // cow.sleep();

    // cow.setWeight(101);
    // cout<<"Weight of cow is: "<<cow.getWeight()<<endl;
    


    // Dynamic memory allocatiom
    // Animal *suresh = new Animal;
    // (*suresh).age = 25;
    // (*suresh).name="billi";

    // // Alternate
    // suresh ->age = 23;
    // suresh->name = "Kutta";

    // suresh -> eat();
    // suresh -> sleep();

    Animal a(20);
    Animal *b = new Animal(100,90,"kutta");

    Animal c = a;

    Animal animal1(c);

return 0;
}