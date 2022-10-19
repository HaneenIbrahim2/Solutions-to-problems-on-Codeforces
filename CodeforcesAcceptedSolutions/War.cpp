#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{

    long long  n , count=0;
    cin >> n;
    long long strngth;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> strngth;
        arr[i] = strngth;

    }for (int i = 0; i < n; i++) {
        long long a = i + 1;
        while (a <= n) {
            if (arr[i] > arr[a]) {
                count++;

            }
            a++;
        }
        long long  b = i - 1;
        while (b >= 0) {
            if (arr[i] > arr[b]) {
                count++;

            }
            b--;
        }
        cout << count << " ";
        a = 0;
        b = 0;
        count=0;
    }
}