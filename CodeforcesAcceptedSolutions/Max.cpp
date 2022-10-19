#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long n, m, max = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (m > max) {
            max = m;
        }
    }
    cout << max;

}