#include <iostream>
using namespace std;
int main()
{
    int  n, sum = 0, count = 0, s;
    cin >> n;
    long long    m[11], ms[44] = {};
    long long  arr[11];

    for (int i = 0; n > 0; i++) {
        s = n % 10;

        arr[i] = s;

        n = n / 10;
        count++;
    }
    for (int i = 0; count > 0; i++) {
        for (int j = 0; arr[i] > 0; j++) {

            ms[j] = arr[i] % 2;
            arr[i] = arr[i] / 2;
            if (j == 0) {
                sum += ms[j];
            }
        }
        count--;

    }


    cout << sum;
}
