#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int main()
{
    long long r, s;
    cin >> r >> s;
    if (s >= 2*r) {
        cout << "Square";
    }
    else if (pow(2, 0.5) * s <= 2 * r) {
        cout << "Circle";
    }
    else if (pow(2, 0.5) * s > 2 * r || 2 * r > s) {
        cout << "Complex";
    }


}