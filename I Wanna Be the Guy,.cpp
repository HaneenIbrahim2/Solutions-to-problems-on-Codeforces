#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{

    int n , p , q , sum=0;
    cin >> n;
    int arr1[n];


    for (int i = 0; i < n; i++) {
        arr1[i] = i + 1;

    }cin>>p;
    int arr2[p];
    for (int j = 0; j < p; j++) {
        cin >> arr2[j];

    }
    cin>>q;
    int arr3[q];
    for (int k = 0; k < q; k++) {
        cin >> arr3[k];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            if (arr1[i] == arr2[j]) {
                arr1[i] = 0;
            }

        }

    }for (int i = 0; i < n; i++) {
        for (int k = 0; k < q; k++) {
            if (arr1[i] == arr3[k]) {
                arr1[i] = 0;
            }
        }
    }for (int i = 0; i < n; i++) {
        sum += arr1[i];

    }


    if (sum == 0) {
        cout << "I become the guy.";
    }else
        cout << "Oh, my keyboard!";

}