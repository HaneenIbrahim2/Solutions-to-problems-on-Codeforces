#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{
    long long  max , x ,  n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (i == 1) {
            max = x;
        }else
        if (max < x) {
            max = x;
        }
    }
    cout << max;


}