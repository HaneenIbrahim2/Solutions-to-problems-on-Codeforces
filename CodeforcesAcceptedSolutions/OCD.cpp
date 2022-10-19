#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{
    int n , count=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != n) {
            count++;
        }

    }if (count > 0) {
        cout << "Sad";
    }
    else
        cout << "Happy";
}