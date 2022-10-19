#include<iostream>
#include<stack>
#include <vector>
using namespace std;
int main() {
    vector<long long> v;
    long long n;
    long long m, s , max , min,count=0;
    cin >> n;
    for (long long i = 0; i < n; i++) {
        bool temp= false;
        cin >> m;
        if (m == 1) {
            cin >> s;
            for(long long i=0 ; i<v.size();i++){
                if(v[i]==s){
                    temp=true;
                }
            }if(temp!=true){
                v.push_back(s);
                count++;
            }else
                v.push_back(s);



        }
        else if (m == 2) {
            max = v[0];
            for (long long  i = 0; i < v.size(); i++) {
                if (v[i] > max) {
                    max = v[i];
                }
            }
            cout << max << endl;

        }
        else if (m == 3) {
            min = v[0];
            for (long long i = 0; i < v.size(); i++) {
                if (v[i] < min) {
                    min = v[i];
                }
            }
            cout << min << endl;
        }
        else if (m == 4) {
            cout << count << endl;
        }
    }



}
