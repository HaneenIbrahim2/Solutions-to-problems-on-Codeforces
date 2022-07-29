#include<bits/stdc++.h>
using namespace std ;
int main() {
    int count_a=0;
    int count_b= 0 ;
    int count_c=0 ;
    int  max1 ,max2 ,max3;
    string  s;
    for(int i=1 ; i<=3 ; i++){
        cin >> s;
        if(s[1]=='>'){
            if(s[0]=='A'){
                count_a++;
            }else if(s[0]=='B'){
                count_b++;
            }else if(s[0]=='C'){
                count_c++;
            }
        }else if(s[1]=='<'){
            if(s[2]=='A'){
                count_a++;
            }else if(s[2]=='B'){
                count_b++;
            }else if(s[2]=='C'){
                count_c++;
            }

        }
    }
    if(count_c==count_b&&count_c==count_a){
        cout<<"Impossible";
    }else if(count_a>count_b&& count_a>count_c &&count_b>count_c) {
        cout<<"C"<<"B"<<"A";
    }else if(count_a>count_b&& count_a>count_c &&count_b<count_c){
        cout<<"B"<<"C"<<"A";
    }else if(count_b>count_a&& count_b>count_c &&count_a<count_c){
        cout<<"A"<<"C"<<"B";
    }else if(count_b>count_a&& count_b>count_c &&count_a>count_c){
        cout<<"C"<<"A"<<"B";
    }else if(count_c>count_a&& count_c>count_b &&count_a>count_b){
        cout<<"B"<<"A"<<"C";
    }else if(count_c>count_a&& count_c>count_b &&count_a<count_b){
        cout<<"A"<<"B"<<"C";
    }
}

