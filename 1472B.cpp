#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a, gam, ogam, tgam;
    cin >> t;
    while(t--) {
        cin >> n;
        gam = 0;
        ogam = 0;
        tgam = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            gam += a;
            if(a == 1) {
                ogam += a;
            } else {
                tgam += a;
            }
        }
        if(gam % 2 == 0) {
            gam /= 2;
            if(gam % 2 == 0 || (gam % 2 == 1 && ogam != 0)) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
