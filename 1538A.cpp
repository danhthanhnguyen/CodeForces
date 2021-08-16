#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a, ans = 0, posmin = 0, posmax = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a == 1) {
                posmin = i;
            }
            if(a == n) {
                posmax = i;
            }
        }
        if(posmax > posmin) {
            ans = min(posmax + 1, min(n - posmax + posmin + 1, n - posmin));
        } else {
            ans = min(posmin + 1, min(n - posmin + posmax + 1, n - posmax));
        }
        cout << ans << endl;
    }
    return 0;
}
