#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        for (int j = 1; j <= t; j++) {
            if (j != t) {
                cout << t << " ";
            }
            else if (j == t) {
                cout << t;
            }

        }
        cout << endl;
    }
}