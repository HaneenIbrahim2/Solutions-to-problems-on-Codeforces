#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long max = 0, n;
    cin >> n;
    n = n * (n + 1) / 2;
    max += 2 * n;


    cout << max;



}
