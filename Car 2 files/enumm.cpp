#include <iostream>
using namespace std;

enum mobile {Battery=1, Camera=2, Card=4};

int main(){
    int feature = Camera | Card;
    cout << feature;
    return 0;
}