#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int main()
{
    long long n, r;
    long double  s=0, c=0, a=0;
    const double p = 3.141592654;
    cin >> n >> r;
    c = p * (r * r);
    s = (n * n);
    cout<<fixed<<setprecision(6)<<c-s;


}