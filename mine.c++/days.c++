#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

string weekday(int d, int m, int y) {
    int LeapYears = y / 4;
    long a = (y - LeapYears) * 365 + LeapYears * 366;
    if (m >= 2) a += 31;
    if (m >= 3 && (y % 4 == 0)) a += 29;
    else if (m >= 3) a += 28;
    if (m >= 4) a += 31;
    if (m >= 5) a += 30;
    if (m >= 6) a += 31;
    if (m >= 7) a += 30;
    if (m >= 8) a += 31;
    if (m >= 9) a += 31;
    if (m >= 10) a += 30;
    if (m >= 11) a += 31;
    if (m == 12) a += 30;
    a += d;
    int b = (a - 2) % 7;
    switch (b) {
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6: return "Saturday";
        case 0: return "Sunday";
    }
    return "";
}

int main() {
    int d, m, y;
    cout<<"Enter  day please "<<endl;
    cin >> d ;
    cout<<"Enter month please "<<endl;
    cin >> m ;
    cout<<"Enter year please "<<endl;
    cin>> y;
    cout << weekday(d, m, y) << endl;
    return 0;
}