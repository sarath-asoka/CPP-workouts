#include<cassert>
#include<iostream>
using namespace std;

class Car {
    public:
        string Drive(){ return "Driving way"; }
};

class Boat {
    public:
        string Crusie() { return "cruising";}
};

class AmphiCar : public Car, public Boat {};

int main(){
    Car car;
    Boat boat;
    AmphiCar duck;
    assert(duck.Drive() == car.Drive());
    assert(duck.Crusie() == boat.Crusie());
    
}