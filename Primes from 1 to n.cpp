#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{

    int n  ;

    cin >> n;
    bool check = 0;



    for (int i = 2 ; i <= n; i++) {
        for (int j = 2 ; j <i; j++) {
            if (i == 2) {
                cout << 2 << " ";
            }
            if(i%j==0){
                check = 1;
            }




        }
        if (check == 0) {
            cout << i << " ";

        }
        else if (check == 1) {
            check = 0;

        }
    }


}