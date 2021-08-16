#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    long a, ans;
    cin >> t;
    while(t--) {
        cin >> n;
        ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            ans += a;
        }
        if(ans * 1.0 / n == 1) {
            cout << 0 << endl;
        } else {
            if(ans < n) {
                cout << 1 << endl;;
            } else {
                cout << abs(abs(ans) - n) << endl;;
            }
        }
    }
    return 0;
}
