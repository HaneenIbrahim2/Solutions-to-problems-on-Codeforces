#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int main()
{
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if (((y2 - y1) * (x3 - x2)) == ((y3 - y2) * (x2 - x1))) {
        cout << "Yes";
    }
    else
        cout << "No";




}