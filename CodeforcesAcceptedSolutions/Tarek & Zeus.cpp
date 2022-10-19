#include<iostream>
#include<stack>
using namespace std;
int main() {
    long long  n, m;
    cin>>n;
    int w=0;
    stack <int> s;
    for (int i = 0; i < n; i++) {
        cin >> m;

        if (s.empty()) {
            s.push(m);
            w++;
        }else {
            if (s.top() == m) {
                s.pop();
                --w;

            } else if (s.top()!=m){
                s.push(m);
                w++;

            }
        }

    }if (w <= 3) {
        cout << "YES";


    }
    else {
        cout << "NO";



    }


}