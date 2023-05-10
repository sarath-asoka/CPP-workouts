#include<iostream>
#include<cassert>
using namespace std;

class Date {
    public:
        Date(int d, int m, int y);
        int Day() { return day; }
        void Day(int d) { 
            if (d >=1 && d <= 31) day = d;
        }
        int Month() { return month; }
        void Month(int m) {
            if (m >=1 && m <= 12) month = m;
        }
        int Year() { return year; }
        void Year(int y) { year = y; }
    private:
        int day{1};
        int month{1};
        int year{0};
};

Date::Date(int d, int m, int y) {
    Day(d);
    Month(m);
    Year(y);
}

int main() {
    Date date(29,8, 1998);
    assert(date.Day() == 29);
    assert(date.Month() == 1);
    assert(date.Year() == 1998);
}
