#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, n, ans, min;
    cin >> t;
    while(t--) {
        cin >> n;
        int a[n];
        min = 100;
        ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] < min) {
                min = a[i];
            }
        }
        for(int i = 0; i < n; i++) {
            if(a[i] > min) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
