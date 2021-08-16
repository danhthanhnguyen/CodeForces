#include<bits/stdc++.h>
using namespace std;

int main() {
    long t, ans;
    int n, r;
    cin >> t;
    while(t--) {
        cin >> n;
        ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> r;
            if(r == 1 || r == 3) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
