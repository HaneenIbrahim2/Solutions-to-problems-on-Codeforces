#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    int sp = n - 1;

    for (int i = 1; i <= n; i++) {
        for (int s = sp; s > 0; s--) {
            cout << " ";
        } sp-=1;

        for (int j = 1; j <= k; j++) {
            cout << "*";


        }k += 2;
        cout << endl;
    }




}
	