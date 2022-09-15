// Example of a Class programming

#include <iostream>
#include <string>
using std::string;
using std::cout;

class Car{
    public:
        void printCarData(){
            cout << "The distance that the " << color << " car " << number << " has traveled is: " << distance << "\n";
        }
        void IncrementDistance(){
            distance++;
        }

        Car(string c, int n){
            color = c;
            number = n;
        }
        string color;
        int distance = 1;
        int number;
};

int main(){
    Car car1 = Car("green", 2);
    Car car2 = Car("red",4);
    Car car3 = Car("yellow",5);

    car1.IncrementDistance();

    car1.printCarData();
    car2.printCarData();
    car3.printCarData();
}