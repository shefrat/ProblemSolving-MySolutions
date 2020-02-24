#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--) {
        string s;
        int ans = 0;
        cin>>s;
        for(int i = 0; i<s.size(); i++) {
            if(s[i]=='1') {
                for(int j = i+1; j<s.size(); j++) {
                    if(s[j]!='0') {
                        ans += j-i-1;
                        i = j-1;
                        break; 
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}