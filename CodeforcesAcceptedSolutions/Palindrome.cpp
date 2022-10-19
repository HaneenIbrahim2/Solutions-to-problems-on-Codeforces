#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{

    string s;
    cin >> s;
    bool check = 0;
    bool correct = 0;
    int len = s.length();
    for (int i = 0, j = len - 1; i < len && j >= 0; i++, j--) {
        if (s[i] != s[j]) {
            correct = 1;
        }
        if (s[j] != '0') {
            check = 1;
        }
        else if (s[j] == '0' && check == 0) {
            continue;
        }
        cout << s[j]   ;

    }
    cout << endl;
    if (correct == 0) {
        cout << "YES";

    }
    else
        cout << "NO";


}