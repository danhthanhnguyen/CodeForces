#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, ans;
    long long a, b, n;
    cin >> t;
    while(t--) {
        ans = 0;
        cin >> a >> b >> n;
        // solution: a += b(a is min and b is max in (a, b))
        if(a > b) {
            swap(a, b);
        }
        while(b <= n) {
            a += b;
            if(a > b) {
                swap(a, b);
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
