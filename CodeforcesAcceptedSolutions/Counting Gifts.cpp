#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{
    int n ;
    long long counte = 0, countt = 0, countb = 0, countc = 0;
    cin >> n;
    char a;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        if (a == 'c') {
            countc++;
        }
        else if (a == 'b') {
            countb++;
        }
        else if (a == 't') {
            countt++;
        }
        else if (a == 'e'){
            counte++;
        }

    }
    cout << countt << " " << counte << " " << countb << " " << countc;

}