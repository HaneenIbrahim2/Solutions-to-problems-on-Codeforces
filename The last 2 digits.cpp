#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    long long a, b, c, d ,total;
    cin >> a >> b >> c >> d;

    total=	((a % 100)*(b % 100)*(c % 100)*(d % 100)) % 100;
    if (total < 10) {
        cout << 0 << total << "\n";
    }
    else
        cout << total<< "\n";
}


