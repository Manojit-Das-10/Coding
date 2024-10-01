#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:

    Animal(){
        cout<<"I am inside Animal constructor."<<endl;
    }

    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog : public Animal{

    public:

    Dog(){
        cout<<"I am inside Dog constructor."<<endl;
    }

    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main() {
// Dog a;
// a.speak();

// Animal* a = new Animal();
// a->speak();

// Dog* a = new Dog();
// a->speak();

// // Upcasting
// Animal* a = new Dog();
// a->speak();

// // Downcasting
// Dog* b =(Dog *) new Animal();
// b->speak();

// Animal *a = new Animal();

Animal *a = new Dog();

// Dog *a = new Dog();
// Dog a;

// Dog *a = (Dog*) new Animal();

return 0;
}