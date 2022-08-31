#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t , n , d ,x ;
    vector <int>v1;
    cin>>t;


    while(t--){
        int min1=0 , min2=0, k=0;
        bool flag=0;
        cin>> n>> d;
        for(int i =0 ; i<n ; i++){
            cin>>x;
            v1.push_back(x);

            if(v1[i]>d){
                flag=1;
            }
        }
        if(flag==1) {
            while (k < v1.size()) {

                if (v1[k] > d) {

                    for (int j = 0; j < v1.size(); j++) {
                        if(j==0) {
                            min1 = min(v1[j], v1[j + 1]);
                        }else
                            min1 = min(min1, v1[j]);


                    }
                    int index=0;
                    for(int h=0 ; h<v1.size();h++){
                        if(v1[h]==min1){
                            index=h;
                            break;
                        }

                    }
                    for (int j = 0; j < v1.size(); j++) {
                        if(j==0) {
                            min2 = max(v1[j], v1[j + 1]);
                        }else
                            min2 = max(min2, v1[j]);

                    }
                    for (int j = 0; j < v1.size(); j++) {

                        if(v1[j]<min2&&j!=index){
                            min2=v1[j];

                        }
                    }
                    if ((min1 + min2) <= d) {
                        v1[k] = min1 + min2;
                        k++;
                        continue;
                    } else
                        cout << "NO" << endl;
                    v1.clear();
                    break;
                } else
                    k++;
                continue;
            }
            bool  temp=0;
            for(int j = 0; j < v1.size(); j++){
                if(v1[j] >d){
                    temp=0;

                }else
                    temp=1;

            } if  (temp==1 ) {

                cout << "YES" << endl;
                v1.clear();
            }

        }else
            cout<<"YES"<<endl;
        v1.clear();


    }

}