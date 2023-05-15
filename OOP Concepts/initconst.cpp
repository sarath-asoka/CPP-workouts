#include<iostream>
#include<cassert>

class Birthday {
    public:
        Birthday(int d, int m, int y);
        int Day() { return day; }
        int Month() { return month; }
        int Year() { return year; }
    private:
        int const day;
        int const month;
        int const year;
};

Birthday::Birthday(int d, int m, int y) : day(d), month(m), year(y) {}

int main() {
    Birthday date(17, 2, 1995);
    assert(date.Day() == 17);
    assert(date.Month() == 2);
    assert(date.Year() == 1995);
}