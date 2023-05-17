#include <iostream>
#include <string>
using namespace std;

class Animal {
    public:
        void Talk() const { cout << "Talk\n"; }
};

class Human : public Animal {
    public:
    void Talk(string content) const { cout << content << "\n"; }
};

class Baby : private Human {
    public:
    void Cry() { Talk("Whaaaaaaaa"); }
};

int main(){
    Human human;
    Baby baby;
    human.Talk("Hello World");
    baby.Cry();
    //baby.Talk("Quantum mechanics says that ... ");
    // Inaccessible for baby class
}