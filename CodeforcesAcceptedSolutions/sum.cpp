#include<bits/stdc++.h>
using namespace std ;
int main(){
    string s ;
    long long count=0  ,x=11;
    cin>> s;
    if(s.length()<2){
        cout<<"0";
    }else {
        while (x >= 10) {
            x = 0;
            for (int i = 0; i < s.length(); i++) {
                x = x + (s[i] - '0'); //991 , x=19 ,x>10

            }
            s = to_string(x);//s=19
            count++;
        }
        cout << count;
    }

}