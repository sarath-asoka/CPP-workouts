#include <iostream>
using namespace std;
#include <string>

struct school{
    int rollnum;
    int grade;
    string name;
}; // school structure 

int main(){
    school kv; //variable
    school *kvptr; // variable's pointer

    kvptr = &kv;

    kv.rollnum = 23;
    kvptr->grade = 12;
    kvptr->name="sasmi";

    cout << kv.name << endl;
    cout << kvptr->rollnum << endl;

    return 0;
}