#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, w, h, ans;
    long n;
    cin >> t;
    while(t--) {
        cin >> w >> h >> n;
        ans = 1;
        while(w % 2 == 0 || h % 2 == 0) {
            if(w % 2 == 0) {
                w /= 2;
                ans *= 2;
            }
            if(h % 2 == 0) {
                h /= 2;
                ans *= 2;
            }
            if(ans >= n) {
                break;
            }
        }
        if(ans >= n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
