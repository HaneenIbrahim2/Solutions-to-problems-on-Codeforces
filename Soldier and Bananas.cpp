#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;
int main()
{
    long long k, n, w, salary;
    cin >> k >> n >> w;
    if ((w * (w + 1) / 2)*k <= n) {
        salary = 0;
    }else
        salary = (w * (w + 1) / 2)*k - n;

    cout << salary;

}