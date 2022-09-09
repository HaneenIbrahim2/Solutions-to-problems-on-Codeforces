#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int x, pass = 1999, count = 0;
    int i = 0;
    do {
        cin >> x;
        i++;
        if (x == pass) {

            break;
        }
        count++;
    } while (x != pass);
    while(count!=0){

        cout << "Wrong" << endl;
        count--;
    }
    if (x == pass) {
        cout << "Correct";
    }

}