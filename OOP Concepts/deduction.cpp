#include <cassert>
#include <string>
#include <vector>
using namespace std;

template <typename T>
T Max(T a, T b) {
    return a > b ? a : b;
}

int main(){
    assert(Max(1,2) == 2);
    assert(Max(1.2,3.2) == -1.0);
    assert(Max('a', 'b') == 'b');

    //vector<int> v{1,2,3,4};
    vector v{1,2,3,4};
    assert(v.size() == 4);
    
}

// g++ -std=c++17 .\deduction.cpp This works fine