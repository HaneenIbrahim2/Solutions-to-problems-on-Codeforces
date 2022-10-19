#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n, x, y, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        if (x > y) {
            for (int j = y + 1; j < x; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
            cout << sum << endl;
            sum = 0;
        }
        else if (x < y) {
            for (int j = x + 1; j < y; j++) {
                if (j % 2 != 0) {
                    sum += j;
                }
            }
            cout << sum << endl;
            sum = 0;
        }
        else if (x == y) {
            cout << sum << endl;
        }
    }
}