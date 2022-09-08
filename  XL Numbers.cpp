#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{
    unsigned long long a, b, sum = 0;
    cin >> a >> b;
    sum = a + b;
    if (sum <= 9223372036854775807)
        cout << "no";

    else
        cout << "yes";
}
    