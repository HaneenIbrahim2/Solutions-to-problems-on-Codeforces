#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{


    int  n , count=0 ;

    cin >> n;

    char arr[n] ;
    char arr1[n];
    for ( int i = 0; i < n; i++) {
        cin >> arr[i];

    }

    for (int j = 0, i = n - 1; j < n; j++, i--) {
        arr1[j] = arr[i];

    }

    for (int j = 0, i =0; j < n , i<n; j++, i++) {
        if (arr[j] != arr1[i]) {

            count++;
        }
        cout << arr1[j]  ;
    }
    cout<<endl;

    if(count>0){

        cout<<"NO";
    }else

        cout<<"YES";


}
