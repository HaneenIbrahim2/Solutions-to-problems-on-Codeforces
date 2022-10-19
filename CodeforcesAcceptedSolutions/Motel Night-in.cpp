#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long double  s, d   ;
    cin >> d >> s;

    if (s >= (d*2)/3) {
        cout << "Sunny Day";
    }
    else if (s <=(d*1)/3  ) {
        cout << "Rainy Day";
    }
    else
        cout << "Cloudy Day";


}
