#include<bits/stdc++.h>
using namespace std;

int main() {
    int q, n;
    long long a, ans;
    cin >> q;
    while(q--) {
        cin >> n;
        ans = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            ans += a;
        }
        cout << (long long)ceil(ans * 1.0 / n) << endl;
    }
    return 0;
}
