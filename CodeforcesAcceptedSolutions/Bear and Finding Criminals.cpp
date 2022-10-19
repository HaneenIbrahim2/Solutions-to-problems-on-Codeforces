#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, a, t, count = 0,j;
    cin >> n >> a;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) {
            count++;
        }
    }
    if (a == 1) {
        cout << count;
    } else {
        j=a;
        for (int i = a - 2; i >= 0; i--) {

            if(j<n ){
                if ((arr[i] == 0 && arr[ j] == 1) || (arr[i] == 1 && arr[j] == 0)) {
                    count--;

                }
            }
            j++;


        }
        cout<<count;
    }

}