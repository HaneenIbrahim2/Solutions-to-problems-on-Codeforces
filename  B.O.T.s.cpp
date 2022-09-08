#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{

    long long b, o, t, maxi, mini;
    cin >> b >> o >> t;
    maxi = max(b, max(o, t));
    mini = min(b, min(o, t));
    if (maxi == b && mini == o || maxi == o && mini == b) {
        cout << "Tarek";
    }
    else if (maxi == o && mini == t || maxi == t && mini == o) {
        cout << "Bedo";
    }
    else if (maxi == t && mini == b || maxi == b && mini == t) {
        cout << "Omar";
    }
}