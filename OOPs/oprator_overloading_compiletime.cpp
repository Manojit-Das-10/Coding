// #include<bits/stdc++.h>
// using namespace std;

// class param {
// public:
//     int val;

//     // Overloading the + operator to print the difference (as per your requirement)
//     void operator+(param& obj2) {
//         int value1 = this->val;
//         int value2 = obj2.val;
//         cout << (value1 - value2) << endl;  // Printing the difference
//     }
// };

// int main() {
//     param obj1, obj2;
//     obj1.val = 5;
//     obj2.val = 9;

//     // This will print the difference between obj1 and obj2 values
//     obj1 + obj2;

//     return 0;
// }


#include <iostream>
using namespace std;

class s {
public:
    int age;
    int weight;
    int no;

    // Mark the print function as const to indicate it doesn't modify class members
    void print() {
        cout << "Age: " << age << endl;
        cout << "Weight: " << weight << endl;
        cout << "Number: " << no << endl;
    }

    // Friend function to overload << operator
    friend ostream& operator<<(ostream& os, s& obj);
};

// Definition of overloaded << operator
ostream& operator<<(ostream& os, s& obj) {
    // Call the print function, now that it is const-correct
    obj.print();
    return os;  // Return ostream object to allow chaining (e.g., cout << obj1 << obj2)
}

int main() {
    s obj;
    obj.age = 25;
    obj.weight = 70;
    obj.no = 123;

    // Now you can use cout << obj to print the object details
    cout << obj;

    return 0;
}
