#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{

    long  double  a, b;
    cin >> a >> b;
    double d = 1 - a * 0.01;

    double dd = b / d;

    cout << fixed << setprecision( 2) << dd;
}
