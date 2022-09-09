#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long   t, n, v = 1;
    cin >> t;
    for (int i = 1; i <=t; i++) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            v *= i;
        }cout << v << endl;
        v = 1;

    }





}