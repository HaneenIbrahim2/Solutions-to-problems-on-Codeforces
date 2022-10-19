#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int n, k, countE = 0, countN = 0, countP = 0, countO = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if(k % 2 == 0  && k>0){

            countE++;
            countP++;
        }
        else if (k == 0) {
            countE++;
        }
        else if (k % 2 != 0 && k>0){
            countP++;
            countO++;

        }else if
                (k % 2 == 0  && k < 0) {

            countE++;
            countN++;
        }
        else if (k % 2 != 0 && k < 0) {
            countN++;
            countO++;
        }
    }
    cout << "Even:" <<" "<< countE << endl;
    cout << "Odd:" << " "<< countO << endl;
    cout << "Positive:"<< " "<< countP << endl;
    cout << "Negative:" << " "<< countN;

}