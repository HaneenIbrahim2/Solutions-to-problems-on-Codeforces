#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int main()
{
    long double x1, x2, y1, y2, r1, r2 ,dis ,x=0,y=0;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    x = x2 - x1;
    y = y2 - y1;
    dis = pow(x, 2) + pow(y, 2);
    dis = pow(dis, 0.5);
    if (dis > (r1 + r2)) {
        cout << "no";

    }
    else if (dis == (r1 + r2) || dis < (r1 + r2)) {
        cout << "yes";
    }
}