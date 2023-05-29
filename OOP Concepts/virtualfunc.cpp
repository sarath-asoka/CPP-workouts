#include <iostream>
using namespace std;

class Animal {
    virtual void Talk() const = 0; // Basically used as an interface for derived class
};

class Dog : public Animal {
    public:
        void Talk() const { 
            cout << "Bowoww\n"; //overriden by derived class
        }
};

int main() {
    Dog dog;
    dog.Talk();
}