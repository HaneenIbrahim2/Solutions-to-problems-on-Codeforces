#include<bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <cerrno>
#include <climits>
using namespace std ;
int main() {
    vector<char>s;
    s.push_back('R');
    s.push_back('O');
    s.push_back('Y');
    s.push_back('G');
    s.push_back('B');
    s.push_back('I');
    s.push_back('V');

    int n ;
    cin>>n;
    for(int i =7; i<n ;i++ ) {
        for (int j = 0; j < s.capacity(); j++) {
            if (s.at(i - 1) != s.at(j) && s.at(i-2) != s.at(j) && s.at(i-3) != s.at(j) && s.at(0) != s.at(j) && s.at(1) != s.at(j) && s.at(2) != s.at(j)) {
                s.push_back(s.at(j));
                break;
            }
        }
    }
    for(int i=0 ; i<s.size(); i++){
        cout<<s.at(i);
    }


}

