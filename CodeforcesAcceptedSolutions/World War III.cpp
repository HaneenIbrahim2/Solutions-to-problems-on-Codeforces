#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long r, R, count = 0, last = 0 ;
    cin >> n >> r;
    for (int i = 1; i <= n; i++) {
        cin >> R;
        if (R == r) {
            count++;
            last = i;
            if (count == 1) {
                cout << i << " ";

            }

        }

    }if (count >= 1) {


        cout << last << " " << count;
    }
    else if (count == 0) {
        cout << "-1";
    }
}