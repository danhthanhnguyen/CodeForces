#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, ans, n;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ans = 0;
        for(int i = 1; i < n; i++) {
            if(a[ans] != a[i]) {
                ans = i;
                if(ans == n - 1) {
                    cout << ans + 1 << endl;
                    break;
                }
                if(a[ans] != a[i + 1]) {
                    cout << ans + 1 << endl;
                    break;
                }
                if(a[ans] == a[i + 1]) {
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
