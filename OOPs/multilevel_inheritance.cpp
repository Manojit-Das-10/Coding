#include<bits/stdc++.h>
using namespace std;

class fruit {
    public:
    string name;

};

class Mango : public fruit {
    public:
    int weight;

};

class Alphonso : public Mango{
    public:
    int sugerlevel;
};

int main() {
Alphonso a;
cout<<a.name<<" "<<a.weight<<" "<<a.sugerlevel<<" "<<endl;

return 0;
}