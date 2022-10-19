#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n, m, sum = 0;
    for (int i = 1; i <= 100; i++) {
        cin >> n >> m;
        if (m <= 0 || n <= 0) {
            break;
        }
        if (n > m) {
            for (int i = m; i <= n; i++) {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
            sum = 0;
        }
        else if (n < m) {
            for (int i = n; i <= m; i++) {
                sum += i;
                cout << i << " ";
            }
            cout << "sum =" << sum << endl;
            sum = 0;
        }
        else if (n == m) {
            sum = n;
            cout <<n<<" "<< "sum =" << sum;
            sum = 0;
            cout << endl;
        }

    }
}