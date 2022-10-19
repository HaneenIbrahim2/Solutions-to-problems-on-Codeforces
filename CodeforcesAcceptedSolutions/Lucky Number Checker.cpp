#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
#include <vector>
using namespace std;

int main()
{

    int  n, count = 0;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] != '9' && arr[i] != '6' && arr[i] != '3') {
            count++;
        }
    }
    for(int i=0 ; i<n ; i++){
        if ( i==n-1 ) {
            int s =arr[i]-'0';
            if( s%2==0){
                if(count==0){
                    cout << "YES";
                }
                else
                    cout << "NO";
            }
            else
                cout<<"NO";
        }
    }

}