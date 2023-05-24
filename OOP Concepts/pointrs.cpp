#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 25; // int variable
    int *ptr; // pointer variable, can point to an int

    ptr = &x; //Store the address of x in ptr
    cout << "The value of x is " << x << endl;
    cout << "The address of x is " << ptr << endl;
    cout << "Display the contents of *ptr  " << *ptr << endl;

    // Assign 100 to the location pointer to by ptr. This will assign 100 to x
    *ptr = 100; // Dereferencing happened

    cout << "New value of x is " << x << endl;
    cout << "New address of *ptr is " << *ptr << endl;

    return 0;

}