#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    long long eye, mouth, body, k;
    cin >> eye >> mouth >> body;
    if (eye > mouth && eye > body && mouth < body) {
        eye = (eye - mouth) / 2;
        body = body - mouth;
        if (eye < body||eye==body){
            k = mouth + eye;
            cout << k;
        }
        else if (eye>body) {
            k = mouth + body;
            cout<<k;

        }

    }
    else if (eye == 0 || body == 0) {

        k = 0;
        cout << k;
    }
    else if (mouth == 0) {
        if (eye == 1) {
            cout << 1;

        }else
            eye = eye / 2;
        if (eye < body || eye == body) {
            k = eye;
            cout << k;
        }
        else
            k = body;
        cout << k;
    }
    else if (eye>mouth && eye >body && mouth > body) {
        k = body;
        cout << k;
    }
    else if (eye  <mouth && eye  <body && mouth  <body) {
        k = eye;
        cout << k;
    }
    else if (eye < mouth && eye <body && mouth >body) {
        k = eye;
        cout << k;
    }
    else if (eye > mouth && eye < body && mouth < body) {
        eye = (eye - mouth) / 2;
        body = body - mouth;
        if (eye < body) {
            cout << mouth + eye;
        }
        else
            cout << mouth + body;


    }
    else if (eye < mouth && eye >body && mouth > body) {

        k = body;
        cout << k;

    }
    else if (eye == body && body == mouth) {
        cout << mouth;
    }

}