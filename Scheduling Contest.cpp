#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{



    int hour, minites;
    char p, m;
    cin >> hour >> minites >> p >> m;
    if (hour<12 &&p=='P') {
        hour = hour + 12;
        if (minites < 10) {
            cout << hour << ":" << "0" << minites;
        }else
            cout << hour << ":" <<  minites;
    }
    else if (hour == 12 && p == 'A') {
        hour = 00;
        if (minites < 10) {
            cout << "0"<<hour << ":" << "0" << minites;
        }
        else
            cout << 0<<hour << ":" << minites;

    }
    else if (hour < 12 && p == 'A') {
        if (hour < 10) {
            if (minites < 10) {
                cout << "0" << hour << ":" << "0" << minites;
            }else
                cout << "0" << hour << ":" <<   minites;
        }else
        if (minites < 10) {
            cout << hour << ":" << "0" << minites;
        }
        else
            cout <<  hour << ":" << minites;
    }else  if (hour == 12 && p == 'P') {
        if (minites < 10) {
            cout << hour << ":" << "0" << minites;
        }
        else
            cout << hour << ":" << minites;
    }
} 