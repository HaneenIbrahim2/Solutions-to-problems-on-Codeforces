#include<bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    string s;
    cin>>n;
    cin>>s;
    map<char,int>m;
    if(s.length()<26){
        cout<<"NO";
    }else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for (int i = 0; i < s.length(); i++) {
            m.insert({s.at(i), 0});

        }
        if (m.size() == 26) {
            cout << "YES";
        } else
            cout << "NO";
    }

}
 