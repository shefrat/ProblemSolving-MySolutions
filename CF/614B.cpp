#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(0);
    ll t, zeros = 0;
    bool isZero = false;
    string num, kk, other="";

    cin>>t;
    for(long long i = 0; i<t; i++) {
        cin>>kk;
        if(kk=="0") isZero = true;
        else if (kk[0] != '1') {other = kk;continue;}
        else {
            bool safe = true;
            for(int j = 1; j<kk.length(); j++) {
                if (kk[j]!= '0') safe = false;
            }
            if(!safe) { 
                other = kk;
                continue;
            }
        }
        zeros += kk.length() -1 ;
    }

    if(isZero) {
        cout<<"0\n";
        return 0;
    } else if (other.length()==0) {
        num = "1";
    } else {
        num = other;
    }
    for(long long j = 0; j<zeros; j++) num += '0';
    cout<<num<<endl;

    return 0;
}