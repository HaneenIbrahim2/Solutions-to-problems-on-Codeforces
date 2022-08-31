#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<char> v{'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    vector<char>v1;
    char s1;
    string s2;
    cin>>s1>>s2;
    if(s1=='R'){
        for(int i=0 ; i<s2.length();i++){
            for(int j=0 ; j<v.size();j++){
                if(s2.at(i)==v.at(j)){
                    cout<<v.at(j-1);
                    break;
                }
            }
        }
    } else if(s1=='L'){
        for(int i=0 ; i<s2.length();i++){
            for(int j=0 ; j<v.size();j++){
                if(s2.at(i)==v.at(j)){
                    cout<<v.at(j+1);
                    break;
                }
            }
        }
    }

}