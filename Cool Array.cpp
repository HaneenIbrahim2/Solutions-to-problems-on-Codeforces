#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{

    long long n, x   , sum = 0 , count=0 ,i;

    cin >> n;
    long long arr[n];
    for (  i = 0; i < n; i++) {
        cin >> x;
        arr[i] = x ;
        sum += arr[i];


    }for ( i = 0; i < n; i++) {
        if (sum % arr[i] != 0) {
            count++;
        }
    }if (count > 0) {
        cout << "NO";
    }
    else
        cout << "YES";

}