#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    long  long a, b, k;
    cin >> a >> b >> k;
    if(a % k == 0 && b%k ==0) {
        cout << "Both";

    }
    else if (a % k == 0 && b % k != 0) {
        cout << "Memo";
    }
    else if (b % k == 0 && a % k != 0) {
        cout << "Momo";
    }
    else if (b % k != 0 && a % k != 0) {
        cout << "No One";
    }




}
