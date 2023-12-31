#include <iostream>
using namespace std;

class Base {
    public:
        virtual void print() {
            cout << "Base Function" << endl;
        }
};

class Derived : public Base {
    public:
        void print() {
            cout << "Derived Function" << endl;
        }
};

int main() {
    Derived derived1;
    
    // ponter of Base type that points to derived1
    Base* base1 = &derived1;

    // calls memeber function of Derived class
    base1->print();

    return 0;
}