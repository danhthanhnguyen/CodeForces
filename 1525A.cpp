#include<bits/stdc++.h>
using namespace std;

int main() {
    int t, k, x, y, ans;
    cin >> t;
    while(t--) {
        cin >> k;
        x = k;
        y = 100 - k;
        ans = y ? __gcd(y, x % y) : x;
        cout << 100 / ans << endl;
    }
    return 0;
}
