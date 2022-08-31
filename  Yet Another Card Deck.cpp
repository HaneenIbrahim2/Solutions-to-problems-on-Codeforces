#include<iostream>
#include<stack>
#include <vector>
#include <list>
using namespace std;
int main() {
    long long n, q;
    int a , t ,temp;
    list<long long> l;
    std::list<long long>::iterator it;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> a;
        l.push_back(a);
    }
    for (int i = 0; i < q; i++) {
        int counter = 1;
        cin >> t;
        for (it = l.begin(); it != l.end(); it++) {
            if (*it == t) {
                temp = *it;
                l.erase(it);
                l.push_front(temp);
                cout<<counter<<" ";
                break;
            }
            else
                counter++;

        }


    }


}