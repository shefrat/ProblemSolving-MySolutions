#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--) {
        long long a, b, x,y, sol1, sol2, sol3, sol4;
        cin>>a>>b>>x>>y;
        sol1 = (a-(x+1))*b>0? (a-(x+1))*b : 0;
        sol2 = x*b>0? x*b : 0;
        sol3 = (b-(y+1))*a>0? (b-(y+1))*a : 0;
        sol4 = y*a>0? y*a : 0;
        cout<<max(sol1, max(sol2, max(sol3, sol4)))<<endl;
    }

    return 0;
}