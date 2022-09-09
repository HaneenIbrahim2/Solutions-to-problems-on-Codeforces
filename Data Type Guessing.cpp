#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long double n, k, a;
    cin >> n >> k >> a;

    if
            (((n * k) / a > 2147483647 || (n * k) / a < -2147483647) && (n * k) / a == floor((n * k) / a)) {
        cout << "long long";
    }
    else if (((n * k) / a <= 2147483647 || (n * k) / a >= -2147483647) && (n * k) / a == floor((n * k) / a)) {
        cout << "int";

    }
    else if ((n * k) / a != floor((n * k) / a)) {
        cout << "double";
    }
}