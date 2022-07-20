
#for get max for every time he less his containers

#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n , m ,max ,index=0 ,out=0;
    vector<int>v;
    cin>>n>>m;
    bool flag;

    long long arr1[m],arr2[m];
    for(int i=0 ; i<m ;i++){
        cin>>arr1[i]>>arr2[i];

    }while(n!=0) {
        max = 0;
        for (int i = 0; i < m; i++) {
            flag = false;
            for(int j=0 ; j<v.size();j++) {
                if(i==v[j]) {
                    flag= true;
                    break;
                }
            }
            if (!flag) {
                if (arr2[i] >= max) {
                    max = arr2[i];
                    index = i;

                }
            }

        }
           v.push_back(index);


            if (n > arr1[index]) {
                n = n - arr1[index];
                out = out + (max * arr1[index]);


            } else if (n <= arr1[index]) {
                out = out + (max * n);

                n = 0;

            }
        }




    cout<<out;
}

