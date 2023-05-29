#include <cassert>
#include <string>
using namespace std;

class Animal {
    public:
        virtual string Talk() const = 0;
};

class Cat {
    public:
        string Talk() const override;
};

string Cat::Talk() const { return "Mewow";}

int main() {
    Cat cat ;
    assert(cat.Talk() == "Mewow");
}