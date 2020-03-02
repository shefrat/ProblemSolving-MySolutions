#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    int n,m;
    bool Ican= true;
    cin>>n>>m;
    
    int tab[n+1][m+1];
    int res[n+1][m+1];
    int checking[n+1][m+1];
    fill(*res, *res + (n+1)*(m+1), 1);
    fill(*checking, *checking + (n+1)*(m+1), 0);

    for(int i = 0; i<n; i++)
        for(int j = 0; j<m; j++)
            cin>>tab[i][j];

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(tab[i][j] == 0) {
                for(int k = 0; k<n; k++) {
                    res[k][j] = 0;
                }

                for(int k = 0; k<m; k++) {
                    res[i][k] = 0;
                }
            }
        }
    }

    // Check if we can build 'tab' from 'res'
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(res[i][j]==1) {
                for(int k = 0; k<n; k++) {
                    checking[k][j] = 1;
                }

                for(int k = 0; k<m; k++) {
                    checking[i][k] = 1;
                }

            }
        }
    }

    // Check
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            if(tab[i][j]==1 && checking[i][j]!=1) Ican = false;
        }
    }


    // Result
    if(Ican) {
        cout<<"YES\n";
        for(int i = 0; i<n; i++) {
            for(int j = 0; j<m; j++) {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }

    } else {
        cout<<"NO\n";
    }

    return 0;
}