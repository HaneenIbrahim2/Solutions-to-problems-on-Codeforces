#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, s;
    bool temp = false, flag;
    cin >> n >> m;
    if (m % 2 == 0) {
        cout << "NO";
    } else if (m % 2 != 0) {
        for (int i = 2; i <= m - 1; i++) {
            if (m % i == 0) {
                temp = true;
            }
        }
        if (temp != true) {
            for (int j = n + 1; j < m; j++) {

                if(j%2!=0) {
                    flag = true;
                    s = j / 2;
                    for (int i = 2; i <= s; i++) {
                        if (j % i == 0) {
                            flag = false;
                            break;
                        }

                    }if(flag==true){
                        cout<<"NO";
                        break;
                    }
                }
            }
            if (flag != true) {
                cout << "YES";
            }
        } else if (temp == true) {
            cout << "NO";
        }
    }
}